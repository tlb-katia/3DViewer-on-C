#ifndef TESTS_H
#define TESTS_H

#include <check.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "../backend/s21_parser.h"
#include "../backend/transformations.h"

Suite *testVertexArray();
Suite *testParsing();
Suite *testTransformations();

#endif  // TESTS_H
