//
// Created by Jacquelyn Packard on 12.12.2023.
//
#include "s21_parser.h"

#ifndef SRC_TRANSFORMATIONS_H
#define SRC_TRANSFORMATIONS_H

typedef struct {
    double x;
    double y;
    double z;
}Vector3D;

#define S21_PI 3.1416

int rotation_by_ox (Vertex_array** array, double angle);
int rotation_by_oy (Vertex_array** array, double angle);
int rotation_by_oz (Vertex_array** array, double angle);
int translate_by(Vertex_array** array, Vector3D vector);
#endif //SRC_TRANSFORMATIONS_H
