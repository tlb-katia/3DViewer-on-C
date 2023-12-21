//
// Created by Jacquelyn Packard on 12.12.2023.
//
#include "transformations.h"

#include "s21_parser.h"

//int main(void) {
//  Vertex_array* vertex = NULL;
//  double verArray[3] = {1.0, 2.0, 3.0};
//  s21_pushArrayVertices(verArray, &vertex);
//  Vector3D vector = {10.2, 127.8, -34.6};
//
//  translate_by(&vertex, vector);
//
//  print_ver_arr(vertex);
//}

int rotation_by_ox(Vertex_array** array, double angle) {
  int error = ERROR;
  if (*array) {
    double radians = (angle * S21_PI) / 180;

    for (int i = 0; i < (*array)->rows + 1; i += 3) {
      double temp_y = (*array)->array[i + 1];
      double temp_z = (*array)->array[i + 2];

      (*array)->array[i + 1] = temp_y * cos(radians) + temp_z * sin(radians);
      (*array)->array[i + 2] = -temp_y * sin(radians) + temp_z * cos(radians);
    }
    error = OK;
  }
  return error;
}

int rotation_by_oy(Vertex_array** array, double angle) {
  int error = ERROR;
  if (*array) {
    double radians = (angle * S21_PI) / 180;
    for (int i = 0; i < (*array)->rows + 1; i += 3) {
      double temp_x = (*array)->array[i];
      double temp_z = (*array)->array[i + 2];

      (*array)->array[i] = temp_x * cos(radians) + temp_z * sin(radians);
      (*array)->array[i + 2] = -temp_x * sin(radians) + temp_z * cos(radians);
    }
    error = OK;
  }
  return error;
}

int rotation_by_oz(Vertex_array** array, double angle) {
  int error = ERROR;
  if (*array) {
    double radians = (angle * S21_PI) / 180;

    for (int i = 0; i < (*array)->rows + 1; i += 3) {
      double temp_x = (*array)->array[i];
      double temp_y = (*array)->array[i + 1];

      (*array)->array[i] = temp_x * cos(radians) - temp_y * sin(radians);
      (*array)->array[i + 1] = temp_x * sin(radians) + temp_y * cos(radians);
    }
    error = OK;
  }
  return error;
}

int translate_by(Vertex_array** array, Vector3D vector) {
  int error = ERROR;
  if (*array) {
    for (int i = 0; i < (*array)->rows + 1; i += 3) {
      (*array)->array[i] = (*array)->array[i] + vector.x;
      (*array)->array[i + 1] = (*array)->array[i + 1] + vector.y;
      (*array)->array[i + 2] = (*array)->array[i + 2] + vector.z;
    }
    error = OK;
  }
  return error;
}
