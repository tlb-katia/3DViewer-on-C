//
// Created by Jacquelyn Packard on 10.11.2023.
//

#include "s21_parser.h"

// int main (void) {
//     Vertex_array *vertex = NULL;
//     Faces_array *faces = NULL;
//     int error =
//     s21_parser("/home/katya/School21/C8_3DViewer_v1.0-1/src/obj/incorrect/incorrect_notation.obj",
//     &vertex, &faces); printf("%d\n", error); if (!error) {
// //        print_ver_arr(vertex);
// //        print_ver_arr(vertex);
//    } else printf("it doesn't work\n");

//    return 0;
// }

int s21_parser(char *filename, Vertex_array **vertex, Faces_array **faces) {
  setlocale(LC_ALL, "C");
  int error = OK;
  FILE *ptr = fopen(filename, "r");
  if (!ptr)
    error = ERROR;
  else {
    char buffer[BUF_SIZE] = {0};
    while (fgets(buffer, BUF_SIZE, ptr) != NULL) {
      if (!(strncmp(buffer, "v ", 2)) && !error) {
        error = s21_parseVertices(buffer, vertex);
      } else if (!(strncmp(buffer, "f ", 2))) {
        error = s21_parseFaces(buffer, faces, vertex);
      }
    }
    fclose(ptr);
  }
  if (!*vertex || !*faces) error = ERROR;

  return error;
}

int s21_parseVertices(char *str, Vertex_array **vertex) {
  int error = ERROR;
  double buffer[3] = {0, 0, 0};

  int numRead =
      sscanf(str, "v %lf %lf %lf", &buffer[0], &buffer[1], &buffer[2]);
  if (numRead == 3) {
    error = s21_pushArrayVertices(buffer, vertex);
  }
  return error;
}

int s21_parseFaces(char *str, Faces_array **faces, Vertex_array **vertex) {
  int error = ERROR;
  int arrSize = (int)strlen(str);
  int buffer[arrSize];
  char *end;
  double ret;
  bool flag = 1;
  int j = 0;

  for (int i = 0; i < arrSize; i++) {
    if ((ret = strtod(&str[i], &end)) && flag) {
      if (ret < 0) {
        ret = (*vertex)->rows / 3 + ret + 2;
      }
      buffer[j++] = (int)ret;
      flag = 0;
    } else if (str[i] == ' ') {
      flag = 1;
    }
  }
  if (buffer[0]) error = s21_pushArrayFaces(buffer, faces, j);
  return error;
}

int s21_pushArrayVertices(double *verArray, Vertex_array **vertex) {
  int error = ERROR;

  if (!*vertex) {
    *vertex = calloc(1, sizeof(Vertex_array));
    (*vertex)->array = calloc(3, sizeof(double));
    if ((*vertex)->array) {
      error = OK;
      (*vertex)->rows = 0;
      (*vertex)->max_ver_num = MIN;
      for (int i = 0; i < 3; i++) {
        (*vertex)->array[i] = verArray[i];
        if ((*vertex)->max_ver_num < (*vertex)->array[i]) {
          (*vertex)->max_ver_num = (*vertex)->array[i];
        }
        (*vertex)->rows = i;
      }
    }

  } else {
    (*vertex)->array =
        realloc((*vertex)->array, ((*vertex)->rows + 4) * sizeof(double));
    if ((*vertex)->array) {
      error = OK;
      for (int i = 0; i < 3; i++) {
        (*vertex)->rows++;
        (*vertex)->array[(*vertex)->rows] = verArray[i];
        if ((*vertex)->max_ver_num < fabs((*vertex)->array[i])) {
          (*vertex)->max_ver_num = fabs((*vertex)->array[i]);
        }
      }
    }
  }
  return error;
}

int s21_pushArrayFaces(int *facesArray, Faces_array **faces, int j) {
  int error = ERROR;
  //  int temp = 0;
  if (!*faces) {
    *faces = calloc(1, sizeof(Faces_array));
    (*faces)->array = calloc(j * 2, sizeof(int));
    if ((*faces)->array) {
      error = OK;
      (*faces)->count = 0;
      s21_fillDoubleArray(faces, facesArray, j);
    }
  } else {
    (*faces)->array =
        realloc((*faces)->array, (2 * (*faces)->count + j + 1) * sizeof(int));
    if ((*faces)->array) {
      error = OK;
      (*faces)->count++;
      s21_fillDoubleArray(faces, facesArray, j);
    }
  }
  return error;
}

void s21_fillDoubleArray(Faces_array **faces, int *facesArray, int j) {
  int i = 0;
  for (; i < j; i++, (*faces)->count++) {
    (*faces)->array[(*faces)->count] = facesArray[i] - 1;
    if (i != 0) {
      (*faces)->array[++(*faces)->count] = facesArray[i] - 1;
    }
  }
  (*faces)->array[(*faces)->count] = facesArray[0] - 1;
}

void freeVertex(Vertex_array **vertex) {
  if (*vertex) {
    if ((*vertex)->array) {
      free((*vertex)->array);
    }
    free(*vertex);
    *vertex = NULL;
  }
}

void freeFaces(Faces_array **faces) {
  if (*faces) {
    if ((*faces)->array) {
      free((*faces)->array);
    }
    free(*faces);
    *faces = NULL;
  }
}

void print_ver_arr(Vertex_array *vertex) {
  for (int i = 0; i <= vertex->rows; i++) {
    if (i != 0 && i % 3 == 0) printf("\n");
    printf("%lf ", vertex->array[i]);
  }
  printf("\n");
  printf("%lf ", vertex->max_ver_num);
  printf("\n");
}

void print_face_arr(Faces_array *faces) {
  for (int i = 0; i <= faces->count; i++) {
    if (faces->array[i] < 0) printf("%d ", faces->array[i]);
  }
}

int s21_resize(Vertex_array *vertex, double step) {
  int error = ERROR;
  if (vertex) {
    for (int i = 0; i < vertex->rows + 1; i++) {
      vertex->array[i] *= step;
    }
    error = OK;
  }
  return error;
}
