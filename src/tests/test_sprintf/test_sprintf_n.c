#include <stdio.h>

#include "./test_sprintf.h"
/* specifier n */

START_TEST(test_s21_sprintf_n_1) {
  char str[1000] = {0};
  char str1[1000] = {0};
  int n = 1;
  int k = 0, k1 = 0;

  s21_sprintf(str1, "num = %d/. %n", n, &k1);
  sprintf(str, "num = %d/. %n", n, &k);

  ck_assert_int_eq(k, k1);
}
END_TEST

START_TEST(test_s21_sprintf_n_2) {
  char str[1000] = {0};
  char str1[1000] = {0};
  int n = 1954869845;
  int k = 0, k1 = 0;
  s21_sprintf(str1, "num = %d/. %n", n, &k1);
  sprintf(str, "num = %d/. %n", n, &k);
  ck_assert_int_eq(k, k1);
}
END_TEST

START_TEST(test_s21_sprintf_n_3) {
  char str[1000] = {0};
  char str1[1000] = {0};
  int n = 1954869845;
  int k = 0, k1 = 0;
  s21_sprintf(str1, "num = %d/. %x %n", n, 0x12, &k1);
  sprintf(str, "num = %d/. %x %n", n, 0x12, &k);
  ck_assert_int_eq(k, k1);
}
END_TEST

START_TEST(test_s21_sprintf_n_4) {
  char str[1000] = {0};
  char str1[1000] = {0};
  int n = 1;
  int k = 0, k1 = 0;
  s21_sprintf(str1, "num = %d/. %n", s21_NULL, &k1);
  sprintf(str, "num = %d/. %n", s21_NULL, &k);
  ck_assert_int_eq(k, k1);
}
END_TEST

START_TEST(test_s21_sprintf_n_5) {
  char str[1000] = {0};
  char str1[1000] = {0};
  int n = 1;
  int k = 0, k1 = 0;
  s21_sprintf(str1, "num =/. %n", &k1);
  sprintf(str, "num =/. %n", &k);
  ck_assert_int_eq(k, k1);
}
END_TEST

START_TEST(test_s21_sprintf_n_6) {
  char str[1000] = {0};
  char str1[1000] = {0};
  int k = 0, k1 = 0;
  s21_sprintf(str1, "%d%n", 12345678, &k1);
  sprintf(str, "%d%n", 12345678, &k);

  ck_assert_int_eq(k, k1);
}
END_TEST

START_TEST(test_s21_sprintf_n_7) {
  char str[1000] = {0};
  char str1[1000] = {0};
  int k = 0, k1 = 0;

  s21_sprintf(str1, "%n", &k1);
  sprintf(str, "%n", &k);

  ck_assert_int_eq(k, k1);
}
END_TEST

START_TEST(test_s21_sprintf_n_8) {
  char str[1000] = {0};
  char str1[1000] = {0};
  int k = 0, k1 = 0;
  s21_sprintf(str1, "%+- n", &k1);
  sprintf(str, "%+- n", &k);

  ck_assert_int_eq(k, k1);
}
END_TEST

START_TEST(test_s21_sprintf_n_9) {
  char str[1000] = {0};
  char str1[1000] = {0};
  int k = 0, k1 = 0;

  s21_sprintf(str1, "num = %d. %10n", 123456789, &k1);
  sprintf(str, "num = %d. %10n", 123456789, &k);
  ck_assert_int_eq(k, k1);
}
END_TEST

START_TEST(test_s21_sprintf_n_10) {
  char str[1000] = {0};
  char str1[1000] = {0};
  int k = 0, k1 = 0;
  s21_sprintf(str1, "num = %d. %10.10n", 123456789, &k1);
  sprintf(str, "num = %d. %10.10n", 123456789, &k);

  ck_assert_int_eq(k, k1);
}
END_TEST

START_TEST(test_s21_sprintf_n_11) {
  char str[1000] = {0};
  char str1[1000] = {0};
  int k = 0, k1 = 0;

  s21_sprintf(str1, "num = %d. %-10.10n", 123456789, &k1);
  sprintf(str, "num = %d. %-10.10n", 123456789, &k);

  ck_assert_int_eq(k, k1);
}
END_TEST

Suite *s21_sprintf_n_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_sprintf_n");

  /* Core test case */
  tc_core = tcase_create("sprintf_test");

  tcase_add_test(tc_core, test_s21_sprintf_n_1);
  tcase_add_test(tc_core, test_s21_sprintf_n_2);
  tcase_add_test(tc_core, test_s21_sprintf_n_3);
  tcase_add_test(tc_core, test_s21_sprintf_n_4);
  tcase_add_test(tc_core, test_s21_sprintf_n_5);
  tcase_add_test(tc_core, test_s21_sprintf_n_6);
  tcase_add_test(tc_core, test_s21_sprintf_n_7);
  tcase_add_test(tc_core, test_s21_sprintf_n_8);
  tcase_add_test(tc_core, test_s21_sprintf_n_9);
  tcase_add_test(tc_core, test_s21_sprintf_n_10);
  tcase_add_test(tc_core, test_s21_sprintf_n_11);

  suite_add_tcase(s, tc_core);

  return s;
}
