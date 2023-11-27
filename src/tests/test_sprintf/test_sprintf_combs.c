#include <stdio.h>

#include "./test_sprintf.h"

/* specifiers */

START_TEST(test_s21_sprintf_combs_1) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);

  int i = 348756923;
  double f = 384563245.38457234875;
  char s[] = "eirfgheuwrg 84569823745 ewrfghewur";
  char c = 135;
  int n = 0;
  int n1 = 0;

  s21_sprintf(str1, "%d%x%u%o%c%s%f%e%f%n%%", i, i, i, i, c, s, f, f, f, &n1);
  sprintf(str, "%d%x%u%o%c%s%f%e%f%n%%", i, i, i, i, c, s, f, f, f, &n);

  ck_assert_str_eq(str, str1);
  ck_assert_int_eq(n, n1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_combs_2) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);

  int i = 348756923;
  double f = 384563245.38457234875;
  char s[] = "eirfgheuwrg 84569823745 ewrfghewur";
  char c = 135;
  int n = 0;
  int n1 = 0;

  s21_sprintf(str1,
              "d: %d, x: %x, u: %u, o: %o, c: %c, s: %s, f: %f, e: %e, f: %f, "

              "n: %n, percent: %%",
              i, i, i, i, c, s, f, f, f, &n1);
  sprintf(str,
          "d: %d, x: %x, u: %u, o: %o, c: %c, s: %s, f: %f, e: %e, f: %f, n: "
          "%n, percent: %%",
          i, i, i, i, c, s, f, f, f, &n);

  ck_assert_str_eq(str, str1);
  ck_assert_int_eq(n, n1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_combs_3) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);

  int n = 0;
  int n1 = 0;

  s21_sprintf(str1,
              "d: %d, x: %x, u: %u, o: %o, c: %c, s: %s, f: %f, e: %e, f: %f, "
              "n: %n, percent: %%",
              s21_NULL, s21_NULL, s21_NULL, s21_NULL, s21_NULL, s21_NULL,
              s21_NULL, s21_NULL, s21_NULL, &n1);
  sprintf(str,
          "d: %d, x: %x, u: %u, o: %o, c: %c, s: %s, f: %f, e: %e, f: %f, n: "
          "%n, percent: %%",
          s21_NULL, s21_NULL, s21_NULL, s21_NULL, s21_NULL, s21_NULL, s21_NULL,
          s21_NULL, s21_NULL, &n);

  ck_assert_str_eq(str, str1);
  ck_assert_int_eq(n, n1);
  free(str);
  free(str1);
}
END_TEST

// tests/test_sprintf/test_sprintf_combs.c:103:F:sprintf_test:test_s21_sprintf_combs_4:0:
// Assertion 'str == str1' failed:
//  str == "d: +00000000000348756923, x: 00000000000014c99bbb, u:
//  00000000000348756923, o: 00000000002462315673, c: �                   , s:
//  eirfgheuwrg 84569823, f: +384563245.384572327136993408203125000000         ,
//  e: +3.845632453845723271369934082031e+08             , f:
//  +384563245.384572327136993408203125000000         , n: , percent: %"
// str1 == "d: +00000000000348756923, x: 00000000000014c99bbb, u:
// 00000000000348756923, o: 00000000002462315673, c: �                   , s:
// eirfgheuwrg 84569823745 ewrfghewur, f:
// +384563245.384572327136993408203125000000         , e:
// +3.845632453845723270042046266400e+08             , f:
// +384563245.384572327136993408203125000000         , n: , percent: %"

START_TEST(test_s21_sprintf_combs_4) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);

  int i = 348756923;
  double f = 384563245.384572;
  char s[] = "eirfgheuwrg 84569823745 ewrfghewur";
  char c = 135;
  int n = 0;
  int n1 = 0;
  s21_sprintf(
      str1,
      "d: %-+20.20d, x: %-+20.20x, u: %-+20.20u, o: %-+20.20o, c: %-+20.20c, "
      "s: %-+20.20s, f: %-+#50.30f, e: %-+#50.6e, f: %-+#50.30f, n: "
      "%-+50.30n, percent: %%",
      i, i, i, i, c, s, f, f, f, &n1);
  sprintf(
      str,
      "d: %-+20.20d, x: %-+20.20x, u: %-+20.20u, o: %-+20.20o, c: %-+20.20c, "
      "s: %-+20.20s, f: %-+#50.30f, e: %-+#50.6e, f: %-+#50.30f, n: "
      "%-+50.30n, percent: %%",
      i, i, i, i, c, s, f, f, f, &n);

  ck_assert_str_eq(str, str1);
  ck_assert_int_eq(n, n1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_combs_5) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int i = 0;
  double f = 0.0;
  char s[] = "";
  char c = 0;
  int n = 0;
  int n1 = 0;
  sprintf(
      str,
      "d: %-+20.20d, x: %-+20.20x, u: %-+20.20u, o: %-+20.20o, c: %-+20.20c, "
      "s: %-+20.20s, f: %-+#50.30f, e: %-+#50.30e, f: %-+#50.30f, n: "
      "%-+50.30n, percent: %%",
      i, i, i, i, c, s, f, f, f, &n);
  s21_sprintf(
      str1,
      "d: %-+20.20d, x: %-+20.20x, u: %-+20.20u, o: %-+20.20o, c: %-+20.20c, "
      "s: %-+20.20s, f: %-+#50.30f, e: %-+#50.30e, f: %-+#50.30f, n: "
      "%-+50.30n, percent: %%",
      i, i, i, i, c, s, f, f, f, &n1);

  ck_assert_str_eq(str, str1);

  free(str);
  free(str1);
}
END_TEST

Suite *s21_sprintf_combs_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_sprintf_combo");

  /* Core test case */
  tc_core = tcase_create("sprintf_test");

  tcase_add_test(tc_core, test_s21_sprintf_combs_1);
  tcase_add_test(tc_core, test_s21_sprintf_combs_2);
  tcase_add_test(tc_core, test_s21_sprintf_combs_3);
  tcase_add_test(tc_core, test_s21_sprintf_combs_4);
  tcase_add_test(tc_core, test_s21_sprintf_combs_5);

  suite_add_tcase(s, tc_core);

  return s;
}