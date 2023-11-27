#include <stdio.h>

#include "./test_sprintf.h"
/* specifier % */

START_TEST(test_s21_sprintf_percent_1) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 1;

  sprintf(str, "num = %%d %d/.", n);
  s21_sprintf(str1, "num = %%d %d/.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_percent_2) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 1954869845;

  sprintf(str, "num%-+10%d =/. %n", &n);
  s21_sprintf(str1, "num%-+10%d =/. %n", &n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_percent_3) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 1954869845;

  sprintf(str, "num%       % = %d/. %x", n, 0x12);
  s21_sprintf(str1, "num%       % = %d/. %x", n, 0x12);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_percent_4) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 1;

  sprintf(str, "num =%       d% %d/.", s21_NULL);
  s21_sprintf(str1, "num =%       d% %d/.", s21_NULL);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_percent_5) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 1;

  sprintf(str, "%%%%num =/. %n", &n);
  s21_sprintf(str1, "%%%%num =/. %n", &n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

Suite *s21_sprintf_percent_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_sprintf_percent");

  /* Core test case */
  tc_core = tcase_create("sprintf_test");

  tcase_add_test(tc_core, test_s21_sprintf_percent_1);
  tcase_add_test(tc_core, test_s21_sprintf_percent_2);
  tcase_add_test(tc_core, test_s21_sprintf_percent_3);
  tcase_add_test(tc_core, test_s21_sprintf_percent_4);
  tcase_add_test(tc_core, test_s21_sprintf_percent_5);

  suite_add_tcase(s, tc_core);

  return s;
}