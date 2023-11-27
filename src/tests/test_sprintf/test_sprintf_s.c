#include <stdio.h>

#include "./test_sprintf.h"

/* specifier s */

START_TEST(test_s21_sprintf_s_1) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char s[] = "This must work!";
  sprintf(str, "%s", s);
  s21_sprintf(str1, "%s", s);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_s_2) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char s[] = "This must work!";
  sprintf(str, "Must! %s Must!", s);
  s21_sprintf(str1, "Must! %s Must!", s);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_s_3) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char s[] = "";
  sprintf(str, "Must! %s Must!", s);
  s21_sprintf(str1, "Must! %s Must!", s);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_s_4) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char s[] = "";
  sprintf(str, "%s", s);
  s21_sprintf(str1, "%s", s);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_s_5) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  sprintf(str, "%s", s21_NULL);
  s21_sprintf(str1, "%s", s21_NULL);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_s_6) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  sprintf(str, "This is NULL %s!", s21_NULL);
  s21_sprintf(str1, "This is NULL %s!", s21_NULL);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_s_7) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char s[] = "This must work!";
  sprintf(str, "Must! %50s Must!", s);
  s21_sprintf(str1, "Must! %50s Must!", s);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_s_8) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char s[] = "This must work!";
  sprintf(str, "Must! %50.30s Must!", s);
  s21_sprintf(str1, "Must! %50.30s Must!", s);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_s_9) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char s[] = "This must work!";
  sprintf(str, "Must! %-50.30s Must!", s);
  s21_sprintf(str1, "Must! %-50.30s Must!", s);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_s_10) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char s[] = "This must work!";
  sprintf(str, "Must! %-50.30s Must!", s);
  s21_sprintf(str1, "Must! %-50.30s Must!", s);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_s_11) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char s[] = "This must work!";
  sprintf(str, "Must! % 50.30s Must!", s);
  s21_sprintf(str1, "Must! % 50.30s Must!", s);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_s_12) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char s[] = "This 50 must work!";
  sprintf(str, "Must! %+50.30s Must!", s);
  s21_sprintf(str1, "Must! %+50.30s Must!", s);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_s_13) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char s[] = "This 50 must work!";
  sprintf(str, "Must! %050.30s Must!", s);
  s21_sprintf(str1, "Must! %050.30s Must!", s);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_s_14) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char s[] = "This 50 must work!";
  sprintf(str, "Must! %0*.*s Must!", 50, 30, s);
  s21_sprintf(str1, "Must! %0*.*s Must!", 50, 30, s);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_s_15) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  sprintf(str, "Must! %-0*.*s Must!", 30, 20, s21_NULL);
  s21_sprintf(str1, "Must! %-0*.*s Must!", 30, 20, s21_NULL);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

Suite *s21_sprintf_s_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_sprintf_s");

  /* Core test case */
  tc_core = tcase_create("sprintf_test");

  tcase_add_test(tc_core, test_s21_sprintf_s_1);
  tcase_add_test(tc_core, test_s21_sprintf_s_2);
  tcase_add_test(tc_core, test_s21_sprintf_s_3);
  tcase_add_test(tc_core, test_s21_sprintf_s_4);
  tcase_add_test(tc_core, test_s21_sprintf_s_5);
  tcase_add_test(tc_core, test_s21_sprintf_s_6);
  tcase_add_test(tc_core, test_s21_sprintf_s_7);
  tcase_add_test(tc_core, test_s21_sprintf_s_8);
  tcase_add_test(tc_core, test_s21_sprintf_s_9);
  tcase_add_test(tc_core, test_s21_sprintf_s_10);
  tcase_add_test(tc_core, test_s21_sprintf_s_11);
  tcase_add_test(tc_core, test_s21_sprintf_s_12);
  tcase_add_test(tc_core, test_s21_sprintf_s_13);
  tcase_add_test(tc_core, test_s21_sprintf_s_14);
  tcase_add_test(tc_core, test_s21_sprintf_s_15);

  suite_add_tcase(s, tc_core);

  return s;
}
