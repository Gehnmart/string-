#include <stdio.h>

#include "./test_sprintf.h"

/* specifier f */

START_TEST(test_s21_sprintf_f_1) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 0;
  sprintf(str, "num = %f/.", n);
  s21_sprintf(str1, "num = %f/.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_2) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  double n = 2147483647;
  sprintf(str, "num = %f.", n);
  s21_sprintf(str1, "num = %f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_3) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %f.", n);
  s21_sprintf(str1, "num = %f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_4) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %f.", n);
  s21_sprintf(str1, "num = %f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with one flag */

START_TEST(test_s21_sprintf_f_5) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-f.", n);
  s21_sprintf(str1, "num = %-f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_6) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-f.", n);
  s21_sprintf(str1, "num = %-f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_7) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+f.", n);
  s21_sprintf(str1, "num = %+f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_8) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+f.", n);
  s21_sprintf(str1, "num = %+f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_9) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % f.", n);
  s21_sprintf(str1, "num = % f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_10) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % f.", n);
  s21_sprintf(str1, "num = % f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_11) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#f.", n);
  s21_sprintf(str1, "num = %#f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_12) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %#f.", n);
  s21_sprintf(str1, "num = %#f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_13) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %0f.", n);
  s21_sprintf(str1, "num = %0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_14) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0f.", n);
  s21_sprintf(str1, "num = %0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with some flags */
/* 2 flags */

START_TEST(test_s21_sprintf_f_15) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+f.", n);
  s21_sprintf(str1, "num = %-+f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_16) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+f.", n);
  s21_sprintf(str1, "num = %-+f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_17) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %- f.", n);
  s21_sprintf(str1, "num = %- f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_18) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %- f.", n);
  s21_sprintf(str1, "num = %- f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_19) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-#f.", n);
  s21_sprintf(str1, "num = %-#f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_20) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-#f.", n);
  s21_sprintf(str1, "num = %-#f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_21) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-0f.", n);
  s21_sprintf(str1, "num = %-0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_22) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-0f.", n);
  s21_sprintf(str1, "num = %-0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_23) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ f.", n);
  s21_sprintf(str1, "num = %+ f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_24) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ f.", n);
  s21_sprintf(str1, "num = %+ f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_25) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+#f.", n);
  s21_sprintf(str1, "num = %+#f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_26) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+#f.", n);
  s21_sprintf(str1, "num = %+#f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_27) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ f.", n);
  s21_sprintf(str1, "num = %+ f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_28) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+0f.", n);
  s21_sprintf(str1, "num = %+0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_29) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #f.", n);
  s21_sprintf(str1, "num = % #f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_30) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #f.", n);
  s21_sprintf(str1, "num = % #f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_31) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 0f.", n);
  s21_sprintf(str1, "num = % 0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_32) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 0f.", n);
  s21_sprintf(str1, "num = % 0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_33) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#0f.", n);
  s21_sprintf(str1, "num = %#0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_34) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0#f.", n);
  s21_sprintf(str1, "num = %0#f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_f_35) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ f.", n);
  s21_sprintf(str1, "num = %-+ f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_36) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ f.", n);
  s21_sprintf(str1, "num = %-+ f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_37) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+#f.", n);
  s21_sprintf(str1, "num = %-+#f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_38) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+#f.", n);
  s21_sprintf(str1, "num = %-+#f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_39) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+0f.", n);
  s21_sprintf(str1, "num = %-+0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_40) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+0f.", n);
  s21_sprintf(str1, "num = %-+0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_41) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #f.", n);
  s21_sprintf(str1, "num = %+ #f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_42) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #f.", n);
  s21_sprintf(str1, "num = %+ #f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_43) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 0f.", n);
  s21_sprintf(str1, "num = %+ 0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_44) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 0f.", n);
  s21_sprintf(str1, "num = %+ 0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_45) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #0f.", n);
  s21_sprintf(str1, "num = % #0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_46) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #0f.", n);
  s21_sprintf(str1, "num = % #0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_f_47) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #f.", n);
  s21_sprintf(str1, "num = %-+ #f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_48) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #f.", n);
  s21_sprintf(str1, "num = %-+ #f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_49) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 0f.", n);
  s21_sprintf(str1, "num = %-+ 0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_50) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #f.", n);
  s21_sprintf(str1, "num = %-+ 0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_51) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #0f.", n);
  s21_sprintf(str1, "num = %+ #0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_52) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #0f.", n);
  s21_sprintf(str1, "num = %+ #0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_53) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #0f.", n);
  s21_sprintf(str1, "num = %-+ #0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_f_54) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #0f.", n);
  s21_sprintf(str1, "num = %-+ #0f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with precision */

START_TEST(test_s21_sprintf_f_55) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %.10f.", n);
  s21_sprintf(str1, "num = %.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_56) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %.10f.", n);
  s21_sprintf(str1, "num = %.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_57) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %.*f.", 10, n);
  s21_sprintf(str1, "num = %.*f.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_58) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %.*f.", 10, n);
  s21_sprintf(str1, "num = %.*f.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with precision anf flags */

START_TEST(test_s21_sprintf_f_59) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-.10f.", n);
  s21_sprintf(str1, "num = %-.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_60) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-.10f.", n);
  s21_sprintf(str1, "num = %-.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_61) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+.10f.", n);
  s21_sprintf(str1, "num = %+.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_62) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+.10f.", n);
  s21_sprintf(str1, "num = %+.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_63) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % .10f.", n);
  s21_sprintf(str1, "num = % .10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_64) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % .10f.", n);
  s21_sprintf(str1, "num = % .10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_65) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#.10f.", n);
  s21_sprintf(str1, "num = %#.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_66) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %#.10f.", n);
  s21_sprintf(str1, "num = %#.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_67) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %0.10f.", n);
  s21_sprintf(str1, "num = %0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_68) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0.10f.", n);
  s21_sprintf(str1, "num = %0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_69) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+.10f.", n);
  s21_sprintf(str1, "num = %-+.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_70) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+.10f.", n);
  s21_sprintf(str1, "num = %-+.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_71) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %- .10f.", n);
  s21_sprintf(str1, "num = %- .10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_72) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %- .10f.", n);
  s21_sprintf(str1, "num = %- .10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_73) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-#.10f.", n);
  s21_sprintf(str1, "num = %-#.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_74) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-#.10f.", n);
  s21_sprintf(str1, "num = %-#.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_75) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-0.10f.", n);
  s21_sprintf(str1, "num = %-0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_76) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-0.10f.", n);
  s21_sprintf(str1, "num = %-0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_77) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ .10f.", n);
  s21_sprintf(str1, "num = %+ .10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_78) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ .10f.", n);
  s21_sprintf(str1, "num = %+ .10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_79) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+#.10f.", n);
  s21_sprintf(str1, "num = %+#.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_80) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+#.10f.", n);
  s21_sprintf(str1, "num = %+#.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_81) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ .10f.", n);
  s21_sprintf(str1, "num = %+ .10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_82) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+0.10f.", n);
  s21_sprintf(str1, "num = %+0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_83) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #.10f.", n);
  s21_sprintf(str1, "num = % #.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_84) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #.10f.", n);
  s21_sprintf(str1, "num = % #.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_85) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 0.10f.", n);
  s21_sprintf(str1, "num = % 0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_86) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 0.10f.", n);
  s21_sprintf(str1, "num = % 0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_87) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#0.10f.", n);
  s21_sprintf(str1, "num = %#0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_88) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0#.10f.", n);
  s21_sprintf(str1, "num = %0#.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_f_89) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ .10f.", n);
  s21_sprintf(str1, "num = %-+ .10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_90) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ .10f.", n);
  s21_sprintf(str1, "num = %-+ .10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_91) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+#.10f.", n);
  s21_sprintf(str1, "num = %-+#.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_92) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+#.10f.", n);
  s21_sprintf(str1, "num = %-+#.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_93) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+0.10f.", n);
  s21_sprintf(str1, "num = %-+0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_94) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+0.10f.", n);
  s21_sprintf(str1, "num = %-+0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_95) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #.10f.", n);
  s21_sprintf(str1, "num = %+ #.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_96) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #.10f.", n);
  s21_sprintf(str1, "num = %+ #.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_97) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 0.10f.", n);
  s21_sprintf(str1, "num = %+ 0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_98) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 0.10f.", n);
  s21_sprintf(str1, "num = %+ 0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_99) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #0.10f.", n);
  s21_sprintf(str1, "num = % #0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_100) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #0.10f.", n);
  s21_sprintf(str1, "num = % #0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_f_101) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #.10f.", n);
  s21_sprintf(str1, "num = %-+ #.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_102) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #.10f.", n);
  s21_sprintf(str1, "num = %-+ #.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_103) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 0.10f.", n);
  s21_sprintf(str1, "num = %-+ 0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_104) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #.10f.", n);
  s21_sprintf(str1, "num = %-+ 0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_105) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #0.10f.", n);
  s21_sprintf(str1, "num = %+ #0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_106) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #0.10f.", n);
  s21_sprintf(str1, "num = %+ #0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_107) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #0.10f.", n);
  s21_sprintf(str1, "num = %-+ #0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_f_108) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #0.10f.", n);
  s21_sprintf(str1, "num = %-+ #0.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with wifth */

START_TEST(test_s21_sprintf_f_109) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %10f.", n);
  s21_sprintf(str1, "num = %10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_110) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %10f.", n);
  s21_sprintf(str1, "num = %10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_111) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %*f.", 10, n);
  s21_sprintf(str1, "num = %*f.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_112) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %*f.", 10, n);
  s21_sprintf(str1, "num = %*f.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with wifth anf flags */

START_TEST(test_s21_sprintf_f_113) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-15f.", n);
  s21_sprintf(str1, "num = %-15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_114) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-15f.", n);
  s21_sprintf(str1, "num = %-15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_115) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+15f.", n);
  s21_sprintf(str1, "num = %+15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_116) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+15f.", n);
  s21_sprintf(str1, "num = %+15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_117) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 15f.", n);
  s21_sprintf(str1, "num = % 15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_118) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 15f.", n);
  s21_sprintf(str1, "num = % 15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_119) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#15f.", n);
  s21_sprintf(str1, "num = %#15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_120) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %#15f.", n);
  s21_sprintf(str1, "num = %#15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_121) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %015f.", n);
  s21_sprintf(str1, "num = %015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_122) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %015f.", n);
  s21_sprintf(str1, "num = %015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_123) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+15f.", n);
  s21_sprintf(str1, "num = %-+15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_124) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+15f.", n);
  s21_sprintf(str1, "num = %-+15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_125) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %- 15f.", n);
  s21_sprintf(str1, "num = %- 15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_126) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %- 15f.", n);
  s21_sprintf(str1, "num = %- 15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_127) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-#15f.", n);
  s21_sprintf(str1, "num = %-#15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_128) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-#15f.", n);
  s21_sprintf(str1, "num = %-#15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_129) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-015f.", n);
  s21_sprintf(str1, "num = %-015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_130) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-015f.", n);
  s21_sprintf(str1, "num = %-015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_131) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 15f.", n);
  s21_sprintf(str1, "num = %+ 15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_132) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 15f.", n);
  s21_sprintf(str1, "num = %+ 15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_133) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+#15f.", n);
  s21_sprintf(str1, "num = %+#15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_134) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+#15f.", n);
  s21_sprintf(str1, "num = %+#15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_135) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 15f.", n);
  s21_sprintf(str1, "num = %+ 15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_136) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+015f.", n);
  s21_sprintf(str1, "num = %+015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_137) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #15f.", n);
  s21_sprintf(str1, "num = % #15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_138) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #15f.", n);
  s21_sprintf(str1, "num = % #15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_139) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 015f.", n);
  s21_sprintf(str1, "num = % 015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_140) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 015f.", n);
  s21_sprintf(str1, "num = % 015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_141) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#015f.", n);
  s21_sprintf(str1, "num = %#015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_142) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0#15f.", n);
  s21_sprintf(str1, "num = %0#15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_f_143) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 15f.", n);
  s21_sprintf(str1, "num = %-+ 15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_144) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ 15f.", n);
  s21_sprintf(str1, "num = %-+ 15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_145) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+#15f.", n);
  s21_sprintf(str1, "num = %-+#15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_146) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+#15f.", n);
  s21_sprintf(str1, "num = %-+#15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_147) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+015f.", n);
  s21_sprintf(str1, "num = %-+015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_148) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+015f.", n);
  s21_sprintf(str1, "num = %-+015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_149) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #15f.", n);
  s21_sprintf(str1, "num = %+ #15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_150) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #15f.", n);
  s21_sprintf(str1, "num = %+ #15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_151) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 015f.", n);
  s21_sprintf(str1, "num = %+ 015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_152) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 015f.", n);
  s21_sprintf(str1, "num = %+ 015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_153) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #015f.", n);
  s21_sprintf(str1, "num = % #015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_154) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #015f.", n);
  s21_sprintf(str1, "num = % #015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_f_155) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #15f.", n);
  s21_sprintf(str1, "num = %-+ #15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_156) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #15f.", n);
  s21_sprintf(str1, "num = %-+ #15f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_157) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 015f.", n);
  s21_sprintf(str1, "num = %-+ 015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_158) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #15f.", n);
  s21_sprintf(str1, "num = %-+ 015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_159) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #015f.", n);
  s21_sprintf(str1, "num = %+ #015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_160) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #015f.", n);
  s21_sprintf(str1, "num = %+ #015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_161) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #015f.", n);
  s21_sprintf(str1, "num = %-+ #015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_f_162) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #015f.", n);
  s21_sprintf(str1, "num = %-+ #015f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with precision anf wifth */

START_TEST(test_s21_sprintf_f_163) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %10.10f.", n);
  s21_sprintf(str1, "num = %10.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_164) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %10.10f.", n);
  s21_sprintf(str1, "num = %10.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_165) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %5.10f.", n);
  s21_sprintf(str1, "num = %5.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_166) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %5.10f.", n);
  s21_sprintf(str1, "num = %5.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_167) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %10.5f.", n);
  s21_sprintf(str1, "num = %10.5f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_168) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %10.5f.", n);
  s21_sprintf(str1, "num = %10.5f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with precision, wifth anf flags */

START_TEST(test_s21_sprintf_f_169) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-15.10f.", n);
  s21_sprintf(str1, "num = %-15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_170) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-15.10f.", n);
  s21_sprintf(str1, "num = %-15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_171) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+15.10f.", n);
  s21_sprintf(str1, "num = %+15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_172) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+15.10f.", n);
  s21_sprintf(str1, "num = %+15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_173) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 15.10f.", n);
  s21_sprintf(str1, "num = % 15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_174) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 15.10f.", n);
  s21_sprintf(str1, "num = % 15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_175) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#15.10f.", n);
  s21_sprintf(str1, "num = %#15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_176) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %#15.10f.", n);
  s21_sprintf(str1, "num = %#15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_177) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %015.10f.", n);
  s21_sprintf(str1, "num = %015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_178) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %015.10f.", n);
  s21_sprintf(str1, "num = %015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_179) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+15.10f.", n);
  s21_sprintf(str1, "num = %-+15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_180) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+15.10f.", n);
  s21_sprintf(str1, "num = %-+15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_181) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %- 15.10f.", n);
  s21_sprintf(str1, "num = %- 15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_182) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %- 15.10f.", n);
  s21_sprintf(str1, "num = %- 15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_183) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-#15.10f.", n);
  s21_sprintf(str1, "num = %-#15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_184) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-#15.10f.", n);
  s21_sprintf(str1, "num = %-#15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_185) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-015.10f.", n);
  s21_sprintf(str1, "num = %-015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_186) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-015.10f.", n);
  s21_sprintf(str1, "num = %-015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_187) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 15.10f.", n);
  s21_sprintf(str1, "num = %+ 15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_188) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 15.10f.", n);
  s21_sprintf(str1, "num = %+ 15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_189) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+#15.10f.", n);
  s21_sprintf(str1, "num = %+#15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_190) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+#15.10f.", n);
  s21_sprintf(str1, "num = %+#15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_191) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 15.10f.", n);
  s21_sprintf(str1, "num = %+ 15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_192) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+015.10f.", n);
  s21_sprintf(str1, "num = %+015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_193) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #15.10f.", n);
  s21_sprintf(str1, "num = % #15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_194) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #15.10f.", n);
  s21_sprintf(str1, "num = % #15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_195) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 015.10f.", n);
  s21_sprintf(str1, "num = % 015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_196) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 015.10f.", n);
  s21_sprintf(str1, "num = % 015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_197) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#015.10f.", n);
  s21_sprintf(str1, "num = %#015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_198) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0#15.10f.", n);
  s21_sprintf(str1, "num = %0#15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_f_199) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 15.10f.", n);
  s21_sprintf(str1, "num = %-+ 15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_200) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ 15.10f.", n);
  s21_sprintf(str1, "num = %-+ 15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_201) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+#15.10f.", n);
  s21_sprintf(str1, "num = %-+#15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_202) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+#15.10f.", n);
  s21_sprintf(str1, "num = %-+#15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_203) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+015.10f.", n);
  s21_sprintf(str1, "num = %-+015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_204) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+015.10f.", n);
  s21_sprintf(str1, "num = %-+015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_205) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #15.10f.", n);
  s21_sprintf(str1, "num = %+ #15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_206) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #15.10f.", n);
  s21_sprintf(str1, "num = %+ #15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_207) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 015.10f.", n);
  s21_sprintf(str1, "num = %+ 015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_208) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 015.10f.", n);
  s21_sprintf(str1, "num = %+ 015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_209) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #015.10f.", n);
  s21_sprintf(str1, "num = % #015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_210) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #015.10f.", n);
  s21_sprintf(str1, "num = % #015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_f_211) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #15.10f.", n);
  s21_sprintf(str1, "num = %-+ #15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_212) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #15.10f.", n);
  s21_sprintf(str1, "num = %-+ #15.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_213) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 015.10f.", n);
  s21_sprintf(str1, "num = %-+ 015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_214) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #15.10f.", n);
  s21_sprintf(str1, "num = %-+ 015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_215) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #015.10f.", n);
  s21_sprintf(str1, "num = %+ #015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_216) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #015.10f.", n);
  s21_sprintf(str1, "num = %+ #015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_f_217) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #015.10f.", n);
  s21_sprintf(str1, "num = %-+ #015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_218) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #015.10f.", n);
  s21_sprintf(str1, "num = %-+ #015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with length */

START_TEST(test_s21_sprintf_f_219) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  double n = 2147483647;

  sprintf(str, "num = %-+ #015.10lf.", n);
  s21_sprintf(str1, "num = %-+ #015.10lf.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_221) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  double n = -2147483648;

  sprintf(str, "num = %-+ #015.10lf.", n);
  s21_sprintf(str1, "num = %-+ #015.10lf.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_222) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long double n = 2.2250738585072014e-308;

  sprintf(str, "num = %-+ #015.10Lf.", n);
  s21_sprintf(str1, "num = %-+ #015.10Lf.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_223) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 214;

  sprintf(str, "num = %-+ #015.10hf.", n);
  s21_sprintf(str1, "num = %-+ #015.10hf.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_224) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  double n = -214;

  sprintf(str, "num = %-+ #015.10hf.", n);
  s21_sprintf(str1, "num = %-+ #015.10hf.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_225) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 214;

  sprintf(str, "num = %-+ #015.10hlf.", n);
  s21_sprintf(str1, "num = %-+ #015.10hlf.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_226) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long double n = 2.2204460492503131e-016;

  sprintf(str, "num = %-+ #015.10Lf.", n);
  s21_sprintf(str1, "num = %-+ #015.10Lf.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_227) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  double n = -214;

  sprintf(str, "num = %-+ #015.10lhf.", n);
  s21_sprintf(str1, "num = %-+ #015.10lhf.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_228) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  double n = 4294967295;

  sprintf(str, "num = %-+ #015.10lf.", n);
  s21_sprintf(str1, "num = %-+ #015.10lf.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_229) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long double n = 2.2250738585072014e-308;

  sprintf(str, "num = %-+ #015.10Lf.", n);
  s21_sprintf(str1, "num = %-+ #015.10Lf.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_230) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 2147483647;

  sprintf(str, "num = %-+ #015.10hf.", n);
  s21_sprintf(str1, "num = %-+ #015.10hf.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_231) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = -214748364;

  sprintf(str, "num = %-+ #015.10hf.", n);
  s21_sprintf(str1, "num = %-+ #015.10hf.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_232) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 072;

  sprintf(str, "num = %-+ #015.10f.", n);
  s21_sprintf(str1, "num = %-+ #015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_233) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = -072;

  sprintf(str, "num = %-+ #015.10f.", n);
  s21_sprintf(str1, "num = %-+ #015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_234) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 072;

  sprintf(str, "num = %-+ #015.10hf.", n);
  s21_sprintf(str1, "num = %-+ #015.10hf.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_235) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = -072;

  sprintf(str, "num = %-+ #015.10hf.", n);
  s21_sprintf(str1, "num = %-+ #015.10hf.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_236) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 0xb72;

  sprintf(str, "num = %-+ #015.10f.", n);
  s21_sprintf(str1, "num = %-+ #015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_237) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = -0xb72;

  sprintf(str, "num = %-+ #015.10f.", n);
  s21_sprintf(str1, "num = %-+ #015.10f.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_238) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 0xb72;

  sprintf(str, "num = %-+ #015.10hf.", n);
  s21_sprintf(str1, "num = %-+ #015.10hf.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_f_239) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = -0xb72;

  sprintf(str, "num = %-+ #015.10hf.", n);
  s21_sprintf(str1, "num = %-+ #015.10hf.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

Suite *s21_sprintf_f_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_sprintf_f");

  /* Core test case */
  tc_core = tcase_create("sprintf_test");

  tcase_add_test(tc_core, test_s21_sprintf_f_1);
  tcase_add_test(tc_core, test_s21_sprintf_f_2);
  tcase_add_test(tc_core, test_s21_sprintf_f_3);
  tcase_add_test(tc_core, test_s21_sprintf_f_4);
  tcase_add_test(tc_core, test_s21_sprintf_f_5);
  tcase_add_test(tc_core, test_s21_sprintf_f_6);
  tcase_add_test(tc_core, test_s21_sprintf_f_7);
  tcase_add_test(tc_core, test_s21_sprintf_f_8);
  tcase_add_test(tc_core, test_s21_sprintf_f_9);
  tcase_add_test(tc_core, test_s21_sprintf_f_10);
  tcase_add_test(tc_core, test_s21_sprintf_f_11);
  tcase_add_test(tc_core, test_s21_sprintf_f_12);
  tcase_add_test(tc_core, test_s21_sprintf_f_13);
  tcase_add_test(tc_core, test_s21_sprintf_f_14);
  tcase_add_test(tc_core, test_s21_sprintf_f_15);
  tcase_add_test(tc_core, test_s21_sprintf_f_16);
  tcase_add_test(tc_core, test_s21_sprintf_f_17);
  tcase_add_test(tc_core, test_s21_sprintf_f_18);
  tcase_add_test(tc_core, test_s21_sprintf_f_19);
  tcase_add_test(tc_core, test_s21_sprintf_f_20);
  tcase_add_test(tc_core, test_s21_sprintf_f_21);
  tcase_add_test(tc_core, test_s21_sprintf_f_22);
  tcase_add_test(tc_core, test_s21_sprintf_f_23);
  tcase_add_test(tc_core, test_s21_sprintf_f_24);
  tcase_add_test(tc_core, test_s21_sprintf_f_25);
  tcase_add_test(tc_core, test_s21_sprintf_f_26);
  tcase_add_test(tc_core, test_s21_sprintf_f_27);
  tcase_add_test(tc_core, test_s21_sprintf_f_28);
  tcase_add_test(tc_core, test_s21_sprintf_f_29);
  tcase_add_test(tc_core, test_s21_sprintf_f_30);
  tcase_add_test(tc_core, test_s21_sprintf_f_31);
  tcase_add_test(tc_core, test_s21_sprintf_f_32);
  tcase_add_test(tc_core, test_s21_sprintf_f_33);
  tcase_add_test(tc_core, test_s21_sprintf_f_34);
  tcase_add_test(tc_core, test_s21_sprintf_f_35);
  tcase_add_test(tc_core, test_s21_sprintf_f_36);
  tcase_add_test(tc_core, test_s21_sprintf_f_37);
  tcase_add_test(tc_core, test_s21_sprintf_f_38);
  tcase_add_test(tc_core, test_s21_sprintf_f_39);
  tcase_add_test(tc_core, test_s21_sprintf_f_40);
  tcase_add_test(tc_core, test_s21_sprintf_f_41);
  tcase_add_test(tc_core, test_s21_sprintf_f_42);
  tcase_add_test(tc_core, test_s21_sprintf_f_43);
  tcase_add_test(tc_core, test_s21_sprintf_f_44);
  tcase_add_test(tc_core, test_s21_sprintf_f_45);
  tcase_add_test(tc_core, test_s21_sprintf_f_46);
  tcase_add_test(tc_core, test_s21_sprintf_f_47);
  tcase_add_test(tc_core, test_s21_sprintf_f_48);
  tcase_add_test(tc_core, test_s21_sprintf_f_49);
  tcase_add_test(tc_core, test_s21_sprintf_f_50);
  tcase_add_test(tc_core, test_s21_sprintf_f_51);
  tcase_add_test(tc_core, test_s21_sprintf_f_52);
  tcase_add_test(tc_core, test_s21_sprintf_f_53);
  tcase_add_test(tc_core, test_s21_sprintf_f_54);
  tcase_add_test(tc_core, test_s21_sprintf_f_55);
  tcase_add_test(tc_core, test_s21_sprintf_f_56);
  tcase_add_test(tc_core, test_s21_sprintf_f_57);
  tcase_add_test(tc_core, test_s21_sprintf_f_58);
  tcase_add_test(tc_core, test_s21_sprintf_f_60);
  tcase_add_test(tc_core, test_s21_sprintf_f_61);
  tcase_add_test(tc_core, test_s21_sprintf_f_62);
  tcase_add_test(tc_core, test_s21_sprintf_f_63);
  tcase_add_test(tc_core, test_s21_sprintf_f_64);
  tcase_add_test(tc_core, test_s21_sprintf_f_65);
  tcase_add_test(tc_core, test_s21_sprintf_f_66);
  tcase_add_test(tc_core, test_s21_sprintf_f_67);
  tcase_add_test(tc_core, test_s21_sprintf_f_68);
  tcase_add_test(tc_core, test_s21_sprintf_f_69);
  tcase_add_test(tc_core, test_s21_sprintf_f_70);
  tcase_add_test(tc_core, test_s21_sprintf_f_71);
  tcase_add_test(tc_core, test_s21_sprintf_f_72);
  tcase_add_test(tc_core, test_s21_sprintf_f_73);
  tcase_add_test(tc_core, test_s21_sprintf_f_74);
  tcase_add_test(tc_core, test_s21_sprintf_f_75);
  tcase_add_test(tc_core, test_s21_sprintf_f_76);
  tcase_add_test(tc_core, test_s21_sprintf_f_77);
  tcase_add_test(tc_core, test_s21_sprintf_f_78);
  tcase_add_test(tc_core, test_s21_sprintf_f_79);
  tcase_add_test(tc_core, test_s21_sprintf_f_80);
  tcase_add_test(tc_core, test_s21_sprintf_f_81);
  tcase_add_test(tc_core, test_s21_sprintf_f_82);
  tcase_add_test(tc_core, test_s21_sprintf_f_83);
  tcase_add_test(tc_core, test_s21_sprintf_f_84);
  tcase_add_test(tc_core, test_s21_sprintf_f_85);
  tcase_add_test(tc_core, test_s21_sprintf_f_86);
  tcase_add_test(tc_core, test_s21_sprintf_f_87);
  tcase_add_test(tc_core, test_s21_sprintf_f_88);
  tcase_add_test(tc_core, test_s21_sprintf_f_89);
  tcase_add_test(tc_core, test_s21_sprintf_f_90);
  tcase_add_test(tc_core, test_s21_sprintf_f_100);
  tcase_add_test(tc_core, test_s21_sprintf_f_101);
  tcase_add_test(tc_core, test_s21_sprintf_f_102);
  tcase_add_test(tc_core, test_s21_sprintf_f_103);
  tcase_add_test(tc_core, test_s21_sprintf_f_104);
  tcase_add_test(tc_core, test_s21_sprintf_f_105);
  tcase_add_test(tc_core, test_s21_sprintf_f_106);
  tcase_add_test(tc_core, test_s21_sprintf_f_107);
  tcase_add_test(tc_core, test_s21_sprintf_f_108);
  tcase_add_test(tc_core, test_s21_sprintf_f_109);
  tcase_add_test(tc_core, test_s21_sprintf_f_110);
  tcase_add_test(tc_core, test_s21_sprintf_f_111);
  tcase_add_test(tc_core, test_s21_sprintf_f_112);
  tcase_add_test(tc_core, test_s21_sprintf_f_113);
  tcase_add_test(tc_core, test_s21_sprintf_f_114);
  tcase_add_test(tc_core, test_s21_sprintf_f_115);
  tcase_add_test(tc_core, test_s21_sprintf_f_116);
  tcase_add_test(tc_core, test_s21_sprintf_f_117);
  tcase_add_test(tc_core, test_s21_sprintf_f_118);
  tcase_add_test(tc_core, test_s21_sprintf_f_119);
  tcase_add_test(tc_core, test_s21_sprintf_f_120);
  tcase_add_test(tc_core, test_s21_sprintf_f_121);
  tcase_add_test(tc_core, test_s21_sprintf_f_122);
  tcase_add_test(tc_core, test_s21_sprintf_f_123);
  tcase_add_test(tc_core, test_s21_sprintf_f_124);
  tcase_add_test(tc_core, test_s21_sprintf_f_125);
  tcase_add_test(tc_core, test_s21_sprintf_f_126);
  tcase_add_test(tc_core, test_s21_sprintf_f_127);
  tcase_add_test(tc_core, test_s21_sprintf_f_128);
  tcase_add_test(tc_core, test_s21_sprintf_f_129);
  tcase_add_test(tc_core, test_s21_sprintf_f_130);
  tcase_add_test(tc_core, test_s21_sprintf_f_131);
  tcase_add_test(tc_core, test_s21_sprintf_f_132);
  tcase_add_test(tc_core, test_s21_sprintf_f_133);
  tcase_add_test(tc_core, test_s21_sprintf_f_134);
  tcase_add_test(tc_core, test_s21_sprintf_f_135);
  tcase_add_test(tc_core, test_s21_sprintf_f_136);
  tcase_add_test(tc_core, test_s21_sprintf_f_137);
  tcase_add_test(tc_core, test_s21_sprintf_f_138);
  tcase_add_test(tc_core, test_s21_sprintf_f_139);
  tcase_add_test(tc_core, test_s21_sprintf_f_140);
  tcase_add_test(tc_core, test_s21_sprintf_f_141);
  tcase_add_test(tc_core, test_s21_sprintf_f_142);
  tcase_add_test(tc_core, test_s21_sprintf_f_143);
  tcase_add_test(tc_core, test_s21_sprintf_f_144);
  tcase_add_test(tc_core, test_s21_sprintf_f_145);
  tcase_add_test(tc_core, test_s21_sprintf_f_146);
  tcase_add_test(tc_core, test_s21_sprintf_f_147);
  tcase_add_test(tc_core, test_s21_sprintf_f_148);
  tcase_add_test(tc_core, test_s21_sprintf_f_149);
  tcase_add_test(tc_core, test_s21_sprintf_f_150);
  tcase_add_test(tc_core, test_s21_sprintf_f_151);
  tcase_add_test(tc_core, test_s21_sprintf_f_152);
  tcase_add_test(tc_core, test_s21_sprintf_f_153);
  tcase_add_test(tc_core, test_s21_sprintf_f_154);
  tcase_add_test(tc_core, test_s21_sprintf_f_155);
  tcase_add_test(tc_core, test_s21_sprintf_f_156);
  tcase_add_test(tc_core, test_s21_sprintf_f_157);
  tcase_add_test(tc_core, test_s21_sprintf_f_158);
  tcase_add_test(tc_core, test_s21_sprintf_f_159);
  tcase_add_test(tc_core, test_s21_sprintf_f_160);
  tcase_add_test(tc_core, test_s21_sprintf_f_161);
  tcase_add_test(tc_core, test_s21_sprintf_f_162);
  tcase_add_test(tc_core, test_s21_sprintf_f_163);
  tcase_add_test(tc_core, test_s21_sprintf_f_164);
  tcase_add_test(tc_core, test_s21_sprintf_f_165);
  tcase_add_test(tc_core, test_s21_sprintf_f_166);
  tcase_add_test(tc_core, test_s21_sprintf_f_167);
  tcase_add_test(tc_core, test_s21_sprintf_f_168);
  tcase_add_test(tc_core, test_s21_sprintf_f_169);
  tcase_add_test(tc_core, test_s21_sprintf_f_170);
  tcase_add_test(tc_core, test_s21_sprintf_f_171);
  tcase_add_test(tc_core, test_s21_sprintf_f_172);
  tcase_add_test(tc_core, test_s21_sprintf_f_173);
  tcase_add_test(tc_core, test_s21_sprintf_f_174);
  tcase_add_test(tc_core, test_s21_sprintf_f_175);
  tcase_add_test(tc_core, test_s21_sprintf_f_176);
  tcase_add_test(tc_core, test_s21_sprintf_f_177);
  tcase_add_test(tc_core, test_s21_sprintf_f_178);
  tcase_add_test(tc_core, test_s21_sprintf_f_179);
  tcase_add_test(tc_core, test_s21_sprintf_f_180);
  tcase_add_test(tc_core, test_s21_sprintf_f_181);
  tcase_add_test(tc_core, test_s21_sprintf_f_182);
  tcase_add_test(tc_core, test_s21_sprintf_f_183);
  tcase_add_test(tc_core, test_s21_sprintf_f_184);
  tcase_add_test(tc_core, test_s21_sprintf_f_185);
  tcase_add_test(tc_core, test_s21_sprintf_f_186);
  tcase_add_test(tc_core, test_s21_sprintf_f_187);
  tcase_add_test(tc_core, test_s21_sprintf_f_188);
  tcase_add_test(tc_core, test_s21_sprintf_f_189);
  tcase_add_test(tc_core, test_s21_sprintf_f_190);
  tcase_add_test(tc_core, test_s21_sprintf_f_191);
  tcase_add_test(tc_core, test_s21_sprintf_f_192);
  tcase_add_test(tc_core, test_s21_sprintf_f_193);
  tcase_add_test(tc_core, test_s21_sprintf_f_194);
  tcase_add_test(tc_core, test_s21_sprintf_f_195);
  tcase_add_test(tc_core, test_s21_sprintf_f_196);
  tcase_add_test(tc_core, test_s21_sprintf_f_197);
  tcase_add_test(tc_core, test_s21_sprintf_f_198);
  tcase_add_test(tc_core, test_s21_sprintf_f_199);
  tcase_add_test(tc_core, test_s21_sprintf_f_200);
  tcase_add_test(tc_core, test_s21_sprintf_f_201);
  tcase_add_test(tc_core, test_s21_sprintf_f_202);
  tcase_add_test(tc_core, test_s21_sprintf_f_203);
  tcase_add_test(tc_core, test_s21_sprintf_f_204);
  tcase_add_test(tc_core, test_s21_sprintf_f_205);
  tcase_add_test(tc_core, test_s21_sprintf_f_206);
  tcase_add_test(tc_core, test_s21_sprintf_f_207);
  tcase_add_test(tc_core, test_s21_sprintf_f_208);
  tcase_add_test(tc_core, test_s21_sprintf_f_209);
  tcase_add_test(tc_core, test_s21_sprintf_f_210);
  tcase_add_test(tc_core, test_s21_sprintf_f_211);
  tcase_add_test(tc_core, test_s21_sprintf_f_212);
  tcase_add_test(tc_core, test_s21_sprintf_f_213);
  tcase_add_test(tc_core, test_s21_sprintf_f_214);
  tcase_add_test(tc_core, test_s21_sprintf_f_215);
  tcase_add_test(tc_core, test_s21_sprintf_f_216);
  tcase_add_test(tc_core, test_s21_sprintf_f_217);
  tcase_add_test(tc_core, test_s21_sprintf_f_218);
  tcase_add_test(tc_core, test_s21_sprintf_f_219);
  tcase_add_test(tc_core, test_s21_sprintf_f_221);
  tcase_add_test(tc_core, test_s21_sprintf_f_222);
  tcase_add_test(tc_core, test_s21_sprintf_f_223);
  tcase_add_test(tc_core, test_s21_sprintf_f_224);
  tcase_add_test(tc_core, test_s21_sprintf_f_225);
  tcase_add_test(tc_core, test_s21_sprintf_f_226);
  tcase_add_test(tc_core, test_s21_sprintf_f_227);
  tcase_add_test(tc_core, test_s21_sprintf_f_227);
  tcase_add_test(tc_core, test_s21_sprintf_f_229);
  tcase_add_test(tc_core, test_s21_sprintf_f_230);
  tcase_add_test(tc_core, test_s21_sprintf_f_231);
  tcase_add_test(tc_core, test_s21_sprintf_f_232);
  tcase_add_test(tc_core, test_s21_sprintf_f_233);
  tcase_add_test(tc_core, test_s21_sprintf_f_234);
  tcase_add_test(tc_core, test_s21_sprintf_f_235);
  tcase_add_test(tc_core, test_s21_sprintf_f_236);
  tcase_add_test(tc_core, test_s21_sprintf_f_237);
  tcase_add_test(tc_core, test_s21_sprintf_f_238);
  tcase_add_test(tc_core, test_s21_sprintf_f_239);

  suite_add_tcase(s, tc_core);

  return s;
}
