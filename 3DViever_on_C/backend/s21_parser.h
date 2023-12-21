//
// Created by Jacquelyn Packard on 10.11.2023.
//

#ifndef VIEWER_S21_PARSER_H
#define VIEWER_S21_PARSER_H

#include <float.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 5000
#define MIN -DBL_MAX

enum parsing_status { OK, ERROR };

typedef struct vertex_array {
  double *array;
  int rows;  // don't get fooled :) it's the amount of vertices, not rows Sowwy
             // :(
  double max_ver_num;
} Vertex_array;

typedef struct faces_array {
  int *array;
  int count;
} Faces_array;

int s21_parser(char *filename, Vertex_array **vertex, Faces_array **faces);
int s21_parseVertices(char *str, Vertex_array **vertex);
int s21_parseFaces(char *str, Faces_array **faces, Vertex_array **vertex);
int s21_pushArrayVertices(double *array, Vertex_array **vertex);
int s21_pushArrayFaces(int *facesArray, Faces_array **faces, int j);
void s21_fillDoubleArray(Faces_array **faces, int *facesArray, int j);
int s21_resize(Vertex_array *vertex, double step);

void freeVertex(Vertex_array **vertex);
void freeFaces(Faces_array **faces);

void print_ver_arr(Vertex_array *vertex);
void print_face_arr(Faces_array *faces);

#endif  // VIEWER_S21_PARSER_H
