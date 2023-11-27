#include <stdio.h>

#include "./test_sprintf.h"

/* specifier e */

START_TEST(test_s21_sprintf_e_1) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 0;
  sprintf(str, "num = %e/.", n);
  s21_sprintf(str1, "num = %e/.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_2) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  double n = 2147483647;
  sprintf(str, "num = %e.", n);
  s21_sprintf(str1, "num = %e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_3) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %e.", n);
  s21_sprintf(str1, "num = %e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_4) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %e.", n);
  s21_sprintf(str1, "num = %e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with one flag */

START_TEST(test_s21_sprintf_e_5) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-e.", n);
  s21_sprintf(str1, "num = %-e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_6) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-e.", n);
  s21_sprintf(str1, "num = %-e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_7) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+e.", n);
  s21_sprintf(str1, "num = %+e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_8) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+e.", n);
  s21_sprintf(str1, "num = %+e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_9) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % e.", n);
  s21_sprintf(str1, "num = % e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_10) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % e.", n);
  s21_sprintf(str1, "num = % e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_11) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#e.", n);
  s21_sprintf(str1, "num = %#e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_12) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %#e.", n);
  s21_sprintf(str1, "num = %#e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_13) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %0e.", n);
  s21_sprintf(str1, "num = %0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_14) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0e.", n);
  s21_sprintf(str1, "num = %0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with some flags */
/* 2 flags */

START_TEST(test_s21_sprintf_e_15) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+e.", n);
  s21_sprintf(str1, "num = %-+e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_16) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+e.", n);
  s21_sprintf(str1, "num = %-+e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_17) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %- e.", n);
  s21_sprintf(str1, "num = %- e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_18) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %- e.", n);
  s21_sprintf(str1, "num = %- e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_19) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-#e.", n);
  s21_sprintf(str1, "num = %-#e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_20) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-#e.", n);
  s21_sprintf(str1, "num = %-#e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_21) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-0e.", n);
  s21_sprintf(str1, "num = %-0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_22) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-0e.", n);
  s21_sprintf(str1, "num = %-0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_23) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ e.", n);
  s21_sprintf(str1, "num = %+ e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_24) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ e.", n);
  s21_sprintf(str1, "num = %+ e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_25) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+#e.", n);
  s21_sprintf(str1, "num = %+#e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_26) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+#e.", n);
  s21_sprintf(str1, "num = %+#e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_27) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ e.", n);
  s21_sprintf(str1, "num = %+ e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_28) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+0e.", n);
  s21_sprintf(str1, "num = %+0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_29) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #e.", n);
  s21_sprintf(str1, "num = % #e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_30) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #e.", n);
  s21_sprintf(str1, "num = % #e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_31) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 0e.", n);
  s21_sprintf(str1, "num = % 0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_32) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 0e.", n);
  s21_sprintf(str1, "num = % 0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_33) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#0e.", n);
  s21_sprintf(str1, "num = %#0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_34) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0#e.", n);
  s21_sprintf(str1, "num = %0#e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_e_35) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ e.", n);
  s21_sprintf(str1, "num = %-+ e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_36) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ e.", n);
  s21_sprintf(str1, "num = %-+ e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_37) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+#e.", n);
  s21_sprintf(str1, "num = %-+#e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_38) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+#e.", n);
  s21_sprintf(str1, "num = %-+#e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_39) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+0e.", n);
  s21_sprintf(str1, "num = %-+0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_40) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+0e.", n);
  s21_sprintf(str1, "num = %-+0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_41) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #e.", n);
  s21_sprintf(str1, "num = %+ #e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_42) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #e.", n);
  s21_sprintf(str1, "num = %+ #e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_43) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 0e.", n);
  s21_sprintf(str1, "num = %+ 0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_44) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 0e.", n);
  s21_sprintf(str1, "num = %+ 0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_45) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #0e.", n);
  s21_sprintf(str1, "num = % #0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_46) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #0e.", n);
  s21_sprintf(str1, "num = % #0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_e_47) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #e.", n);
  s21_sprintf(str1, "num = %-+ #e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_48) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #e.", n);
  s21_sprintf(str1, "num = %-+ #e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_49) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 0e.", n);
  s21_sprintf(str1, "num = %-+ 0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_50) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #e.", n);
  s21_sprintf(str1, "num = %-+ 0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_51) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #0e.", n);
  s21_sprintf(str1, "num = %+ #0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_52) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #0e.", n);
  s21_sprintf(str1, "num = %+ #0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_53) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #0e.", n);
  s21_sprintf(str1, "num = %-+ #0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_e_54) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #0e.", n);
  s21_sprintf(str1, "num = %-+ #0e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with precision */

START_TEST(test_s21_sprintf_e_55) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %.10e.", n);
  s21_sprintf(str1, "num = %.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_56) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %.10e.", n);
  s21_sprintf(str1, "num = %.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_57) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %.*e.", 10, n);
  s21_sprintf(str1, "num = %.*e.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_58) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %.*e.", 10, n);
  s21_sprintf(str1, "num = %.*e.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with precision anf flags */

START_TEST(test_s21_sprintf_e_59) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-.10e.", n);
  s21_sprintf(str1, "num = %-.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_60) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-.10e.", n);
  s21_sprintf(str1, "num = %-.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_61) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+.10e.", n);
  s21_sprintf(str1, "num = %+.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_62) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+.10e.", n);
  s21_sprintf(str1, "num = %+.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_63) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % .10e.", n);
  s21_sprintf(str1, "num = % .10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_64) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % .10e.", n);
  s21_sprintf(str1, "num = % .10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_65) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#.10e.", n);
  s21_sprintf(str1, "num = %#.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_66) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %#.10e.", n);
  s21_sprintf(str1, "num = %#.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_67) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %0.10e.", n);
  s21_sprintf(str1, "num = %0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_68) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0.10e.", n);
  s21_sprintf(str1, "num = %0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_69) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+.10e.", n);
  s21_sprintf(str1, "num = %-+.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_70) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+.10e.", n);
  s21_sprintf(str1, "num = %-+.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_71) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %- .10e.", n);
  s21_sprintf(str1, "num = %- .10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_72) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %- .10e.", n);
  s21_sprintf(str1, "num = %- .10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_73) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-#.10e.", n);
  s21_sprintf(str1, "num = %-#.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_74) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-#.10e.", n);
  s21_sprintf(str1, "num = %-#.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_75) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-0.10e.", n);
  s21_sprintf(str1, "num = %-0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_76) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-0.10e.", n);
  s21_sprintf(str1, "num = %-0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_77) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ .10e.", n);
  s21_sprintf(str1, "num = %+ .10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_78) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ .10e.", n);
  s21_sprintf(str1, "num = %+ .10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_79) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+#.10e.", n);
  s21_sprintf(str1, "num = %+#.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_80) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+#.10e.", n);
  s21_sprintf(str1, "num = %+#.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_81) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ .10e.", n);
  s21_sprintf(str1, "num = %+ .10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_82) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+0.10e.", n);
  s21_sprintf(str1, "num = %+0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_83) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #.10e.", n);
  s21_sprintf(str1, "num = % #.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_84) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #.10e.", n);
  s21_sprintf(str1, "num = % #.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_85) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 0.10e.", n);
  s21_sprintf(str1, "num = % 0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_86) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 0.10e.", n);
  s21_sprintf(str1, "num = % 0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_87) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#0.10e.", n);
  s21_sprintf(str1, "num = %#0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_88) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0#.10e.", n);
  s21_sprintf(str1, "num = %0#.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_e_89) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ .10e.", n);
  s21_sprintf(str1, "num = %-+ .10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_90) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ .10e.", n);
  s21_sprintf(str1, "num = %-+ .10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_91) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+#.10e.", n);
  s21_sprintf(str1, "num = %-+#.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_92) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+#.10e.", n);
  s21_sprintf(str1, "num = %-+#.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_93) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+0.10e.", n);
  s21_sprintf(str1, "num = %-+0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_94) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+0.10e.", n);
  s21_sprintf(str1, "num = %-+0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_95) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #.10e.", n);
  s21_sprintf(str1, "num = %+ #.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_96) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #.10e.", n);
  s21_sprintf(str1, "num = %+ #.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_97) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 0.10e.", n);
  s21_sprintf(str1, "num = %+ 0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_98) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 0.10e.", n);
  s21_sprintf(str1, "num = %+ 0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_99) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #0.10e.", n);
  s21_sprintf(str1, "num = % #0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_100) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #0.10e.", n);
  s21_sprintf(str1, "num = % #0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_e_101) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #.10e.", n);
  s21_sprintf(str1, "num = %-+ #.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_102) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #.10e.", n);
  s21_sprintf(str1, "num = %-+ #.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_103) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 0.10e.", n);
  s21_sprintf(str1, "num = %-+ 0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_104) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #.10e.", n);
  s21_sprintf(str1, "num = %-+ 0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_105) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #0.10e.", n);
  s21_sprintf(str1, "num = %+ #0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_106) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #0.10e.", n);
  s21_sprintf(str1, "num = %+ #0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_107) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #0.10e.", n);
  s21_sprintf(str1, "num = %-+ #0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_e_108) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #0.10e.", n);
  s21_sprintf(str1, "num = %-+ #0.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with wifth */

START_TEST(test_s21_sprintf_e_109) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %10e.", n);
  s21_sprintf(str1, "num = %10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_110) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %10e.", n);
  s21_sprintf(str1, "num = %10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_111) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %*e.", 10, n);
  s21_sprintf(str1, "num = %*e.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_112) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %*e.", 10, n);
  s21_sprintf(str1, "num = %*e.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with wifth anf flags */

START_TEST(test_s21_sprintf_e_113) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-15e.", n);
  s21_sprintf(str1, "num = %-15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_114) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-15e.", n);
  s21_sprintf(str1, "num = %-15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_115) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+15e.", n);
  s21_sprintf(str1, "num = %+15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_116) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+15e.", n);
  s21_sprintf(str1, "num = %+15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_117) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 15e.", n);
  s21_sprintf(str1, "num = % 15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_118) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 15e.", n);
  s21_sprintf(str1, "num = % 15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_119) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#15e.", n);
  s21_sprintf(str1, "num = %#15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_120) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %#15e.", n);
  s21_sprintf(str1, "num = %#15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_121) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %015e.", n);
  s21_sprintf(str1, "num = %015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_122) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %015e.", n);
  s21_sprintf(str1, "num = %015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_123) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+15e.", n);
  s21_sprintf(str1, "num = %-+15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_124) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+15e.", n);
  s21_sprintf(str1, "num = %-+15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_125) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %- 15e.", n);
  s21_sprintf(str1, "num = %- 15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_126) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %- 15e.", n);
  s21_sprintf(str1, "num = %- 15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_127) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-#15e.", n);
  s21_sprintf(str1, "num = %-#15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_128) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-#15e.", n);
  s21_sprintf(str1, "num = %-#15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_129) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-015e.", n);
  s21_sprintf(str1, "num = %-015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_130) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-015e.", n);
  s21_sprintf(str1, "num = %-015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_131) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 15e.", n);
  s21_sprintf(str1, "num = %+ 15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_132) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 15e.", n);
  s21_sprintf(str1, "num = %+ 15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_133) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+#15e.", n);
  s21_sprintf(str1, "num = %+#15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_134) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+#15e.", n);
  s21_sprintf(str1, "num = %+#15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_135) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 15e.", n);
  s21_sprintf(str1, "num = %+ 15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_136) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+015e.", n);
  s21_sprintf(str1, "num = %+015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_137) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #15e.", n);
  s21_sprintf(str1, "num = % #15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_138) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #15e.", n);
  s21_sprintf(str1, "num = % #15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_139) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 015e.", n);
  s21_sprintf(str1, "num = % 015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_140) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 015e.", n);
  s21_sprintf(str1, "num = % 015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_141) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#015e.", n);
  s21_sprintf(str1, "num = %#015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_142) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0#15e.", n);
  s21_sprintf(str1, "num = %0#15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_e_143) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 15e.", n);
  s21_sprintf(str1, "num = %-+ 15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_144) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ 15e.", n);
  s21_sprintf(str1, "num = %-+ 15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_145) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+#15e.", n);
  s21_sprintf(str1, "num = %-+#15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_146) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+#15e.", n);
  s21_sprintf(str1, "num = %-+#15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_147) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+015e.", n);
  s21_sprintf(str1, "num = %-+015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_148) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+015e.", n);
  s21_sprintf(str1, "num = %-+015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_149) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #15e.", n);
  s21_sprintf(str1, "num = %+ #15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_150) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #15e.", n);
  s21_sprintf(str1, "num = %+ #15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_151) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 015e.", n);
  s21_sprintf(str1, "num = %+ 015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_152) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 015e.", n);
  s21_sprintf(str1, "num = %+ 015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_153) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #015e.", n);
  s21_sprintf(str1, "num = % #015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_154) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #015e.", n);
  s21_sprintf(str1, "num = % #015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_e_155) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #15e.", n);
  s21_sprintf(str1, "num = %-+ #15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_156) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #15e.", n);
  s21_sprintf(str1, "num = %-+ #15e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_157) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 015e.", n);
  s21_sprintf(str1, "num = %-+ 015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_158) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #15e.", n);
  s21_sprintf(str1, "num = %-+ 015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_159) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #015e.", n);
  s21_sprintf(str1, "num = %+ #015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_160) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #015e.", n);
  s21_sprintf(str1, "num = %+ #015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_161) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #015e.", n);
  s21_sprintf(str1, "num = %-+ #015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_e_162) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #015e.", n);
  s21_sprintf(str1, "num = %-+ #015e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with precision anf wifth */

START_TEST(test_s21_sprintf_e_163) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %10.10e.", n);
  s21_sprintf(str1, "num = %10.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_164) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %10.10e.", n);
  s21_sprintf(str1, "num = %10.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_165) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %5.10e.", n);
  s21_sprintf(str1, "num = %5.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_166) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %5.10e.", n);
  s21_sprintf(str1, "num = %5.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_167) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %10.5e.", n);
  s21_sprintf(str1, "num = %10.5e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_168) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %10.5e.", n);
  s21_sprintf(str1, "num = %10.5e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with precision, wifth anf flags */

START_TEST(test_s21_sprintf_e_169) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-15.10e.", n);
  s21_sprintf(str1, "num = %-15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_170) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-15.10e.", n);
  s21_sprintf(str1, "num = %-15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_171) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+15.10e.", n);
  s21_sprintf(str1, "num = %+15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_172) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+15.10e.", n);
  s21_sprintf(str1, "num = %+15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_173) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 15.10e.", n);
  s21_sprintf(str1, "num = % 15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_174) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 15.10e.", n);
  s21_sprintf(str1, "num = % 15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_175) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#15.10e.", n);
  s21_sprintf(str1, "num = %#15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_176) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %#15.10e.", n);
  s21_sprintf(str1, "num = %#15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_177) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %015.10e.", n);
  s21_sprintf(str1, "num = %015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_178) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %015.10e.", n);
  s21_sprintf(str1, "num = %015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_179) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+15.10e.", n);
  s21_sprintf(str1, "num = %-+15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_180) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+15.10e.", n);
  s21_sprintf(str1, "num = %-+15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_181) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %- 15.10e.", n);
  s21_sprintf(str1, "num = %- 15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_182) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %- 15.10e.", n);
  s21_sprintf(str1, "num = %- 15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_183) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-#15.10e.", n);
  s21_sprintf(str1, "num = %-#15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_184) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-#15.10e.", n);
  s21_sprintf(str1, "num = %-#15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_185) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-015.10e.", n);
  s21_sprintf(str1, "num = %-015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_186) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-015.10e.", n);
  s21_sprintf(str1, "num = %-015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_187) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 15.10e.", n);
  s21_sprintf(str1, "num = %+ 15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_188) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 15.10e.", n);
  s21_sprintf(str1, "num = %+ 15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_189) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+#15.10e.", n);
  s21_sprintf(str1, "num = %+#15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_190) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+#15.10e.", n);
  s21_sprintf(str1, "num = %+#15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_191) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 15.10e.", n);
  s21_sprintf(str1, "num = %+ 15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_192) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+015.10e.", n);
  s21_sprintf(str1, "num = %+015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_193) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #15.10e.", n);
  s21_sprintf(str1, "num = % #15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_194) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #15.10e.", n);
  s21_sprintf(str1, "num = % #15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_195) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 015.10e.", n);
  s21_sprintf(str1, "num = % 015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_196) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 015.10e.", n);
  s21_sprintf(str1, "num = % 015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_197) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#015.10e.", n);
  s21_sprintf(str1, "num = %#015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_198) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0#15.10e.", n);
  s21_sprintf(str1, "num = %0#15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_e_199) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 15.10e.", n);
  s21_sprintf(str1, "num = %-+ 15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_200) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ 15.10e.", n);
  s21_sprintf(str1, "num = %-+ 15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_201) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+#15.10e.", n);
  s21_sprintf(str1, "num = %-+#15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_202) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+#15.10e.", n);
  s21_sprintf(str1, "num = %-+#15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_203) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+015.10e.", n);
  s21_sprintf(str1, "num = %-+015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_204) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+015.10e.", n);
  s21_sprintf(str1, "num = %-+015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_205) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #15.10e.", n);
  s21_sprintf(str1, "num = %+ #15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_206) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #15.10e.", n);
  s21_sprintf(str1, "num = %+ #15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_207) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 015.10e.", n);
  s21_sprintf(str1, "num = %+ 015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_208) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 015.10e.", n);
  s21_sprintf(str1, "num = %+ 015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_209) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #015.10e.", n);
  s21_sprintf(str1, "num = % #015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_210) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #015.10e.", n);
  s21_sprintf(str1, "num = % #015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_e_211) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #15.10e.", n);
  s21_sprintf(str1, "num = %-+ #15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_212) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #15.10e.", n);
  s21_sprintf(str1, "num = %-+ #15.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_213) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 015.10e.", n);
  s21_sprintf(str1, "num = %-+ 015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_214) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #15.10e.", n);
  s21_sprintf(str1, "num = %-+ 015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_215) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #015.10e.", n);
  s21_sprintf(str1, "num = %+ #015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_216) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #015.10e.", n);
  s21_sprintf(str1, "num = %+ #015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_e_217) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #015.10e.", n);
  s21_sprintf(str1, "num = %-+ #015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_218) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #015.10e.", n);
  s21_sprintf(str1, "num = %-+ #015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with length */

START_TEST(test_s21_sprintf_e_219) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  double n = 2147483647;

  sprintf(str, "num = %-+ #015.10le.", n);
  s21_sprintf(str1, "num = %-+ #015.10le.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_220) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  long double n = 2.2204460492503131e-016;

  sprintf(str, "num = %-+ #015.10Le.", n);
  s21_sprintf(str1, "num = %-+ #015.10Le.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_221) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  double n = -2147483648;

  sprintf(str, "num = %-+ #015.10le.", n);
  s21_sprintf(str1, "num = %-+ #015.10le.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_222) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  long double n = 2.2250738585072014e-308;

  sprintf(str, "num = %-+ #015.10Le.", n);
  s21_sprintf(str1, "num = %-+ #015.10Le.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_223) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 214;

  sprintf(str, "num = %-+ #015.10he.", n);
  s21_sprintf(str1, "num = %-+ #015.10he.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_224) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  double n = -214;

  sprintf(str, "num = %-+ #015.10he.", n);
  s21_sprintf(str1, "num = %-+ #015.10he.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_225) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 214;

  sprintf(str, "num = %-+ #015.10hle.", n);
  s21_sprintf(str1, "num = %-+ #015.10hle.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_226) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  long double n = 2.2204460492503131e-016;

  sprintf(str, "num = %-+ #015.10Le.", n);
  s21_sprintf(str1, "num = %-+ #015.10Le.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_227) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  double n = -214;

  sprintf(str, "num = %-+ #015.10lhe.", n);
  s21_sprintf(str1, "num = %-+ #015.10lhe.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_228) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  double n = 4294967295;

  sprintf(str, "num = %-+ #015.10le.", n);
  s21_sprintf(str1, "num = %-+ #015.10le.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_229) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  long double n = 2.2250738585072014e-308;

  sprintf(str, "num = %-+ #015.10Le.", n);
  s21_sprintf(str1, "num = %-+ #015.10Le.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_230) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 2147483647;

  sprintf(str, "num = %-+ #015.10he.", n);
  s21_sprintf(str1, "num = %-+ #015.10he.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_231) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = -214748364;

  sprintf(str, "num = %-+ #015.10he.", n);
  s21_sprintf(str1, "num = %-+ #015.10he.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_232) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 072;

  sprintf(str, "num = %-+ #015.10e.", n);
  s21_sprintf(str1, "num = %-+ #015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_233) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = -072;

  sprintf(str, "num = %-+ #015.10e.", n);
  s21_sprintf(str1, "num = %-+ #015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_234) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 072;

  sprintf(str, "num = %-+ #015.10he.", n);
  s21_sprintf(str1, "num = %-+ #015.10he.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_235) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = -072;

  sprintf(str, "num = %-+ #015.10he.", n);
  s21_sprintf(str1, "num = %-+ #015.10he.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_236) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 0xb72;

  sprintf(str, "num = %-+ #015.10e.", n);
  s21_sprintf(str1, "num = %-+ #015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_237) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = -0xb72;

  sprintf(str, "num = %-+ #015.10e.", n);
  s21_sprintf(str1, "num = %-+ #015.10e.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_238) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 0xb72;

  sprintf(str, "num = %-+ #015.10he.", n);
  s21_sprintf(str1, "num = %-+ #015.10he.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_239) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = -0xb72;

  sprintf(str, "num = %-+ #015.10he.", n);
  s21_sprintf(str1, "num = %-+ #015.10he.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_240) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  double n = 2147483647;

  sprintf(str, "num = %-+ #015.10E.", n);
  s21_sprintf(str1, "num = %-+ #015.10E.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_241) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  double n = 2.220e-16;

  sprintf(str, "num = %-+ #015.10E.", n);
  s21_sprintf(str1, "num = %-+ #015.10E.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_242) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  double n = -2147483648;

  sprintf(str, "num = %-+ #015.10E.", n);
  s21_sprintf(str1, "num = %-+ #015.10E.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_243) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  double n = 2.22720e-308;

  sprintf(str, "num = %-+ #015.10E.", n);
  s21_sprintf(str1, "num = %-+ #015.10E.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_244) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 214;

  sprintf(str, "num = %-+ #015.10hE.", n);
  s21_sprintf(str1, "num = %-+ #015.10hE.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_245) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  double n = -214;

  sprintf(str, "num = %-+ #015.10hE.", n);
  s21_sprintf(str1, "num = %-+ #015.10hE.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_246) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  float n = 214;

  sprintf(str, "num = %-+ #015.10hlE.", n);
  s21_sprintf(str1, "num = %-+ #015.10hlE.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_247) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  long double n = 2.2204460492503131e-016;

  sprintf(str, "num = %-+ #015.10LE.", n);
  s21_sprintf(str1, "num = %-+ #015.10LE.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_248) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  double n = -214;

  sprintf(str, "num = %-+ #015.10lhE.", n);
  s21_sprintf(str1, "num = %-+ #015.10lhE.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_249) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  double n = 4294967295;

  sprintf(str, "num = %-+ #015.10lE.", n);
  s21_sprintf(str1, "num = %-+ #015.10lE.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_e_250) {
  char *str = malloc(sizeof(char) * 10000);
  char *str1 = malloc(sizeof(char) * 10000);
  long double n = 2.2250738585072014e-308;

  sprintf(str, "num = %-+ #015.10LE.", n);
  s21_sprintf(str1, "num = %-+ #015.10LE.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

Suite *s21_sprintf_e_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_sprintf_e");

  /* Core test case */
  tc_core = tcase_create("sprintf_test");

  tcase_add_test(tc_core, test_s21_sprintf_e_1);
  tcase_add_test(tc_core, test_s21_sprintf_e_2);
  tcase_add_test(tc_core, test_s21_sprintf_e_3);
  tcase_add_test(tc_core, test_s21_sprintf_e_4);
  tcase_add_test(tc_core, test_s21_sprintf_e_5);
  tcase_add_test(tc_core, test_s21_sprintf_e_6);
  tcase_add_test(tc_core, test_s21_sprintf_e_7);
  tcase_add_test(tc_core, test_s21_sprintf_e_8);
  tcase_add_test(tc_core, test_s21_sprintf_e_9);
  tcase_add_test(tc_core, test_s21_sprintf_e_10);
  tcase_add_test(tc_core, test_s21_sprintf_e_11);
  tcase_add_test(tc_core, test_s21_sprintf_e_12);
  tcase_add_test(tc_core, test_s21_sprintf_e_13);
  tcase_add_test(tc_core, test_s21_sprintf_e_14);
  tcase_add_test(tc_core, test_s21_sprintf_e_15);
  tcase_add_test(tc_core, test_s21_sprintf_e_16);
  tcase_add_test(tc_core, test_s21_sprintf_e_17);
  tcase_add_test(tc_core, test_s21_sprintf_e_18);
  tcase_add_test(tc_core, test_s21_sprintf_e_19);
  tcase_add_test(tc_core, test_s21_sprintf_e_20);
  tcase_add_test(tc_core, test_s21_sprintf_e_21);
  tcase_add_test(tc_core, test_s21_sprintf_e_22);
  tcase_add_test(tc_core, test_s21_sprintf_e_23);
  tcase_add_test(tc_core, test_s21_sprintf_e_24);
  tcase_add_test(tc_core, test_s21_sprintf_e_25);
  tcase_add_test(tc_core, test_s21_sprintf_e_26);
  tcase_add_test(tc_core, test_s21_sprintf_e_27);
  tcase_add_test(tc_core, test_s21_sprintf_e_28);
  tcase_add_test(tc_core, test_s21_sprintf_e_29);
  tcase_add_test(tc_core, test_s21_sprintf_e_30);
  tcase_add_test(tc_core, test_s21_sprintf_e_31);
  tcase_add_test(tc_core, test_s21_sprintf_e_32);
  tcase_add_test(tc_core, test_s21_sprintf_e_33);
  tcase_add_test(tc_core, test_s21_sprintf_e_34);
  tcase_add_test(tc_core, test_s21_sprintf_e_35);
  tcase_add_test(tc_core, test_s21_sprintf_e_36);
  tcase_add_test(tc_core, test_s21_sprintf_e_37);
  tcase_add_test(tc_core, test_s21_sprintf_e_38);
  tcase_add_test(tc_core, test_s21_sprintf_e_39);
  tcase_add_test(tc_core, test_s21_sprintf_e_40);
  tcase_add_test(tc_core, test_s21_sprintf_e_41);
  tcase_add_test(tc_core, test_s21_sprintf_e_42);
  tcase_add_test(tc_core, test_s21_sprintf_e_43);
  tcase_add_test(tc_core, test_s21_sprintf_e_44);
  tcase_add_test(tc_core, test_s21_sprintf_e_45);
  tcase_add_test(tc_core, test_s21_sprintf_e_46);
  tcase_add_test(tc_core, test_s21_sprintf_e_47);
  tcase_add_test(tc_core, test_s21_sprintf_e_48);
  tcase_add_test(tc_core, test_s21_sprintf_e_49);
  tcase_add_test(tc_core, test_s21_sprintf_e_50);
  tcase_add_test(tc_core, test_s21_sprintf_e_51);
  tcase_add_test(tc_core, test_s21_sprintf_e_52);
  tcase_add_test(tc_core, test_s21_sprintf_e_53);
  tcase_add_test(tc_core, test_s21_sprintf_e_54);
  tcase_add_test(tc_core, test_s21_sprintf_e_55);
  tcase_add_test(tc_core, test_s21_sprintf_e_56);
  tcase_add_test(tc_core, test_s21_sprintf_e_57);
  tcase_add_test(tc_core, test_s21_sprintf_e_58);
  tcase_add_test(tc_core, test_s21_sprintf_e_60);
  tcase_add_test(tc_core, test_s21_sprintf_e_61);
  tcase_add_test(tc_core, test_s21_sprintf_e_62);
  tcase_add_test(tc_core, test_s21_sprintf_e_63);
  tcase_add_test(tc_core, test_s21_sprintf_e_64);
  tcase_add_test(tc_core, test_s21_sprintf_e_65);
  tcase_add_test(tc_core, test_s21_sprintf_e_66);
  tcase_add_test(tc_core, test_s21_sprintf_e_67);
  tcase_add_test(tc_core, test_s21_sprintf_e_68);
  tcase_add_test(tc_core, test_s21_sprintf_e_69);
  tcase_add_test(tc_core, test_s21_sprintf_e_70);
  tcase_add_test(tc_core, test_s21_sprintf_e_71);
  tcase_add_test(tc_core, test_s21_sprintf_e_72);
  tcase_add_test(tc_core, test_s21_sprintf_e_73);
  tcase_add_test(tc_core, test_s21_sprintf_e_74);
  tcase_add_test(tc_core, test_s21_sprintf_e_75);
  tcase_add_test(tc_core, test_s21_sprintf_e_76);
  tcase_add_test(tc_core, test_s21_sprintf_e_77);
  tcase_add_test(tc_core, test_s21_sprintf_e_78);
  tcase_add_test(tc_core, test_s21_sprintf_e_79);
  tcase_add_test(tc_core, test_s21_sprintf_e_80);
  tcase_add_test(tc_core, test_s21_sprintf_e_81);
  tcase_add_test(tc_core, test_s21_sprintf_e_82);
  tcase_add_test(tc_core, test_s21_sprintf_e_83);
  tcase_add_test(tc_core, test_s21_sprintf_e_84);
  tcase_add_test(tc_core, test_s21_sprintf_e_85);
  tcase_add_test(tc_core, test_s21_sprintf_e_86);
  tcase_add_test(tc_core, test_s21_sprintf_e_87);
  tcase_add_test(tc_core, test_s21_sprintf_e_88);
  tcase_add_test(tc_core, test_s21_sprintf_e_89);
  tcase_add_test(tc_core, test_s21_sprintf_e_90);
  tcase_add_test(tc_core, test_s21_sprintf_e_100);
  tcase_add_test(tc_core, test_s21_sprintf_e_101);
  tcase_add_test(tc_core, test_s21_sprintf_e_102);
  tcase_add_test(tc_core, test_s21_sprintf_e_103);
  tcase_add_test(tc_core, test_s21_sprintf_e_104);
  tcase_add_test(tc_core, test_s21_sprintf_e_105);
  tcase_add_test(tc_core, test_s21_sprintf_e_106);
  tcase_add_test(tc_core, test_s21_sprintf_e_107);
  tcase_add_test(tc_core, test_s21_sprintf_e_108);
  tcase_add_test(tc_core, test_s21_sprintf_e_109);
  tcase_add_test(tc_core, test_s21_sprintf_e_110);
  tcase_add_test(tc_core, test_s21_sprintf_e_111);
  tcase_add_test(tc_core, test_s21_sprintf_e_112);
  tcase_add_test(tc_core, test_s21_sprintf_e_113);
  tcase_add_test(tc_core, test_s21_sprintf_e_114);
  tcase_add_test(tc_core, test_s21_sprintf_e_115);
  tcase_add_test(tc_core, test_s21_sprintf_e_116);
  tcase_add_test(tc_core, test_s21_sprintf_e_117);
  tcase_add_test(tc_core, test_s21_sprintf_e_118);
  tcase_add_test(tc_core, test_s21_sprintf_e_119);
  tcase_add_test(tc_core, test_s21_sprintf_e_120);
  tcase_add_test(tc_core, test_s21_sprintf_e_121);
  tcase_add_test(tc_core, test_s21_sprintf_e_122);
  tcase_add_test(tc_core, test_s21_sprintf_e_123);
  tcase_add_test(tc_core, test_s21_sprintf_e_124);
  tcase_add_test(tc_core, test_s21_sprintf_e_125);
  tcase_add_test(tc_core, test_s21_sprintf_e_126);
  tcase_add_test(tc_core, test_s21_sprintf_e_127);
  tcase_add_test(tc_core, test_s21_sprintf_e_128);
  tcase_add_test(tc_core, test_s21_sprintf_e_129);
  tcase_add_test(tc_core, test_s21_sprintf_e_130);
  tcase_add_test(tc_core, test_s21_sprintf_e_131);
  tcase_add_test(tc_core, test_s21_sprintf_e_132);
  tcase_add_test(tc_core, test_s21_sprintf_e_133);
  tcase_add_test(tc_core, test_s21_sprintf_e_134);
  tcase_add_test(tc_core, test_s21_sprintf_e_135);
  tcase_add_test(tc_core, test_s21_sprintf_e_136);
  tcase_add_test(tc_core, test_s21_sprintf_e_137);
  tcase_add_test(tc_core, test_s21_sprintf_e_138);
  tcase_add_test(tc_core, test_s21_sprintf_e_139);
  tcase_add_test(tc_core, test_s21_sprintf_e_140);
  tcase_add_test(tc_core, test_s21_sprintf_e_141);
  tcase_add_test(tc_core, test_s21_sprintf_e_142);
  tcase_add_test(tc_core, test_s21_sprintf_e_143);
  tcase_add_test(tc_core, test_s21_sprintf_e_144);
  tcase_add_test(tc_core, test_s21_sprintf_e_145);
  tcase_add_test(tc_core, test_s21_sprintf_e_146);
  tcase_add_test(tc_core, test_s21_sprintf_e_147);
  tcase_add_test(tc_core, test_s21_sprintf_e_148);
  tcase_add_test(tc_core, test_s21_sprintf_e_149);
  tcase_add_test(tc_core, test_s21_sprintf_e_150);
  tcase_add_test(tc_core, test_s21_sprintf_e_151);
  tcase_add_test(tc_core, test_s21_sprintf_e_152);
  tcase_add_test(tc_core, test_s21_sprintf_e_153);
  tcase_add_test(tc_core, test_s21_sprintf_e_154);
  tcase_add_test(tc_core, test_s21_sprintf_e_155);
  tcase_add_test(tc_core, test_s21_sprintf_e_156);
  tcase_add_test(tc_core, test_s21_sprintf_e_157);
  tcase_add_test(tc_core, test_s21_sprintf_e_158);
  tcase_add_test(tc_core, test_s21_sprintf_e_159);
  tcase_add_test(tc_core, test_s21_sprintf_e_160);
  tcase_add_test(tc_core, test_s21_sprintf_e_161);
  tcase_add_test(tc_core, test_s21_sprintf_e_162);
  tcase_add_test(tc_core, test_s21_sprintf_e_163);
  tcase_add_test(tc_core, test_s21_sprintf_e_164);
  tcase_add_test(tc_core, test_s21_sprintf_e_165);
  tcase_add_test(tc_core, test_s21_sprintf_e_166);
  tcase_add_test(tc_core, test_s21_sprintf_e_167);
  tcase_add_test(tc_core, test_s21_sprintf_e_168);
  tcase_add_test(tc_core, test_s21_sprintf_e_169);
  tcase_add_test(tc_core, test_s21_sprintf_e_170);
  tcase_add_test(tc_core, test_s21_sprintf_e_171);
  tcase_add_test(tc_core, test_s21_sprintf_e_172);
  tcase_add_test(tc_core, test_s21_sprintf_e_173);
  tcase_add_test(tc_core, test_s21_sprintf_e_174);
  tcase_add_test(tc_core, test_s21_sprintf_e_175);
  tcase_add_test(tc_core, test_s21_sprintf_e_176);
  tcase_add_test(tc_core, test_s21_sprintf_e_177);
  tcase_add_test(tc_core, test_s21_sprintf_e_178);
  tcase_add_test(tc_core, test_s21_sprintf_e_179);
  tcase_add_test(tc_core, test_s21_sprintf_e_180);
  tcase_add_test(tc_core, test_s21_sprintf_e_181);
  tcase_add_test(tc_core, test_s21_sprintf_e_182);
  tcase_add_test(tc_core, test_s21_sprintf_e_183);
  tcase_add_test(tc_core, test_s21_sprintf_e_184);
  tcase_add_test(tc_core, test_s21_sprintf_e_185);
  tcase_add_test(tc_core, test_s21_sprintf_e_186);
  tcase_add_test(tc_core, test_s21_sprintf_e_187);
  tcase_add_test(tc_core, test_s21_sprintf_e_188);
  tcase_add_test(tc_core, test_s21_sprintf_e_189);
  tcase_add_test(tc_core, test_s21_sprintf_e_190);
  tcase_add_test(tc_core, test_s21_sprintf_e_191);
  tcase_add_test(tc_core, test_s21_sprintf_e_192);
  tcase_add_test(tc_core, test_s21_sprintf_e_193);
  tcase_add_test(tc_core, test_s21_sprintf_e_194);
  tcase_add_test(tc_core, test_s21_sprintf_e_195);
  tcase_add_test(tc_core, test_s21_sprintf_e_196);
  tcase_add_test(tc_core, test_s21_sprintf_e_197);
  tcase_add_test(tc_core, test_s21_sprintf_e_198);
  tcase_add_test(tc_core, test_s21_sprintf_e_199);
  tcase_add_test(tc_core, test_s21_sprintf_e_200);
  tcase_add_test(tc_core, test_s21_sprintf_e_201);
  tcase_add_test(tc_core, test_s21_sprintf_e_202);
  tcase_add_test(tc_core, test_s21_sprintf_e_203);
  tcase_add_test(tc_core, test_s21_sprintf_e_204);
  tcase_add_test(tc_core, test_s21_sprintf_e_205);
  tcase_add_test(tc_core, test_s21_sprintf_e_206);
  tcase_add_test(tc_core, test_s21_sprintf_e_207);
  tcase_add_test(tc_core, test_s21_sprintf_e_208);
  tcase_add_test(tc_core, test_s21_sprintf_e_209);
  tcase_add_test(tc_core, test_s21_sprintf_e_210);
  tcase_add_test(tc_core, test_s21_sprintf_e_211);
  tcase_add_test(tc_core, test_s21_sprintf_e_212);
  tcase_add_test(tc_core, test_s21_sprintf_e_213);
  tcase_add_test(tc_core, test_s21_sprintf_e_214);
  tcase_add_test(tc_core, test_s21_sprintf_e_215);
  tcase_add_test(tc_core, test_s21_sprintf_e_216);
  tcase_add_test(tc_core, test_s21_sprintf_e_217);
  tcase_add_test(tc_core, test_s21_sprintf_e_218);
  tcase_add_test(tc_core, test_s21_sprintf_e_219);
  tcase_add_test(tc_core, test_s21_sprintf_e_220);
  tcase_add_test(tc_core, test_s21_sprintf_e_221);
  tcase_add_test(tc_core, test_s21_sprintf_e_222);
  tcase_add_test(tc_core, test_s21_sprintf_e_223);
  tcase_add_test(tc_core, test_s21_sprintf_e_224);
  tcase_add_test(tc_core, test_s21_sprintf_e_225);
  tcase_add_test(tc_core, test_s21_sprintf_e_226);
  tcase_add_test(tc_core, test_s21_sprintf_e_227);
  tcase_add_test(tc_core, test_s21_sprintf_e_227);
  tcase_add_test(tc_core, test_s21_sprintf_e_229);
  tcase_add_test(tc_core, test_s21_sprintf_e_230);
  tcase_add_test(tc_core, test_s21_sprintf_e_231);
  tcase_add_test(tc_core, test_s21_sprintf_e_232);
  tcase_add_test(tc_core, test_s21_sprintf_e_233);
  tcase_add_test(tc_core, test_s21_sprintf_e_234);
  tcase_add_test(tc_core, test_s21_sprintf_e_235);
  tcase_add_test(tc_core, test_s21_sprintf_e_236);
  tcase_add_test(tc_core, test_s21_sprintf_e_237);
  tcase_add_test(tc_core, test_s21_sprintf_e_238);
  tcase_add_test(tc_core, test_s21_sprintf_e_239);
  tcase_add_test(tc_core, test_s21_sprintf_e_240);
  tcase_add_test(tc_core, test_s21_sprintf_e_241);
  tcase_add_test(tc_core, test_s21_sprintf_e_242);
  tcase_add_test(tc_core, test_s21_sprintf_e_243);
  tcase_add_test(tc_core, test_s21_sprintf_e_244);
  tcase_add_test(tc_core, test_s21_sprintf_e_245);
  tcase_add_test(tc_core, test_s21_sprintf_e_246);
  tcase_add_test(tc_core, test_s21_sprintf_e_247);
  tcase_add_test(tc_core, test_s21_sprintf_e_248);
  tcase_add_test(tc_core, test_s21_sprintf_e_249);
  tcase_add_test(tc_core, test_s21_sprintf_e_250);

  suite_add_tcase(s, tc_core);

  return s;
}