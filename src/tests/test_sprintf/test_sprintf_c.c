#include <stdio.h>

#include "./test_sprintf.h"

/* specifier c */

START_TEST(test_s21_sprintf_c_1) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char c = 'a';
  sprintf(str, "%c", c);
  s21_sprintf(str1, "%c", c);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_2) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char c = 'a';
  sprintf(str, "Must! %c Must!", c);
  s21_sprintf(str1, "Must! %c Must!", c);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_3) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char c = '\0';
  sprintf(str, "Must! %c Must!", c);
  s21_sprintf(str1, "Must! %c Must!", c);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_4) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char c = 134;
  sprintf(str, "Must! %c Must!", c);
  s21_sprintf(str1, "Must! %c Must!", c);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_5) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char c = 187;
  sprintf(str, "Must! %c Must!", c);
  s21_sprintf(str1, "Must! %c Must!", c);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_6) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char c = 30;
  sprintf(str, "Must! %c Must!", c);
  s21_sprintf(str1, "Must! %c Must!", c);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_7) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char c = 'a';
  sprintf(str, "%c", c);
  s21_sprintf(str1, "%c", c);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_8) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  sprintf(str, "%c", s21_NULL);
  s21_sprintf(str1, "%c", s21_NULL);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_9) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  sprintf(str, "This is NULL %c!", s21_NULL);
  s21_sprintf(str1, "This is NULL %c!", s21_NULL);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_10) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char c = 'a';
  sprintf(str, "Must! %5c Must!", c);
  s21_sprintf(str1, "Must! %5c Must!", c);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_11) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char c = 'a';
  sprintf(str, "Must! %5.3c Must!", c);
  s21_sprintf(str1, "Must! %5.3c Must!", c);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_12) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char c = 'a';
  sprintf(str, "Must! %-5.3c Must!", c);
  s21_sprintf(str1, "Must! %-5.3c Must!", c);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_13) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char c = 'a';
  sprintf(str, "Must! %-5.3c Must!", c);
  s21_sprintf(str1, "Must! %-5.3c Must!", c);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_14) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char c = 'a';
  sprintf(str, "Must! % 5.3c Must!", c);
  s21_sprintf(str1, "Must! % 5.3c Must!", c);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_15) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char c = 'a';
  sprintf(str, "Must! %+5.3c Must!", c);
  s21_sprintf(str1, "Must! %+5.3c Must!", c);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_16) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char c = 'a';
  sprintf(str, "Must! %05.3c Must!", c);
  s21_sprintf(str1, "Must! %05.3c Must!", c);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_17) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  char c = 'a';
  sprintf(str, "Must! %0*.*c Must!", 5, 3, c);
  s21_sprintf(str1, "Must! %0*.*c Must!", 5, 3, c);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_c_18) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  sprintf(str, "Must! %-0*.*c Must!", 5, 3, s21_NULL);
  s21_sprintf(str1, "Must! %-0*.*c Must!", 5, 3, s21_NULL);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

Suite *s21_sprintf_c_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_sprintf_c");

  /* Core test case */
  tc_core = tcase_create("sprintf_test");

  tcase_add_test(tc_core, test_s21_sprintf_c_1);
  tcase_add_test(tc_core, test_s21_sprintf_c_2);
  tcase_add_test(tc_core, test_s21_sprintf_c_3);
  tcase_add_test(tc_core, test_s21_sprintf_c_4);
  tcase_add_test(tc_core, test_s21_sprintf_c_5);
  tcase_add_test(tc_core, test_s21_sprintf_c_6);
  tcase_add_test(tc_core, test_s21_sprintf_c_7);
  tcase_add_test(tc_core, test_s21_sprintf_c_8);
  tcase_add_test(tc_core, test_s21_sprintf_c_9);
  tcase_add_test(tc_core, test_s21_sprintf_c_10);
  tcase_add_test(tc_core, test_s21_sprintf_c_11);
  tcase_add_test(tc_core, test_s21_sprintf_c_12);
  tcase_add_test(tc_core, test_s21_sprintf_c_13);
  tcase_add_test(tc_core, test_s21_sprintf_c_14);
  tcase_add_test(tc_core, test_s21_sprintf_c_15);
  tcase_add_test(tc_core, test_s21_sprintf_c_16);
  tcase_add_test(tc_core, test_s21_sprintf_c_17);
  tcase_add_test(tc_core, test_s21_sprintf_c_18);

  suite_add_tcase(s, tc_core);

  return s;
}
