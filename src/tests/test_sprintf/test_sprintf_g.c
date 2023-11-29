#include <stdio.h>

#include "./test_sprintf.h"

/* specifier g */

START_TEST(test_s21_sprintf_g_1) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 0;
  sprintf(str, "num = %g/.", n);
  s21_sprintf(str1, "num = %g/.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_2) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  double n = 2147483647;
  sprintf(str, "num = %g.", n);
  s21_sprintf(str1, "num = %g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_3) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %g.", n);
  s21_sprintf(str1, "num = %g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_4) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %g.", n);
  s21_sprintf(str1, "num = %g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with one flag */

START_TEST(test_s21_sprintf_g_5) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-g.", n);
  s21_sprintf(str1, "num = %-g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_6) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-g.", n);
  s21_sprintf(str1, "num = %-g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_7) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+g.", n);
  s21_sprintf(str1, "num = %+g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_8) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+g.", n);
  s21_sprintf(str1, "num = %+g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_9) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % g.", n);
  s21_sprintf(str1, "num = % g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_10) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % g.", n);
  s21_sprintf(str1, "num = % g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_11) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#g.", n);
  s21_sprintf(str1, "num = %#g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_12) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %#g.", n);
  s21_sprintf(str1, "num = %#g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_13) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %0g.", n);
  s21_sprintf(str1, "num = %0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_14) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0g.", n);
  s21_sprintf(str1, "num = %0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with some flags */
/* 2 flags */

START_TEST(test_s21_sprintf_g_15) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+g.", n);
  s21_sprintf(str1, "num = %-+g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_16) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+g.", n);
  s21_sprintf(str1, "num = %-+g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_17) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %- g.", n);
  s21_sprintf(str1, "num = %- g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_18) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %- g.", n);
  s21_sprintf(str1, "num = %- g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_19) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-#g.", n);
  s21_sprintf(str1, "num = %-#g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_20) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-#g.", n);
  s21_sprintf(str1, "num = %-#g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_21) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-0g.", n);
  s21_sprintf(str1, "num = %-0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_22) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-0g.", n);
  s21_sprintf(str1, "num = %-0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_23) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ g.", n);
  s21_sprintf(str1, "num = %+ g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_24) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ g.", n);
  s21_sprintf(str1, "num = %+ g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_25) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+#g.", n);
  s21_sprintf(str1, "num = %+#g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_26) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+#g.", n);
  s21_sprintf(str1, "num = %+#g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_27) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ g.", n);
  s21_sprintf(str1, "num = %+ g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_28) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+0g.", n);
  s21_sprintf(str1, "num = %+0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_29) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #g.", n);
  s21_sprintf(str1, "num = % #g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_30) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #g.", n);
  s21_sprintf(str1, "num = % #g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_31) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 0g.", n);
  s21_sprintf(str1, "num = % 0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_32) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 0g.", n);
  s21_sprintf(str1, "num = % 0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_33) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#0g.", n);
  s21_sprintf(str1, "num = %#0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_34) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0#g.", n);
  s21_sprintf(str1, "num = %0#g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_g_35) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ g.", n);
  s21_sprintf(str1, "num = %-+ g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_36) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ g.", n);
  s21_sprintf(str1, "num = %-+ g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_37) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+#g.", n);
  s21_sprintf(str1, "num = %-+#g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_38) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+#g.", n);
  s21_sprintf(str1, "num = %-+#g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_39) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+0g.", n);
  s21_sprintf(str1, "num = %-+0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_40) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+0g.", n);
  s21_sprintf(str1, "num = %-+0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_41) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #g.", n);
  s21_sprintf(str1, "num = %+ #g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_42) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #g.", n);
  s21_sprintf(str1, "num = %+ #g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_43) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 0g.", n);
  s21_sprintf(str1, "num = %+ 0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_44) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 0g.", n);
  s21_sprintf(str1, "num = %+ 0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_45) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #0g.", n);
  s21_sprintf(str1, "num = % #0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_46) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #0g.", n);
  s21_sprintf(str1, "num = % #0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_g_47) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #g.", n);
  s21_sprintf(str1, "num = %-+ #g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_48) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #g.", n);
  s21_sprintf(str1, "num = %-+ #g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_49) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 0g.", n);
  s21_sprintf(str1, "num = %-+ 0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_50) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #g.", n);
  s21_sprintf(str1, "num = %-+ 0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_51) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #0g.", n);
  s21_sprintf(str1, "num = %+ #0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_52) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #0g.", n);
  s21_sprintf(str1, "num = %+ #0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_53) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #0g.", n);
  s21_sprintf(str1, "num = %-+ #0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_g_54) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #0g.", n);
  s21_sprintf(str1, "num = %-+ #0g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with precision */

START_TEST(test_s21_sprintf_g_55) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %.10g.", n);
  s21_sprintf(str1, "num = %.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_56) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %.10g.", n);
  s21_sprintf(str1, "num = %.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_57) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %.*g.", 10, n);
  s21_sprintf(str1, "num = %.*g.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_58) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %.*g.", 10, n);
  s21_sprintf(str1, "num = %.*g.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with precision anf flags */

START_TEST(test_s21_sprintf_g_59) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-.10g.", n);
  s21_sprintf(str1, "num = %-.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_60) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-.10g.", n);
  s21_sprintf(str1, "num = %-.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_61) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+.10g.", n);
  s21_sprintf(str1, "num = %+.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_62) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+.10g.", n);
  s21_sprintf(str1, "num = %+.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_63) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % .10g.", n);
  s21_sprintf(str1, "num = % .10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_64) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % .10g.", n);
  s21_sprintf(str1, "num = % .10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_65) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#.10g.", n);
  s21_sprintf(str1, "num = %#.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_66) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %#.10g.", n);
  s21_sprintf(str1, "num = %#.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_67) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %0.10g.", n);
  s21_sprintf(str1, "num = %0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_68) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0.10g.", n);
  s21_sprintf(str1, "num = %0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_69) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+.10g.", n);
  s21_sprintf(str1, "num = %-+.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_70) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+.10g.", n);
  s21_sprintf(str1, "num = %-+.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_71) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %- .10g.", n);
  s21_sprintf(str1, "num = %- .10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_72) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %- .10g.", n);
  s21_sprintf(str1, "num = %- .10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_73) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-#.10g.", n);
  s21_sprintf(str1, "num = %-#.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_74) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-#.10g.", n);
  s21_sprintf(str1, "num = %-#.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_75) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-0.10g.", n);
  s21_sprintf(str1, "num = %-0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_76) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-0.10g.", n);
  s21_sprintf(str1, "num = %-0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_77) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ .10g.", n);
  s21_sprintf(str1, "num = %+ .10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_78) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ .10g.", n);
  s21_sprintf(str1, "num = %+ .10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_79) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+#.10g.", n);
  s21_sprintf(str1, "num = %+#.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_80) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+#.10g.", n);
  s21_sprintf(str1, "num = %+#.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_81) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ .10g.", n);
  s21_sprintf(str1, "num = %+ .10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_82) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+0.10g.", n);
  s21_sprintf(str1, "num = %+0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_83) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #.10g.", n);
  s21_sprintf(str1, "num = % #.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_84) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #.10g.", n);
  s21_sprintf(str1, "num = % #.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_85) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 0.10g.", n);
  s21_sprintf(str1, "num = % 0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_86) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 0.10g.", n);
  s21_sprintf(str1, "num = % 0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_87) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#0.10g.", n);
  s21_sprintf(str1, "num = %#0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_88) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0#.10g.", n);
  s21_sprintf(str1, "num = %0#.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_g_89) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ .10g.", n);
  s21_sprintf(str1, "num = %-+ .10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_90) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ .10g.", n);
  s21_sprintf(str1, "num = %-+ .10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_91) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+#.10g.", n);
  s21_sprintf(str1, "num = %-+#.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_92) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+#.10g.", n);
  s21_sprintf(str1, "num = %-+#.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_93) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+0.10g.", n);
  s21_sprintf(str1, "num = %-+0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_94) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+0.10g.", n);
  s21_sprintf(str1, "num = %-+0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_95) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #.10g.", n);
  s21_sprintf(str1, "num = %+ #.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_96) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #.10g.", n);
  s21_sprintf(str1, "num = %+ #.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_97) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 0.10g.", n);
  s21_sprintf(str1, "num = %+ 0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_98) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 0.10g.", n);
  s21_sprintf(str1, "num = %+ 0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_99) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #0.10g.", n);
  s21_sprintf(str1, "num = % #0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_100) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #0.10g.", n);
  s21_sprintf(str1, "num = % #0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_g_101) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #.10g.", n);
  s21_sprintf(str1, "num = %-+ #.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_102) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #.10g.", n);
  s21_sprintf(str1, "num = %-+ #.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_103) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 0.10g.", n);
  s21_sprintf(str1, "num = %-+ 0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_104) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #.10g.", n);
  s21_sprintf(str1, "num = %-+ 0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_105) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #0.10g.", n);
  s21_sprintf(str1, "num = %+ #0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_106) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #0.10g.", n);
  s21_sprintf(str1, "num = %+ #0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_107) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #0.10g.", n);
  s21_sprintf(str1, "num = %-+ #0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_g_108) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #0.10g.", n);
  s21_sprintf(str1, "num = %-+ #0.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with wifth */

START_TEST(test_s21_sprintf_g_109) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %10g.", n);
  s21_sprintf(str1, "num = %10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_110) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %10g.", n);
  s21_sprintf(str1, "num = %10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_111) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %*g.", 10, n);
  s21_sprintf(str1, "num = %*g.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_112) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %*g.", 10, n);
  s21_sprintf(str1, "num = %*g.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with wifth anf flags */

START_TEST(test_s21_sprintf_g_113) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-15g.", n);
  s21_sprintf(str1, "num = %-15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_114) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-15g.", n);
  s21_sprintf(str1, "num = %-15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_115) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+15g.", n);
  s21_sprintf(str1, "num = %+15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_116) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+15g.", n);
  s21_sprintf(str1, "num = %+15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_117) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 15g.", n);
  s21_sprintf(str1, "num = % 15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_118) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 15g.", n);
  s21_sprintf(str1, "num = % 15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_119) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#15g.", n);
  s21_sprintf(str1, "num = %#15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_120) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %#15g.", n);
  s21_sprintf(str1, "num = %#15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_121) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %015g.", n);
  s21_sprintf(str1, "num = %015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_122) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %015g.", n);
  s21_sprintf(str1, "num = %015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_123) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+15g.", n);
  s21_sprintf(str1, "num = %-+15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_124) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+15g.", n);
  s21_sprintf(str1, "num = %-+15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_125) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %- 15g.", n);
  s21_sprintf(str1, "num = %- 15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_126) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %- 15g.", n);
  s21_sprintf(str1, "num = %- 15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_127) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-#15g.", n);
  s21_sprintf(str1, "num = %-#15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_128) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-#15g.", n);
  s21_sprintf(str1, "num = %-#15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_129) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-015g.", n);
  s21_sprintf(str1, "num = %-015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_130) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-015g.", n);
  s21_sprintf(str1, "num = %-015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_131) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 15g.", n);
  s21_sprintf(str1, "num = %+ 15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_132) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 15g.", n);
  s21_sprintf(str1, "num = %+ 15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_133) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+#15g.", n);
  s21_sprintf(str1, "num = %+#15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_134) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+#15g.", n);
  s21_sprintf(str1, "num = %+#15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_135) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 15g.", n);
  s21_sprintf(str1, "num = %+ 15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_136) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+015g.", n);
  s21_sprintf(str1, "num = %+015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_137) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #15g.", n);
  s21_sprintf(str1, "num = % #15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_138) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #15g.", n);
  s21_sprintf(str1, "num = % #15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_139) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 015g.", n);
  s21_sprintf(str1, "num = % 015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_140) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 015g.", n);
  s21_sprintf(str1, "num = % 015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_141) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#015g.", n);
  s21_sprintf(str1, "num = %#015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_142) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0#15g.", n);
  s21_sprintf(str1, "num = %0#15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_g_143) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 15g.", n);
  s21_sprintf(str1, "num = %-+ 15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_144) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ 15g.", n);
  s21_sprintf(str1, "num = %-+ 15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_145) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+#15g.", n);
  s21_sprintf(str1, "num = %-+#15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_146) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+#15g.", n);
  s21_sprintf(str1, "num = %-+#15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_147) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+015g.", n);
  s21_sprintf(str1, "num = %-+015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_148) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+015g.", n);
  s21_sprintf(str1, "num = %-+015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_149) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #15g.", n);
  s21_sprintf(str1, "num = %+ #15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_150) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #15g.", n);
  s21_sprintf(str1, "num = %+ #15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_151) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 015g.", n);
  s21_sprintf(str1, "num = %+ 015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_152) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 015g.", n);
  s21_sprintf(str1, "num = %+ 015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_153) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #015g.", n);
  s21_sprintf(str1, "num = % #015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_154) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #015g.", n);
  s21_sprintf(str1, "num = % #015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_g_155) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #15g.", n);
  s21_sprintf(str1, "num = %-+ #15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_156) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #15g.", n);
  s21_sprintf(str1, "num = %-+ #15g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_157) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 015g.", n);
  s21_sprintf(str1, "num = %-+ 015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_158) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #15g.", n);
  s21_sprintf(str1, "num = %-+ 015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_159) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #015g.", n);
  s21_sprintf(str1, "num = %+ #015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_160) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #015g.", n);
  s21_sprintf(str1, "num = %+ #015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_161) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #015g.", n);
  s21_sprintf(str1, "num = %-+ #015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_g_162) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #015g.", n);
  s21_sprintf(str1, "num = %-+ #015g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with precision anf wifth */

START_TEST(test_s21_sprintf_g_163) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %10.10g.", n);
  s21_sprintf(str1, "num = %10.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_164) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %10.10g.", n);
  s21_sprintf(str1, "num = %10.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_165) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %5.10g.", n);
  s21_sprintf(str1, "num = %5.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_166) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %5.10g.", n);
  s21_sprintf(str1, "num = %5.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_167) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %10.5g.", n);
  s21_sprintf(str1, "num = %10.5g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_168) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %10.5g.", n);
  s21_sprintf(str1, "num = %10.5g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier f with precision, wifth anf flags */

START_TEST(test_s21_sprintf_g_169) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-15.10g.", n);
  s21_sprintf(str1, "num = %-15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_170) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-15.10g.", n);
  s21_sprintf(str1, "num = %-15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_171) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+15.10g.", n);
  s21_sprintf(str1, "num = %+15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_172) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+15.10g.", n);
  s21_sprintf(str1, "num = %+15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_173) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 15.10g.", n);
  s21_sprintf(str1, "num = % 15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_174) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 15.10g.", n);
  s21_sprintf(str1, "num = % 15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_175) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#15.10g.", n);
  s21_sprintf(str1, "num = %#15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_176) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %#15.10g.", n);
  s21_sprintf(str1, "num = %#15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_177) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %015.10g.", n);
  s21_sprintf(str1, "num = %015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_178) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %015.10g.", n);
  s21_sprintf(str1, "num = %015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_179) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+15.10g.", n);
  s21_sprintf(str1, "num = %-+15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_180) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+15.10g.", n);
  s21_sprintf(str1, "num = %-+15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_181) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %- 15.10g.", n);
  s21_sprintf(str1, "num = %- 15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_182) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %- 15.10g.", n);
  s21_sprintf(str1, "num = %- 15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_183) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-#15.10g.", n);
  s21_sprintf(str1, "num = %-#15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_184) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-#15.10g.", n);
  s21_sprintf(str1, "num = %-#15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_185) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-015.10g.", n);
  s21_sprintf(str1, "num = %-015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_186) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-015.10g.", n);
  s21_sprintf(str1, "num = %-015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_187) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 15.10g.", n);
  s21_sprintf(str1, "num = %+ 15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_188) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 15.10g.", n);
  s21_sprintf(str1, "num = %+ 15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_189) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+#15.10g.", n);
  s21_sprintf(str1, "num = %+#15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_190) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+#15.10g.", n);
  s21_sprintf(str1, "num = %+#15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_191) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 15.10g.", n);
  s21_sprintf(str1, "num = %+ 15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_192) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+015.10g.", n);
  s21_sprintf(str1, "num = %+015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_193) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #15.10g.", n);
  s21_sprintf(str1, "num = % #15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_194) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #15.10g.", n);
  s21_sprintf(str1, "num = % #15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_195) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % 015.10g.", n);
  s21_sprintf(str1, "num = % 015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_196) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % 015.10g.", n);
  s21_sprintf(str1, "num = % 015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_197) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %#015.10g.", n);
  s21_sprintf(str1, "num = %#015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_198) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %0#15.10g.", n);
  s21_sprintf(str1, "num = %0#15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_g_199) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 15.10g.", n);
  s21_sprintf(str1, "num = %-+ 15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_200) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ 15.10g.", n);
  s21_sprintf(str1, "num = %-+ 15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_201) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+#15.10g.", n);
  s21_sprintf(str1, "num = %-+#15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_202) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+#15.10g.", n);
  s21_sprintf(str1, "num = %-+#15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_203) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+015.10g.", n);
  s21_sprintf(str1, "num = %-+015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_204) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+015.10g.", n);
  s21_sprintf(str1, "num = %-+015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_205) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #15.10g.", n);
  s21_sprintf(str1, "num = %+ #15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_206) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #15.10g.", n);
  s21_sprintf(str1, "num = %+ #15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_207) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ 015.10g.", n);
  s21_sprintf(str1, "num = %+ 015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_208) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ 015.10g.", n);
  s21_sprintf(str1, "num = %+ 015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_209) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = % #015.10g.", n);
  s21_sprintf(str1, "num = % #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_210) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = % #015.10g.", n);
  s21_sprintf(str1, "num = % #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

// /* 4 flags */

START_TEST(test_s21_sprintf_g_211) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #15.10g.", n);
  s21_sprintf(str1, "num = %-+ #15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_212) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #15.10g.", n);
  s21_sprintf(str1, "num = %-+ #15.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_213) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ 015.10g.", n);
  s21_sprintf(str1, "num = %-+ 015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_214) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #15.10g.", n);
  s21_sprintf(str1, "num = %-+ 015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_215) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %+ #015.10g.", n);
  s21_sprintf(str1, "num = %+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_216) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %+ #015.10g.", n);
  s21_sprintf(str1, "num = %+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_g_217) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e+38F;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_218) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 1.175494351e-38F;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier g with length */

START_TEST(test_s21_sprintf_g_219) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long double n = 2147483647;

  sprintf(str, "num = %-+ #015.10Lg.", n);
  s21_sprintf(str1, "num = %-+ #015.10Lg.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_220) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long double n = 2.2204460492503131e-016;

  sprintf(str, "num = %-+ #015.10Lg.", n);
  s21_sprintf(str1, "num = %-+ #015.10Lg.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_221) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long double n = -214748364;

  sprintf(str, "num = %-+ #015.10Lg.", n);
  s21_sprintf(str1, "num = %-+ #015.10Lg.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_222) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long double n = 2.2250738585072014e-308;

  sprintf(str, "num = %-+ #015.10Lg.", n);
  s21_sprintf(str1, "num = %-+ #015.10Lg.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_223) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 214;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_224) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  double n = -214;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_225) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long double n = 214;

  sprintf(str, "num = %-+ #015.10Lg.", n);
  s21_sprintf(str1, "num = %-+ #015.10Lg.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_226) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long double n = 2.2204460492503131e-016;

  sprintf(str, "num = %-+ #015.10Lg.", n);
  s21_sprintf(str1, "num = %-+ #015.10Lg.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_227) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  double n = -214;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_228) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  double n = 4294967295;

  sprintf(str, "num = %-+ #015.10Lg.", n);
  s21_sprintf(str1, "num = %-+ #015.10Lg.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_229) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long double n = 2.2250738585072014e-308;

  sprintf(str, "num = %-+ #015.10Lg.", n);
  s21_sprintf(str1, "num = %-+ #015.10Lg.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_230) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 2147483647;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_231) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = -214748364;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_232) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 072;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_233) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = -072;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_234) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 072;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_235) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = -072;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_236) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 0xb72;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_237) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = -0xb72;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_238) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 0xb72;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_239) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = -0xb72;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_240) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  double n = 2147483647;

  sprintf(str, "num = %-+ #015.10G.", n);
  s21_sprintf(str1, "num = %-+ #015.10G.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_241) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long double n = 2.220e-016;

  sprintf(str, "num = %-+ #015.10G.", n);
  s21_sprintf(str1, "num = %-+ #015.10G.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_242) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  double n = -2147483648;

  sprintf(str, "num = %-+ #015.10G.", n);
  s21_sprintf(str1, "num = %-+ #015.10G.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_243) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long double n = 2.22720e-308;

  sprintf(str, "num = %-+ #015.10G.", n);
  s21_sprintf(str1, "num = %-+ #015.10G.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_244) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 214;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_245) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  double n = -214;

  sprintf(str, "num = %-+ #015.10g.", n);
  s21_sprintf(str1, "num = %-+ #015.10g.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_246) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  float n = 214;

  sprintf(str, "num = %-+ #015.10hLg.", n);
  s21_sprintf(str1, "num = %-+ #015.10hLg.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_247) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long double n = 2.2204460492503131e-016;

  sprintf(str, "num = %-+ #015.10Lg.", n);
  s21_sprintf(str1, "num = %-+ #015.10Lg.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_248) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  double n = -214;

  sprintf(str, "num = %-+ #015.10lg.", n);
  s21_sprintf(str1, "num = %-+ #015.10lg.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_249) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  double n = 4294967295;

  sprintf(str, "num = %-+ #015.10Lg.", n);
  s21_sprintf(str1, "num = %-+ #015.10Lg.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_g_250) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long double n = 2.2250738585072014e-308;

  sprintf(str, "num = %-+ #015.10Lg.", n);
  s21_sprintf(str1, "num = %-+ #015.10Lg.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

Suite *s21_sprintf_g_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_sprintf_g");

  /* Core test case */
  tc_core = tcase_create("sprintf_test");

  tcase_add_test(tc_core, test_s21_sprintf_g_2);
  tcase_add_test(tc_core, test_s21_sprintf_g_3);
  tcase_add_test(tc_core, test_s21_sprintf_g_4);
  tcase_add_test(tc_core, test_s21_sprintf_g_5);
  tcase_add_test(tc_core, test_s21_sprintf_g_6);
  tcase_add_test(tc_core, test_s21_sprintf_g_7);
  tcase_add_test(tc_core, test_s21_sprintf_g_8);
  tcase_add_test(tc_core, test_s21_sprintf_g_9);
  tcase_add_test(tc_core, test_s21_sprintf_g_10);
  tcase_add_test(tc_core, test_s21_sprintf_g_11);
  tcase_add_test(tc_core, test_s21_sprintf_g_12);
  tcase_add_test(tc_core, test_s21_sprintf_g_13);
  tcase_add_test(tc_core, test_s21_sprintf_g_14);
  tcase_add_test(tc_core, test_s21_sprintf_g_15);
  tcase_add_test(tc_core, test_s21_sprintf_g_16);
  tcase_add_test(tc_core, test_s21_sprintf_g_17);
  tcase_add_test(tc_core, test_s21_sprintf_g_18);
  tcase_add_test(tc_core, test_s21_sprintf_g_19);
  tcase_add_test(tc_core, test_s21_sprintf_g_20);
  tcase_add_test(tc_core, test_s21_sprintf_g_21);
  tcase_add_test(tc_core, test_s21_sprintf_g_22);
  tcase_add_test(tc_core, test_s21_sprintf_g_23);
  tcase_add_test(tc_core, test_s21_sprintf_g_24);
  tcase_add_test(tc_core, test_s21_sprintf_g_25);
  tcase_add_test(tc_core, test_s21_sprintf_g_26);
  tcase_add_test(tc_core, test_s21_sprintf_g_27);
  tcase_add_test(tc_core, test_s21_sprintf_g_28);
  tcase_add_test(tc_core, test_s21_sprintf_g_29);
  tcase_add_test(tc_core, test_s21_sprintf_g_30);
  tcase_add_test(tc_core, test_s21_sprintf_g_31);
  tcase_add_test(tc_core, test_s21_sprintf_g_32);
  tcase_add_test(tc_core, test_s21_sprintf_g_33);
  tcase_add_test(tc_core, test_s21_sprintf_g_34);
  tcase_add_test(tc_core, test_s21_sprintf_g_35);
  tcase_add_test(tc_core, test_s21_sprintf_g_36);
  tcase_add_test(tc_core, test_s21_sprintf_g_37);
  tcase_add_test(tc_core, test_s21_sprintf_g_38);
  tcase_add_test(tc_core, test_s21_sprintf_g_39);
  tcase_add_test(tc_core, test_s21_sprintf_g_40);
  tcase_add_test(tc_core, test_s21_sprintf_g_41);
  tcase_add_test(tc_core, test_s21_sprintf_g_42);
  tcase_add_test(tc_core, test_s21_sprintf_g_43);
  tcase_add_test(tc_core, test_s21_sprintf_g_44);
  tcase_add_test(tc_core, test_s21_sprintf_g_45);
  tcase_add_test(tc_core, test_s21_sprintf_g_46);
  tcase_add_test(tc_core, test_s21_sprintf_g_47);
  tcase_add_test(tc_core, test_s21_sprintf_g_48);
  tcase_add_test(tc_core, test_s21_sprintf_g_49);
  tcase_add_test(tc_core, test_s21_sprintf_g_50);
  tcase_add_test(tc_core, test_s21_sprintf_g_51);
  tcase_add_test(tc_core, test_s21_sprintf_g_52);
  tcase_add_test(tc_core, test_s21_sprintf_g_53);
  tcase_add_test(tc_core, test_s21_sprintf_g_54);
  tcase_add_test(tc_core, test_s21_sprintf_g_55);
  tcase_add_test(tc_core, test_s21_sprintf_g_56);
  tcase_add_test(tc_core, test_s21_sprintf_g_57);
  tcase_add_test(tc_core, test_s21_sprintf_g_58);
  tcase_add_test(tc_core, test_s21_sprintf_g_60);
  tcase_add_test(tc_core, test_s21_sprintf_g_61);
  tcase_add_test(tc_core, test_s21_sprintf_g_62);
  tcase_add_test(tc_core, test_s21_sprintf_g_63);
  tcase_add_test(tc_core, test_s21_sprintf_g_64);
  tcase_add_test(tc_core, test_s21_sprintf_g_65);
  tcase_add_test(tc_core, test_s21_sprintf_g_66);
  tcase_add_test(tc_core, test_s21_sprintf_g_67);
  tcase_add_test(tc_core, test_s21_sprintf_g_68);
  tcase_add_test(tc_core, test_s21_sprintf_g_69);
  tcase_add_test(tc_core, test_s21_sprintf_g_70);
  tcase_add_test(tc_core, test_s21_sprintf_g_71);
  tcase_add_test(tc_core, test_s21_sprintf_g_72);
  tcase_add_test(tc_core, test_s21_sprintf_g_73);
  tcase_add_test(tc_core, test_s21_sprintf_g_74);
  tcase_add_test(tc_core, test_s21_sprintf_g_75);
  tcase_add_test(tc_core, test_s21_sprintf_g_76);
  tcase_add_test(tc_core, test_s21_sprintf_g_77);
  tcase_add_test(tc_core, test_s21_sprintf_g_78);
  tcase_add_test(tc_core, test_s21_sprintf_g_79);
  tcase_add_test(tc_core, test_s21_sprintf_g_80);
  tcase_add_test(tc_core, test_s21_sprintf_g_81);
  tcase_add_test(tc_core, test_s21_sprintf_g_82);
  tcase_add_test(tc_core, test_s21_sprintf_g_83);
  tcase_add_test(tc_core, test_s21_sprintf_g_84);
  tcase_add_test(tc_core, test_s21_sprintf_g_85);
  tcase_add_test(tc_core, test_s21_sprintf_g_86);
  tcase_add_test(tc_core, test_s21_sprintf_g_87);
  tcase_add_test(tc_core, test_s21_sprintf_g_88);
  tcase_add_test(tc_core, test_s21_sprintf_g_89);
  tcase_add_test(tc_core, test_s21_sprintf_g_90);
  tcase_add_test(tc_core, test_s21_sprintf_g_100);
  tcase_add_test(tc_core, test_s21_sprintf_g_101);
  tcase_add_test(tc_core, test_s21_sprintf_g_102);
  tcase_add_test(tc_core, test_s21_sprintf_g_103);
  tcase_add_test(tc_core, test_s21_sprintf_g_104);
  tcase_add_test(tc_core, test_s21_sprintf_g_105);
  tcase_add_test(tc_core, test_s21_sprintf_g_106);
  tcase_add_test(tc_core, test_s21_sprintf_g_107);
  tcase_add_test(tc_core, test_s21_sprintf_g_108);
  tcase_add_test(tc_core, test_s21_sprintf_g_109);
  tcase_add_test(tc_core, test_s21_sprintf_g_110);
  tcase_add_test(tc_core, test_s21_sprintf_g_111);
  tcase_add_test(tc_core, test_s21_sprintf_g_112);
  tcase_add_test(tc_core, test_s21_sprintf_g_113);
  tcase_add_test(tc_core, test_s21_sprintf_g_114);
  tcase_add_test(tc_core, test_s21_sprintf_g_115);
  tcase_add_test(tc_core, test_s21_sprintf_g_116);
  tcase_add_test(tc_core, test_s21_sprintf_g_117);
  tcase_add_test(tc_core, test_s21_sprintf_g_118);
  tcase_add_test(tc_core, test_s21_sprintf_g_119);
  tcase_add_test(tc_core, test_s21_sprintf_g_120);
  tcase_add_test(tc_core, test_s21_sprintf_g_121);
  tcase_add_test(tc_core, test_s21_sprintf_g_122);
  tcase_add_test(tc_core, test_s21_sprintf_g_123);
  tcase_add_test(tc_core, test_s21_sprintf_g_124);
  tcase_add_test(tc_core, test_s21_sprintf_g_125);
  tcase_add_test(tc_core, test_s21_sprintf_g_126);
  tcase_add_test(tc_core, test_s21_sprintf_g_127);
  tcase_add_test(tc_core, test_s21_sprintf_g_128);
  tcase_add_test(tc_core, test_s21_sprintf_g_129);
  tcase_add_test(tc_core, test_s21_sprintf_g_130);
  tcase_add_test(tc_core, test_s21_sprintf_g_131);
  tcase_add_test(tc_core, test_s21_sprintf_g_132);
  tcase_add_test(tc_core, test_s21_sprintf_g_133);
  tcase_add_test(tc_core, test_s21_sprintf_g_134);
  tcase_add_test(tc_core, test_s21_sprintf_g_135);
  tcase_add_test(tc_core, test_s21_sprintf_g_136);
  tcase_add_test(tc_core, test_s21_sprintf_g_137);
  tcase_add_test(tc_core, test_s21_sprintf_g_138);
  tcase_add_test(tc_core, test_s21_sprintf_g_139);
  tcase_add_test(tc_core, test_s21_sprintf_g_140);
  tcase_add_test(tc_core, test_s21_sprintf_g_141);
  tcase_add_test(tc_core, test_s21_sprintf_g_142);
  tcase_add_test(tc_core, test_s21_sprintf_g_143);
  tcase_add_test(tc_core, test_s21_sprintf_g_144);
  tcase_add_test(tc_core, test_s21_sprintf_g_145);
  tcase_add_test(tc_core, test_s21_sprintf_g_146);
  tcase_add_test(tc_core, test_s21_sprintf_g_147);
  tcase_add_test(tc_core, test_s21_sprintf_g_148);
  tcase_add_test(tc_core, test_s21_sprintf_g_149);
  tcase_add_test(tc_core, test_s21_sprintf_g_150);
  tcase_add_test(tc_core, test_s21_sprintf_g_151);
  tcase_add_test(tc_core, test_s21_sprintf_g_152);
  tcase_add_test(tc_core, test_s21_sprintf_g_153);
  tcase_add_test(tc_core, test_s21_sprintf_g_154);
  tcase_add_test(tc_core, test_s21_sprintf_g_155);
  tcase_add_test(tc_core, test_s21_sprintf_g_156);
  tcase_add_test(tc_core, test_s21_sprintf_g_157);
  tcase_add_test(tc_core, test_s21_sprintf_g_158);
  tcase_add_test(tc_core, test_s21_sprintf_g_159);
  tcase_add_test(tc_core, test_s21_sprintf_g_160);
  tcase_add_test(tc_core, test_s21_sprintf_g_161);
  tcase_add_test(tc_core, test_s21_sprintf_g_162);
  tcase_add_test(tc_core, test_s21_sprintf_g_163);
  tcase_add_test(tc_core, test_s21_sprintf_g_164);
  tcase_add_test(tc_core, test_s21_sprintf_g_165);
  tcase_add_test(tc_core, test_s21_sprintf_g_166);
  tcase_add_test(tc_core, test_s21_sprintf_g_167);
  tcase_add_test(tc_core, test_s21_sprintf_g_168);
  tcase_add_test(tc_core, test_s21_sprintf_g_169);
  tcase_add_test(tc_core, test_s21_sprintf_g_170);
  tcase_add_test(tc_core, test_s21_sprintf_g_171);
  tcase_add_test(tc_core, test_s21_sprintf_g_172);
  tcase_add_test(tc_core, test_s21_sprintf_g_173);
  tcase_add_test(tc_core, test_s21_sprintf_g_174);
  tcase_add_test(tc_core, test_s21_sprintf_g_175);
  tcase_add_test(tc_core, test_s21_sprintf_g_176);
  tcase_add_test(tc_core, test_s21_sprintf_g_177);
  tcase_add_test(tc_core, test_s21_sprintf_g_178);
  tcase_add_test(tc_core, test_s21_sprintf_g_179);
  tcase_add_test(tc_core, test_s21_sprintf_g_180);
  tcase_add_test(tc_core, test_s21_sprintf_g_181);
  tcase_add_test(tc_core, test_s21_sprintf_g_182);
  tcase_add_test(tc_core, test_s21_sprintf_g_183);
  tcase_add_test(tc_core, test_s21_sprintf_g_184);
  tcase_add_test(tc_core, test_s21_sprintf_g_185);
  tcase_add_test(tc_core, test_s21_sprintf_g_186);
  tcase_add_test(tc_core, test_s21_sprintf_g_187);
  tcase_add_test(tc_core, test_s21_sprintf_g_188);
  tcase_add_test(tc_core, test_s21_sprintf_g_189);
  tcase_add_test(tc_core, test_s21_sprintf_g_190);
  tcase_add_test(tc_core, test_s21_sprintf_g_191);
  tcase_add_test(tc_core, test_s21_sprintf_g_192);
  tcase_add_test(tc_core, test_s21_sprintf_g_193);
  tcase_add_test(tc_core, test_s21_sprintf_g_194);
  tcase_add_test(tc_core, test_s21_sprintf_g_195);
  tcase_add_test(tc_core, test_s21_sprintf_g_196);
  tcase_add_test(tc_core, test_s21_sprintf_g_197);
  tcase_add_test(tc_core, test_s21_sprintf_g_198);
  tcase_add_test(tc_core, test_s21_sprintf_g_199);
  tcase_add_test(tc_core, test_s21_sprintf_g_200);
  tcase_add_test(tc_core, test_s21_sprintf_g_201);
  tcase_add_test(tc_core, test_s21_sprintf_g_202);
  tcase_add_test(tc_core, test_s21_sprintf_g_203);
  tcase_add_test(tc_core, test_s21_sprintf_g_204);
  tcase_add_test(tc_core, test_s21_sprintf_g_205);
  tcase_add_test(tc_core, test_s21_sprintf_g_206);
  tcase_add_test(tc_core, test_s21_sprintf_g_207);
  tcase_add_test(tc_core, test_s21_sprintf_g_208);
  tcase_add_test(tc_core, test_s21_sprintf_g_209);
  tcase_add_test(tc_core, test_s21_sprintf_g_210);
  tcase_add_test(tc_core, test_s21_sprintf_g_211);
  tcase_add_test(tc_core, test_s21_sprintf_g_212);
  tcase_add_test(tc_core, test_s21_sprintf_g_213);
  tcase_add_test(tc_core, test_s21_sprintf_g_214);
  tcase_add_test(tc_core, test_s21_sprintf_g_215);
  tcase_add_test(tc_core, test_s21_sprintf_g_216);
  tcase_add_test(tc_core, test_s21_sprintf_g_217);
  tcase_add_test(tc_core, test_s21_sprintf_g_218);
  tcase_add_test(tc_core, test_s21_sprintf_g_220);
  tcase_add_test(tc_core, test_s21_sprintf_g_222);
  tcase_add_test(tc_core, test_s21_sprintf_g_223);
  tcase_add_test(tc_core, test_s21_sprintf_g_225);
  tcase_add_test(tc_core, test_s21_sprintf_g_226);
  tcase_add_test(tc_core, test_s21_sprintf_g_229);
  tcase_add_test(tc_core, test_s21_sprintf_g_232);
  tcase_add_test(tc_core, test_s21_sprintf_g_234);
  tcase_add_test(tc_core, test_s21_sprintf_g_236);
  tcase_add_test(tc_core, test_s21_sprintf_g_238);
  tcase_add_test(tc_core, test_s21_sprintf_g_244);
  tcase_add_test(tc_core, test_s21_sprintf_g_247);
  tcase_add_test(tc_core, test_s21_sprintf_g_250);

  suite_add_tcase(s, tc_core);

  return s;
}
