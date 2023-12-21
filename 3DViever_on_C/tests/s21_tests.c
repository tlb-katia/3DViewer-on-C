#include "s21_tests.h"

int main(void) {
  int error = 0;
  Suite *s21Viewer[] = {testVertexArray(), testParsing(),
                        testTransformations()};
  for (int i = 0; i < 3; i++) {
    SRunner *runner = srunner_create(s21Viewer[i]);
    srunner_set_fork_status(runner, CK_NOFORK);
    srunner_run_all(runner, CK_NORMAL);
    error += srunner_ntests_failed(runner);
    srunner_free(runner);
  }
  printf("\n====== ERORRS: %d ======\n", error);

  return 0;
}

START_TEST(pushMatrix1) {
  Vertex_array *vertex = NULL;
  double verArray[3] = {1.0, 2.0, 3.0};

  int result = s21_pushArrayVertices(verArray, &vertex);

  ck_assert_double_eq(1.0, vertex->array[0]);
  ck_assert_double_eq(2.0, vertex->array[1]);
  ck_assert_double_eq(3.0, vertex->array[2]);
  ck_assert_double_eq(3.0, vertex->max_ver_num);

  ck_assert_int_eq(result, 0);

  freeVertex(&vertex);
}
END_TEST

START_TEST(pushMatrix2) {
  Vertex_array *vertex = NULL;
  double verArray[3] = {1.0, 2.0, 3.0};

  int result = s21_pushArrayVertices(verArray, &vertex);

  ck_assert_double_eq(1.0, vertex->array[0]);
  ck_assert_double_eq(2.0, vertex->array[1]);
  ck_assert_double_eq(3.0, vertex->array[2]);
  ck_assert_double_eq(3.0, vertex->max_ver_num);

  ck_assert_int_eq(result, 0);

  freeVertex(&vertex);
}
END_TEST

Suite *testVertexArray() { /*creates a set of tests*/
  Suite *testSet = suite_create("\033[45m-=fillMatrix_tc=-\033[0m");
  TCase *testCase = tcase_create("fillMatrix_tc");

  tcase_add_test(testCase, pushMatrix1);
  tcase_add_test(testCase, pushMatrix2);

  suite_add_tcase(testSet, testCase);

  return testSet;
}

///////////////////////////////////////////////////////////////////

START_TEST(readFileOk) {
  Vertex_array *vertex = NULL;
  Faces_array *faces = NULL;

  char filename[900];
  getcwd(filename, sizeof(filename));
  strcat(filename, "/obj/teapot.obj");
  int result = s21_parser(filename, &vertex, &faces);
  ck_assert_int_eq(result, 0);

  freeVertex(&vertex);
  freeFaces(&faces);
}
END_TEST

START_TEST(readFileBroken) {
  Vertex_array *vertex = NULL;
  Faces_array *faces = NULL;

  char filename[900];
  getcwd(filename, sizeof(filename));
  strcat(filename, "/obj/incorrect/incorrect_notation.obj");

  int result = s21_parser(filename, &vertex, &faces);

  ck_assert_int_eq(result, 1);

  freeVertex(&vertex);
  freeFaces(&faces);
}
END_TEST

START_TEST(readFileEmptyName) {
  Vertex_array *vertex = NULL;
  Faces_array *faces = NULL;
  char filename[] = " ";

  int result = s21_parser(filename, &vertex, &faces);

  ck_assert_int_eq(result, 1);

  freeVertex(&vertex);
  freeFaces(&faces);
}
END_TEST

Suite *testParsing() {
  Suite *testSet = suite_create("\033[45m-=testParsing_tc=-\033[0m");
  TCase *testCase = tcase_create("testParsing_tc");

  tcase_add_test(testCase, readFileOk);
  tcase_add_test(testCase, readFileBroken);
  tcase_add_test(testCase, readFileEmptyName);

  suite_add_tcase(testSet, testCase);

  return testSet;
}

///////////////////////////////////////////////////////////////////

START_TEST(transfromationResize) {
  Vertex_array *vertex = NULL;
  double verArray[3] = {1.0, 2.0, 3.0};
  s21_pushArrayVertices(verArray, &vertex);

  s21_resize(vertex, 5);

  ck_assert_double_eq(5.0, vertex->array[0]);
  ck_assert_double_eq(10.0, vertex->array[1]);
  ck_assert_double_eq(15.0, vertex->array[2]);

  freeVertex(&vertex);
}
END_TEST

START_TEST(transfromationResizeNULL) {
  Vertex_array *vertex = NULL;

  int result = s21_resize(vertex, 5);
  ck_assert_int_eq(result, 1);
}
END_TEST

START_TEST(transfromationRotationX) {
  Vertex_array *vertex = NULL;
  double verArray[3] = {1.0, 2.0, 3.0};
  s21_pushArrayVertices(verArray, &vertex);

  rotation_by_ox(&vertex, 17.5);

  ck_assert_double_eq_tol(1.0, vertex->array[0], 1e-09);
  ck_assert_double_eq_tol(2.80955, vertex->array[1], 1e-05);
  ck_assert_double_eq_tol(2.25973, vertex->array[2], 1e-05);

  freeVertex(&vertex);
}
END_TEST

START_TEST(transfromationRotationXNULL) {
  Vertex_array *vertex = NULL;

  int result = rotation_by_ox(&vertex, 5);
  ck_assert_int_eq(result, 1);
}
END_TEST

START_TEST(transfromationRotationY) {
  Vertex_array *vertex = NULL;
  double verArray[3] = {1.0, 2.0, 3.0};
  s21_pushArrayVertices(verArray, &vertex);

  rotation_by_oy(&vertex, 17.5);

  ck_assert_double_eq_tol(1.85584, vertex->array[0], 1e-05);
  ck_assert_double_eq_tol(2.0, vertex->array[1], 1e-05);
  ck_assert_double_eq_tol(2.56044, vertex->array[2], 1e-05);

  freeVertex(&vertex);
}
END_TEST

START_TEST(transfromationRotationYNULL) {
  Vertex_array *vertex = NULL;

  int result = rotation_by_oy(&vertex, 5);
  ck_assert_int_eq(result, 1);
}
END_TEST

START_TEST(transfromationRotationZ) {
  Vertex_array *vertex = NULL;
  double verArray[3] = {1.0, 2.0, 3.0};
  s21_pushArrayVertices(verArray, &vertex);

  rotation_by_oz(&vertex, 17.5);

  ck_assert_double_eq_tol(0.352304, vertex->array[0], 1e-06);
  ck_assert_double_eq_tol(2.208140, vertex->array[1], 1e-06);
  ck_assert_double_eq_tol(3.0, vertex->array[2], 1e-06);

  freeVertex(&vertex);
}
END_TEST

START_TEST(transfromationRotationZNULL) {
  Vertex_array *vertex = NULL;

  int result = rotation_by_oz(&vertex, 5);
  ck_assert_int_eq(result, 1);
}
END_TEST

START_TEST(testTranslate) {
  Vertex_array *vertex = NULL;
  double verArray[3] = {1.0, 2.0, 3.0};
  s21_pushArrayVertices(verArray, &vertex);
  Vector3D vector = {10.2, 127.8, -34.6};

  translate_by(&vertex, vector);

  ck_assert_double_eq(11.2, vertex->array[0]);
  ck_assert_double_eq(129.8, vertex->array[1]);
  ck_assert_double_eq(-31.6, vertex->array[2]);

  freeVertex(&vertex);
}
END_TEST

START_TEST(testTranslateNULL) {
  Vertex_array *vertex = NULL;
  Vector3D vector = {10.2, 127.8, -34.6};

  int result = translate_by(&vertex, vector);
  ck_assert_int_eq(result, 1);
}
END_TEST

Suite *testTransformations() {
  Suite *testSet = suite_create("\033[45m-=testTransformation_tc=-\033[0m");
  TCase *testCase = tcase_create("testTransformation_tc");

  tcase_add_test(testCase, transfromationResize);
  tcase_add_test(testCase, transfromationRotationX);
  tcase_add_test(testCase, transfromationRotationY);
  tcase_add_test(testCase, transfromationRotationZ);
  tcase_add_test(testCase, transfromationRotationXNULL);
  tcase_add_test(testCase, transfromationRotationYNULL);
  tcase_add_test(testCase, transfromationRotationZNULL);
  tcase_add_test(testCase, testTranslate);
  tcase_add_test(testCase, testTranslateNULL);
  tcase_add_test(testCase, transfromationResizeNULL);

  suite_add_tcase(testSet, testCase);

  return testSet;
}