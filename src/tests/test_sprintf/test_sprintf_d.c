#include <stdio.h>

#include "./test_sprintf.h"
/* specifier d */

START_TEST(test_s21_sprintf_d_1) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  short int n = 1;
  sprintf(str, "num = %d/.", n);
  s21_sprintf(str1, "num = %d/.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_2) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long int n = 2147483647;
  sprintf(str, "num = %d.", n);
  s21_sprintf(str1, "num = %d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_3) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %d.", n);
  s21_sprintf(str1, "num = %d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_4) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %d.", n);
  s21_sprintf(str1, "num = %d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier d with one flag */

START_TEST(test_s21_sprintf_d_5) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-d.", n);
  s21_sprintf(str1, "num = %-d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_6) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-d.", n);
  s21_sprintf(str1, "num = %-d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_7) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+d.", n);
  s21_sprintf(str1, "num = %+d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_8) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+d.", n);
  s21_sprintf(str1, "num = %+d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_9) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = % d.", n);
  s21_sprintf(str1, "num = % d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_10) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = % d.", n);
  s21_sprintf(str1, "num = % d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_11) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %#d.", n);
  s21_sprintf(str1, "num = %#d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_12) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %#d.", n);
  s21_sprintf(str1, "num = %#d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_13) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %0d.", n);
  s21_sprintf(str1, "num = %0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_14) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %0d.", n);
  s21_sprintf(str1, "num = %0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier d with some flags */
/* 2 flags */

START_TEST(test_s21_sprintf_d_15) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+d.", n);
  s21_sprintf(str1, "num = %-+d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_16) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+d.", n);
  s21_sprintf(str1, "num = %-+d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_17) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %- d.", n);
  s21_sprintf(str1, "num = %- d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_18) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %- d.", n);
  s21_sprintf(str1, "num = %- d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_19) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-#d.", n);
  s21_sprintf(str1, "num = %-#d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_20) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-#d.", n);
  s21_sprintf(str1, "num = %-#d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_21) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-0d.", n);
  s21_sprintf(str1, "num = %-0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_22) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-0d.", n);
  s21_sprintf(str1, "num = %-0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_23) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ d.", n);
  s21_sprintf(str1, "num = %+ d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_24) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+ d.", n);
  s21_sprintf(str1, "num = %+ d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_25) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+#d.", n);
  s21_sprintf(str1, "num = %+#d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_26) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+#d.", n);
  s21_sprintf(str1, "num = %+#d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_27) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ d.", n);
  s21_sprintf(str1, "num = %+ d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_28) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+0d.", n);
  s21_sprintf(str1, "num = %+0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_29) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = % #d.", n);
  s21_sprintf(str1, "num = % #d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_30) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = % #d.", n);
  s21_sprintf(str1, "num = % #d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_31) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = % 0d.", n);
  s21_sprintf(str1, "num = % 0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_32) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = % 0d.", n);
  s21_sprintf(str1, "num = % 0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_33) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %#0d.", n);
  s21_sprintf(str1, "num = %#0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_34) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %0#d.", n);
  s21_sprintf(str1, "num = %0#d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_d_35) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+ d.", n);
  s21_sprintf(str1, "num = %-+ d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_36) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+ d.", n);
  s21_sprintf(str1, "num = %-+ d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_37) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+#d.", n);
  s21_sprintf(str1, "num = %-+#d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_38) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+#d.", n);
  s21_sprintf(str1, "num = %-+#d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_39) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+0d.", n);
  s21_sprintf(str1, "num = %-+0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_40) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+0d.", n);
  s21_sprintf(str1, "num = %-+0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_41) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ #d.", n);
  s21_sprintf(str1, "num = %+ #d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_42) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+ #d.", n);
  s21_sprintf(str1, "num = %+ #d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_43) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ 0d.", n);
  s21_sprintf(str1, "num = %+ 0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_44) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+ 0d.", n);
  s21_sprintf(str1, "num = %+ 0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_45) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = % #0d.", n);
  s21_sprintf(str1, "num = % #0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_46) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = % #0d.", n);
  s21_sprintf(str1, "num = % #0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_d_47) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+ #d.", n);
  s21_sprintf(str1, "num = %-+ #d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_48) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+ #d.", n);
  s21_sprintf(str1, "num = %-+ #d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_49) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+ 0d.", n);
  s21_sprintf(str1, "num = %-+ 0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_50) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+ #d.", n);
  s21_sprintf(str1, "num = %-+ 0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_51) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ #0d.", n);
  s21_sprintf(str1, "num = %+ #0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_52) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+ #0d.", n);
  s21_sprintf(str1, "num = %+ #0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_53) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+ #0d.", n);
  s21_sprintf(str1, "num = %-+ #0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_d_54) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+ #0d.", n);
  s21_sprintf(str1, "num = %-+ #0d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier d with precision */

START_TEST(test_s21_sprintf_d_55) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %.10d.", n);
  s21_sprintf(str1, "num = %.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_56) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %.10d.", n);
  s21_sprintf(str1, "num = %.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_57) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %.*d.", 10, n);
  s21_sprintf(str1, "num = %.*d.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_58) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %.*d.", 10, n);
  s21_sprintf(str1, "num = %.*d.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier d with precision and flags */

START_TEST(test_s21_sprintf_d_59) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-.10d.", n);
  s21_sprintf(str1, "num = %-.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_60) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-.10d.", n);
  s21_sprintf(str1, "num = %-.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_61) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+.10d.", n);
  s21_sprintf(str1, "num = %+.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_62) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+.10d.", n);
  s21_sprintf(str1, "num = %+.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_63) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = % .10d.", n);
  s21_sprintf(str1, "num = % .10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_64) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = % .10d.", n);
  s21_sprintf(str1, "num = % .10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_65) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %#.10d.", n);
  s21_sprintf(str1, "num = %#.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_66) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %#.10d.", n);
  s21_sprintf(str1, "num = %#.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_67) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %0.10d.", n);
  s21_sprintf(str1, "num = %0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_68) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %0.10d.", n);
  s21_sprintf(str1, "num = %0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_69) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+.10d.", n);
  s21_sprintf(str1, "num = %-+.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_70) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+.10d.", n);
  s21_sprintf(str1, "num = %-+.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_71) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %- .10d.", n);
  s21_sprintf(str1, "num = %- .10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_72) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %- .10d.", n);
  s21_sprintf(str1, "num = %- .10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_73) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-#.10d.", n);
  s21_sprintf(str1, "num = %-#.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_74) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-#.10d.", n);
  s21_sprintf(str1, "num = %-#.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_75) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-0.10d.", n);
  s21_sprintf(str1, "num = %-0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_76) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-0.10d.", n);
  s21_sprintf(str1, "num = %-0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_77) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ .10d.", n);
  s21_sprintf(str1, "num = %+ .10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_78) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+ .10d.", n);
  s21_sprintf(str1, "num = %+ .10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_79) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+#.10d.", n);
  s21_sprintf(str1, "num = %+#.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_80) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+#.10d.", n);
  s21_sprintf(str1, "num = %+#.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_81) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ .10d.", n);
  s21_sprintf(str1, "num = %+ .10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_82) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+0.10d.", n);
  s21_sprintf(str1, "num = %+0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_83) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = % #.10d.", n);
  s21_sprintf(str1, "num = % #.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_84) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = % #.10d.", n);
  s21_sprintf(str1, "num = % #.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_85) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = % 0.10d.", n);
  s21_sprintf(str1, "num = % 0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_86) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = % 0.10d.", n);
  s21_sprintf(str1, "num = % 0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_87) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %#0.10d.", n);
  s21_sprintf(str1, "num = %#0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_88) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %0#.10d.", n);
  s21_sprintf(str1, "num = %0#.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_d_89) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+ .10d.", n);
  s21_sprintf(str1, "num = %-+ .10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_90) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+ .10d.", n);
  s21_sprintf(str1, "num = %-+ .10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_91) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+#.10d.", n);
  s21_sprintf(str1, "num = %-+#.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_92) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+#.10d.", n);
  s21_sprintf(str1, "num = %-+#.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_93) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+0.10d.", n);
  s21_sprintf(str1, "num = %-+0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_94) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+0.10d.", n);
  s21_sprintf(str1, "num = %-+0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_95) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ #.10d.", n);
  s21_sprintf(str1, "num = %+ #.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_96) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+ #.10d.", n);
  s21_sprintf(str1, "num = %+ #.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_97) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ 0.10d.", n);
  s21_sprintf(str1, "num = %+ 0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_98) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+ 0.10d.", n);
  s21_sprintf(str1, "num = %+ 0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_99) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = % #0.10d.", n);
  s21_sprintf(str1, "num = % #0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_100) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = % #0.10d.", n);
  s21_sprintf(str1, "num = % #0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_d_101) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+ #.10d.", n);
  s21_sprintf(str1, "num = %-+ #.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_102) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+ #.10d.", n);
  s21_sprintf(str1, "num = %-+ #.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_103) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+ 0.10d.", n);
  s21_sprintf(str1, "num = %-+ 0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_104) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+ #.10d.", n);
  s21_sprintf(str1, "num = %-+ 0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_105) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ #0.10d.", n);
  s21_sprintf(str1, "num = %+ #0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_106) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+ #0.10d.", n);
  s21_sprintf(str1, "num = %+ #0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_107) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+ #0.10d.", n);
  s21_sprintf(str1, "num = %-+ #0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_d_108) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+ #0.10d.", n);
  s21_sprintf(str1, "num = %-+ #0.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier d with width */

START_TEST(test_s21_sprintf_d_109) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %10d.", n);
  s21_sprintf(str1, "num = %10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_110) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %10d.", n);
  s21_sprintf(str1, "num = %10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_111) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %*d.", 10, n);
  s21_sprintf(str1, "num = %*d.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_112) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %*d.", 10, n);
  s21_sprintf(str1, "num = %*d.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier d with width and flags */

START_TEST(test_s21_sprintf_d_113) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-15d.", n);
  s21_sprintf(str1, "num = %-15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_114) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-15d.", n);
  s21_sprintf(str1, "num = %-15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_115) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+15d.", n);
  s21_sprintf(str1, "num = %+15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_116) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+15d.", n);
  s21_sprintf(str1, "num = %+15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_117) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = % 15d.", n);
  s21_sprintf(str1, "num = % 15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_118) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = % 15d.", n);
  s21_sprintf(str1, "num = % 15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_119) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %#15d.", n);
  s21_sprintf(str1, "num = %#15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_120) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %#15d.", n);
  s21_sprintf(str1, "num = %#15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_121) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %015d.", n);
  s21_sprintf(str1, "num = %015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_122) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %015d.", n);
  s21_sprintf(str1, "num = %015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_123) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+15d.", n);
  s21_sprintf(str1, "num = %-+15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_124) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+15d.", n);
  s21_sprintf(str1, "num = %-+15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_125) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %- 15d.", n);
  s21_sprintf(str1, "num = %- 15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_126) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %- 15d.", n);
  s21_sprintf(str1, "num = %- 15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_127) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-#15d.", n);
  s21_sprintf(str1, "num = %-#15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_128) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-#15d.", n);
  s21_sprintf(str1, "num = %-#15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_129) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-015d.", n);
  s21_sprintf(str1, "num = %-015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_130) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-015d.", n);
  s21_sprintf(str1, "num = %-015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_131) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ 15d.", n);
  s21_sprintf(str1, "num = %+ 15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_132) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+ 15d.", n);
  s21_sprintf(str1, "num = %+ 15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_133) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+#15d.", n);
  s21_sprintf(str1, "num = %+#15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_134) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+#15d.", n);
  s21_sprintf(str1, "num = %+#15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_135) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ 15d.", n);
  s21_sprintf(str1, "num = %+ 15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_136) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+015d.", n);
  s21_sprintf(str1, "num = %+015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_137) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = % #15d.", n);
  s21_sprintf(str1, "num = % #15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_138) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = % #15d.", n);
  s21_sprintf(str1, "num = % #15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_139) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = % 015d.", n);
  s21_sprintf(str1, "num = % 015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_140) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = % 015d.", n);
  s21_sprintf(str1, "num = % 015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_141) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %#015d.", n);
  s21_sprintf(str1, "num = %#015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_142) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %0#15d.", n);
  s21_sprintf(str1, "num = %0#15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_d_143) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+ 15d.", n);
  s21_sprintf(str1, "num = %-+ 15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_144) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+ 15d.", n);
  s21_sprintf(str1, "num = %-+ 15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_145) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+#15d.", n);
  s21_sprintf(str1, "num = %-+#15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_146) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+#15d.", n);
  s21_sprintf(str1, "num = %-+#15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_147) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+015d.", n);
  s21_sprintf(str1, "num = %-+015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_148) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+015d.", n);
  s21_sprintf(str1, "num = %-+015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_149) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ #15d.", n);
  s21_sprintf(str1, "num = %+ #15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_150) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+ #15d.", n);
  s21_sprintf(str1, "num = %+ #15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_151) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ 015d.", n);
  s21_sprintf(str1, "num = %+ 015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_152) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+ 015d.", n);
  s21_sprintf(str1, "num = %+ 015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_153) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = % #015d.", n);
  s21_sprintf(str1, "num = % #015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_154) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = % #015d.", n);
  s21_sprintf(str1, "num = % #015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_d_155) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+ #15d.", n);
  s21_sprintf(str1, "num = %-+ #15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_156) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+ #15d.", n);
  s21_sprintf(str1, "num = %-+ #15d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_157) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+ 015d.", n);
  s21_sprintf(str1, "num = %-+ 015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_158) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+ #15d.", n);
  s21_sprintf(str1, "num = %-+ 015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_159) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ #015d.", n);
  s21_sprintf(str1, "num = %+ #015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_160) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+ #015d.", n);
  s21_sprintf(str1, "num = %+ #015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_161) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+ #015d.", n);
  s21_sprintf(str1, "num = %-+ #015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_d_162) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+ #015d.", n);
  s21_sprintf(str1, "num = %-+ #015d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier d with precision and width */

START_TEST(test_s21_sprintf_d_163) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %10.10d.", n);
  s21_sprintf(str1, "num = %10.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_164) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %10.10d.", n);
  s21_sprintf(str1, "num = %10.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_165) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %5.10d.", n);
  s21_sprintf(str1, "num = %5.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_166) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %5.10d.", n);
  s21_sprintf(str1, "num = %5.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_167) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %10.5d.", n);
  s21_sprintf(str1, "num = %10.5d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_168) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %10.5d.", n);
  s21_sprintf(str1, "num = %10.5d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier d with precision, width and flags */

START_TEST(test_s21_sprintf_d_169) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-15.10d.", n);
  s21_sprintf(str1, "num = %-15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_170) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-15.10d.", n);
  s21_sprintf(str1, "num = %-15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_171) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+15.10d.", n);
  s21_sprintf(str1, "num = %+15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_172) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+15.10d.", n);
  s21_sprintf(str1, "num = %+15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_173) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = % 15.10d.", n);
  s21_sprintf(str1, "num = % 15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_174) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = % 15.10d.", n);
  s21_sprintf(str1, "num = % 15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_175) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %#15.10d.", n);
  s21_sprintf(str1, "num = %#15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_176) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %#15.10d.", n);
  s21_sprintf(str1, "num = %#15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_177) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %015.10d.", n);
  s21_sprintf(str1, "num = %015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_178) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %015.10d.", n);
  s21_sprintf(str1, "num = %015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_179) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+15.10d.", n);
  s21_sprintf(str1, "num = %-+15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_180) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+15.10d.", n);
  s21_sprintf(str1, "num = %-+15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_181) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %- 15.10d.", n);
  s21_sprintf(str1, "num = %- 15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_182) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %- 15.10d.", n);
  s21_sprintf(str1, "num = %- 15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_183) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-#15.10d.", n);
  s21_sprintf(str1, "num = %-#15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_184) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-#15.10d.", n);
  s21_sprintf(str1, "num = %-#15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_185) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-015.10d.", n);
  s21_sprintf(str1, "num = %-015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_186) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-015.10d.", n);
  s21_sprintf(str1, "num = %-015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_187) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ 15.10d.", n);
  s21_sprintf(str1, "num = %+ 15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_188) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+ 15.10d.", n);
  s21_sprintf(str1, "num = %+ 15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_189) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+#15.10d.", n);
  s21_sprintf(str1, "num = %+#15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_190) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+#15.10d.", n);
  s21_sprintf(str1, "num = %+#15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_191) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ 15.10d.", n);
  s21_sprintf(str1, "num = %+ 15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_192) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+015.10d.", n);
  s21_sprintf(str1, "num = %+015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_193) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = % #15.10d.", n);
  s21_sprintf(str1, "num = % #15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_194) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = % #15.10d.", n);
  s21_sprintf(str1, "num = % #15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_195) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = % 015.10d.", n);
  s21_sprintf(str1, "num = % 015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_196) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = % 015.10d.", n);
  s21_sprintf(str1, "num = % 015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_197) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %#015.10d.", n);
  s21_sprintf(str1, "num = %#015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_198) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %0#15.10d.", n);
  s21_sprintf(str1, "num = %0#15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_d_199) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+ 15.10d.", n);
  s21_sprintf(str1, "num = %-+ 15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_200) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+ 15.10d.", n);
  s21_sprintf(str1, "num = %-+ 15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_201) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+#15.10d.", n);
  s21_sprintf(str1, "num = %-+#15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_202) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+#15.10d.", n);
  s21_sprintf(str1, "num = %-+#15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_203) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+015.10d.", n);
  s21_sprintf(str1, "num = %-+015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_204) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+015.10d.", n);
  s21_sprintf(str1, "num = %-+015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_205) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ #15.10d.", n);
  s21_sprintf(str1, "num = %+ #15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_206) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+ #15.10d.", n);
  s21_sprintf(str1, "num = %+ #15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_207) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ 015.10d.", n);
  s21_sprintf(str1, "num = %+ 015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_208) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+ 015.10d.", n);
  s21_sprintf(str1, "num = %+ 015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_209) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = % #015.10d.", n);
  s21_sprintf(str1, "num = % #015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_210) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = % #015.10d.", n);
  s21_sprintf(str1, "num = % #015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_d_211) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+ #15.10d.", n);
  s21_sprintf(str1, "num = %-+ #15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_212) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+ #15.10d.", n);
  s21_sprintf(str1, "num = %-+ #15.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_213) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+ 015.10d.", n);
  s21_sprintf(str1, "num = %-+ 015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_214) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+ #15.10d.", n);
  s21_sprintf(str1, "num = %-+ 015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_215) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %+ #015.10d.", n);
  s21_sprintf(str1, "num = %+ #015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_216) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %+ #015.10d.", n);
  s21_sprintf(str1, "num = %+ #015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_d_217) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 21474836;

  sprintf(str, "num = %-+ #015.10d.", n);
  s21_sprintf(str1, "num = %-+ #015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_218) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -21474836;

  sprintf(str, "num = %-+ #015.10d.", n);
  s21_sprintf(str1, "num = %-+ #015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier d with length */

START_TEST(test_s21_sprintf_d_219) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long int n = 2147483647;

  sprintf(str, "num = %-+ #015.10ld.", n);
  s21_sprintf(str1, "num = %-+ #015.10ld.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_220) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long int n = -2147483648;

  sprintf(str, "num = %-+ #015.10ld.", n);
  s21_sprintf(str1, "num = %-+ #015.10ld.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_221) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  short int n = 214;

  sprintf(str, "num = %-+ #015.10hd.", n);
  s21_sprintf(str1, "num = %-+ #015.10hd.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_222) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long int n = -214;

  sprintf(str, "num = %-+ #015.10hd.", n);
  s21_sprintf(str1, "num = %-+ #015.10hd.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_223) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  short int n = 214;

  sprintf(str, "num = %-+ #015.10hld.", n);
  s21_sprintf(str1, "num = %-+ #015.10hld.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_224) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long int n = -214;

  sprintf(str, "num = %-+ #015.10lhd.", n);
  s21_sprintf(str1, "num = %-+ #015.10lhd.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_225) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned long int n = 4294967295;

  sprintf(str, "num = %-+ #015.10ld.", n);
  s21_sprintf(str1, "num = %-+ #015.10ld.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_226) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 2147483647;

  sprintf(str, "num = %-+ #015.10hd.", n);
  s21_sprintf(str1, "num = %-+ #015.10hd.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_227) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -214748364;

  sprintf(str, "num = %-+ #015.10hd.", n);
  s21_sprintf(str1, "num = %-+ #015.10hd.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_228) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 072;

  sprintf(str, "num = %-+ #015.10d.", n);
  s21_sprintf(str1, "num = %-+ #015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_229) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -072;

  sprintf(str, "num = %-+ #015.10d.", n);
  s21_sprintf(str1, "num = %-+ #015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_230) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 072;

  sprintf(str, "num = %-+ #015.10hd.", n);
  s21_sprintf(str1, "num = %-+ #015.10hd.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_231) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -072;

  sprintf(str, "num = %-+ #015.10hd.", n);
  s21_sprintf(str1, "num = %-+ #015.10hd.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_232) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0xb72;

  sprintf(str, "num = %-+ #015.10d.", n);
  s21_sprintf(str1, "num = %-+ #015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_233) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0xb72;

  sprintf(str, "num = %-+ #015.10d.", n);
  s21_sprintf(str1, "num = %-+ #015.10d.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_234) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0xb72;

  sprintf(str, "num = %-+ #015.10hd.", n);
  s21_sprintf(str1, "num = %-+ #015.10hd.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_d_235) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0xb72;

  sprintf(str, "num = %-+ #015.10hd.", n);
  s21_sprintf(str1, "num = %-+ #015.10hd.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

Suite *s21_sprintf_d_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_sprintf_d");

  /* Core test case */
  tc_core = tcase_create("sprintf_test");

  tcase_add_test(tc_core, test_s21_sprintf_d_1);
  tcase_add_test(tc_core, test_s21_sprintf_d_2);
  tcase_add_test(tc_core, test_s21_sprintf_d_3);
  tcase_add_test(tc_core, test_s21_sprintf_d_4);
  tcase_add_test(tc_core, test_s21_sprintf_d_5);
  tcase_add_test(tc_core, test_s21_sprintf_d_6);
  tcase_add_test(tc_core, test_s21_sprintf_d_7);
  tcase_add_test(tc_core, test_s21_sprintf_d_8);
  tcase_add_test(tc_core, test_s21_sprintf_d_9);
  tcase_add_test(tc_core, test_s21_sprintf_d_10);
  tcase_add_test(tc_core, test_s21_sprintf_d_11);
  tcase_add_test(tc_core, test_s21_sprintf_d_12);
  tcase_add_test(tc_core, test_s21_sprintf_d_13);
  tcase_add_test(tc_core, test_s21_sprintf_d_14);
  tcase_add_test(tc_core, test_s21_sprintf_d_15);
  tcase_add_test(tc_core, test_s21_sprintf_d_16);
  tcase_add_test(tc_core, test_s21_sprintf_d_17);
  tcase_add_test(tc_core, test_s21_sprintf_d_18);
  tcase_add_test(tc_core, test_s21_sprintf_d_19);
  tcase_add_test(tc_core, test_s21_sprintf_d_20);
  tcase_add_test(tc_core, test_s21_sprintf_d_21);
  tcase_add_test(tc_core, test_s21_sprintf_d_22);
  tcase_add_test(tc_core, test_s21_sprintf_d_23);
  tcase_add_test(tc_core, test_s21_sprintf_d_24);
  tcase_add_test(tc_core, test_s21_sprintf_d_25);
  tcase_add_test(tc_core, test_s21_sprintf_d_26);
  tcase_add_test(tc_core, test_s21_sprintf_d_27);
  tcase_add_test(tc_core, test_s21_sprintf_d_28);
  tcase_add_test(tc_core, test_s21_sprintf_d_29);
  tcase_add_test(tc_core, test_s21_sprintf_d_30);
  tcase_add_test(tc_core, test_s21_sprintf_d_31);
  tcase_add_test(tc_core, test_s21_sprintf_d_32);
  tcase_add_test(tc_core, test_s21_sprintf_d_33);
  tcase_add_test(tc_core, test_s21_sprintf_d_34);
  tcase_add_test(tc_core, test_s21_sprintf_d_35);
  tcase_add_test(tc_core, test_s21_sprintf_d_36);
  tcase_add_test(tc_core, test_s21_sprintf_d_37);
  tcase_add_test(tc_core, test_s21_sprintf_d_38);
  tcase_add_test(tc_core, test_s21_sprintf_d_39);
  tcase_add_test(tc_core, test_s21_sprintf_d_40);
  tcase_add_test(tc_core, test_s21_sprintf_d_41);
  tcase_add_test(tc_core, test_s21_sprintf_d_42);
  tcase_add_test(tc_core, test_s21_sprintf_d_43);
  tcase_add_test(tc_core, test_s21_sprintf_d_44);
  tcase_add_test(tc_core, test_s21_sprintf_d_45);
  tcase_add_test(tc_core, test_s21_sprintf_d_46);
  tcase_add_test(tc_core, test_s21_sprintf_d_47);
  tcase_add_test(tc_core, test_s21_sprintf_d_48);
  tcase_add_test(tc_core, test_s21_sprintf_d_49);
  tcase_add_test(tc_core, test_s21_sprintf_d_50);
  tcase_add_test(tc_core, test_s21_sprintf_d_51);
  tcase_add_test(tc_core, test_s21_sprintf_d_52);
  tcase_add_test(tc_core, test_s21_sprintf_d_53);
  tcase_add_test(tc_core, test_s21_sprintf_d_54);
  tcase_add_test(tc_core, test_s21_sprintf_d_55);
  tcase_add_test(tc_core, test_s21_sprintf_d_56);
  tcase_add_test(tc_core, test_s21_sprintf_d_57);
  tcase_add_test(tc_core, test_s21_sprintf_d_58);
  tcase_add_test(tc_core, test_s21_sprintf_d_60);
  tcase_add_test(tc_core, test_s21_sprintf_d_61);
  tcase_add_test(tc_core, test_s21_sprintf_d_62);
  tcase_add_test(tc_core, test_s21_sprintf_d_63);
  tcase_add_test(tc_core, test_s21_sprintf_d_64);
  tcase_add_test(tc_core, test_s21_sprintf_d_65);
  tcase_add_test(tc_core, test_s21_sprintf_d_66);
  tcase_add_test(tc_core, test_s21_sprintf_d_67);
  tcase_add_test(tc_core, test_s21_sprintf_d_68);
  tcase_add_test(tc_core, test_s21_sprintf_d_69);
  tcase_add_test(tc_core, test_s21_sprintf_d_70);
  tcase_add_test(tc_core, test_s21_sprintf_d_71);
  tcase_add_test(tc_core, test_s21_sprintf_d_72);
  tcase_add_test(tc_core, test_s21_sprintf_d_73);
  tcase_add_test(tc_core, test_s21_sprintf_d_74);
  tcase_add_test(tc_core, test_s21_sprintf_d_75);
  tcase_add_test(tc_core, test_s21_sprintf_d_76);
  tcase_add_test(tc_core, test_s21_sprintf_d_77);
  tcase_add_test(tc_core, test_s21_sprintf_d_78);
  tcase_add_test(tc_core, test_s21_sprintf_d_79);
  tcase_add_test(tc_core, test_s21_sprintf_d_80);
  tcase_add_test(tc_core, test_s21_sprintf_d_81);
  tcase_add_test(tc_core, test_s21_sprintf_d_82);
  tcase_add_test(tc_core, test_s21_sprintf_d_83);
  tcase_add_test(tc_core, test_s21_sprintf_d_84);
  tcase_add_test(tc_core, test_s21_sprintf_d_85);
  tcase_add_test(tc_core, test_s21_sprintf_d_86);
  tcase_add_test(tc_core, test_s21_sprintf_d_87);
  tcase_add_test(tc_core, test_s21_sprintf_d_88);
  tcase_add_test(tc_core, test_s21_sprintf_d_89);
  tcase_add_test(tc_core, test_s21_sprintf_d_90);
  tcase_add_test(tc_core, test_s21_sprintf_d_100);
  tcase_add_test(tc_core, test_s21_sprintf_d_101);
  tcase_add_test(tc_core, test_s21_sprintf_d_102);
  tcase_add_test(tc_core, test_s21_sprintf_d_103);
  tcase_add_test(tc_core, test_s21_sprintf_d_104);
  tcase_add_test(tc_core, test_s21_sprintf_d_105);
  tcase_add_test(tc_core, test_s21_sprintf_d_106);
  tcase_add_test(tc_core, test_s21_sprintf_d_107);
  tcase_add_test(tc_core, test_s21_sprintf_d_108);
  tcase_add_test(tc_core, test_s21_sprintf_d_109);
  tcase_add_test(tc_core, test_s21_sprintf_d_110);
  tcase_add_test(tc_core, test_s21_sprintf_d_111);
  tcase_add_test(tc_core, test_s21_sprintf_d_112);
  tcase_add_test(tc_core, test_s21_sprintf_d_113);
  tcase_add_test(tc_core, test_s21_sprintf_d_114);
  tcase_add_test(tc_core, test_s21_sprintf_d_115);
  tcase_add_test(tc_core, test_s21_sprintf_d_116);
  tcase_add_test(tc_core, test_s21_sprintf_d_117);
  tcase_add_test(tc_core, test_s21_sprintf_d_118);
  tcase_add_test(tc_core, test_s21_sprintf_d_119);
  tcase_add_test(tc_core, test_s21_sprintf_d_120);
  tcase_add_test(tc_core, test_s21_sprintf_d_121);
  tcase_add_test(tc_core, test_s21_sprintf_d_122);
  tcase_add_test(tc_core, test_s21_sprintf_d_123);
  tcase_add_test(tc_core, test_s21_sprintf_d_124);
  tcase_add_test(tc_core, test_s21_sprintf_d_125);
  tcase_add_test(tc_core, test_s21_sprintf_d_126);
  tcase_add_test(tc_core, test_s21_sprintf_d_127);
  tcase_add_test(tc_core, test_s21_sprintf_d_128);
  tcase_add_test(tc_core, test_s21_sprintf_d_129);
  tcase_add_test(tc_core, test_s21_sprintf_d_130);
  tcase_add_test(tc_core, test_s21_sprintf_d_131);
  tcase_add_test(tc_core, test_s21_sprintf_d_132);
  tcase_add_test(tc_core, test_s21_sprintf_d_133);
  tcase_add_test(tc_core, test_s21_sprintf_d_134);
  tcase_add_test(tc_core, test_s21_sprintf_d_135);
  tcase_add_test(tc_core, test_s21_sprintf_d_136);
  tcase_add_test(tc_core, test_s21_sprintf_d_137);
  tcase_add_test(tc_core, test_s21_sprintf_d_138);
  tcase_add_test(tc_core, test_s21_sprintf_d_139);
  tcase_add_test(tc_core, test_s21_sprintf_d_140);
  tcase_add_test(tc_core, test_s21_sprintf_d_141);
  tcase_add_test(tc_core, test_s21_sprintf_d_142);
  tcase_add_test(tc_core, test_s21_sprintf_d_143);
  tcase_add_test(tc_core, test_s21_sprintf_d_144);
  tcase_add_test(tc_core, test_s21_sprintf_d_145);
  tcase_add_test(tc_core, test_s21_sprintf_d_146);
  tcase_add_test(tc_core, test_s21_sprintf_d_147);
  tcase_add_test(tc_core, test_s21_sprintf_d_148);
  tcase_add_test(tc_core, test_s21_sprintf_d_149);
  tcase_add_test(tc_core, test_s21_sprintf_d_150);
  tcase_add_test(tc_core, test_s21_sprintf_d_151);
  tcase_add_test(tc_core, test_s21_sprintf_d_152);
  tcase_add_test(tc_core, test_s21_sprintf_d_153);
  tcase_add_test(tc_core, test_s21_sprintf_d_154);
  tcase_add_test(tc_core, test_s21_sprintf_d_155);
  tcase_add_test(tc_core, test_s21_sprintf_d_156);
  tcase_add_test(tc_core, test_s21_sprintf_d_157);
  tcase_add_test(tc_core, test_s21_sprintf_d_158);
  tcase_add_test(tc_core, test_s21_sprintf_d_159);
  tcase_add_test(tc_core, test_s21_sprintf_d_160);
  tcase_add_test(tc_core, test_s21_sprintf_d_161);
  tcase_add_test(tc_core, test_s21_sprintf_d_162);
  tcase_add_test(tc_core, test_s21_sprintf_d_163);
  tcase_add_test(tc_core, test_s21_sprintf_d_164);
  tcase_add_test(tc_core, test_s21_sprintf_d_165);
  tcase_add_test(tc_core, test_s21_sprintf_d_166);
  tcase_add_test(tc_core, test_s21_sprintf_d_167);
  tcase_add_test(tc_core, test_s21_sprintf_d_168);
  tcase_add_test(tc_core, test_s21_sprintf_d_169);
  tcase_add_test(tc_core, test_s21_sprintf_d_170);
  tcase_add_test(tc_core, test_s21_sprintf_d_171);
  tcase_add_test(tc_core, test_s21_sprintf_d_172);
  tcase_add_test(tc_core, test_s21_sprintf_d_173);
  tcase_add_test(tc_core, test_s21_sprintf_d_174);
  tcase_add_test(tc_core, test_s21_sprintf_d_175);
  tcase_add_test(tc_core, test_s21_sprintf_d_176);
  tcase_add_test(tc_core, test_s21_sprintf_d_177);
  tcase_add_test(tc_core, test_s21_sprintf_d_178);
  tcase_add_test(tc_core, test_s21_sprintf_d_179);
  tcase_add_test(tc_core, test_s21_sprintf_d_180);
  tcase_add_test(tc_core, test_s21_sprintf_d_181);
  tcase_add_test(tc_core, test_s21_sprintf_d_182);
  tcase_add_test(tc_core, test_s21_sprintf_d_183);
  tcase_add_test(tc_core, test_s21_sprintf_d_184);
  tcase_add_test(tc_core, test_s21_sprintf_d_185);
  tcase_add_test(tc_core, test_s21_sprintf_d_186);
  tcase_add_test(tc_core, test_s21_sprintf_d_187);
  tcase_add_test(tc_core, test_s21_sprintf_d_188);
  tcase_add_test(tc_core, test_s21_sprintf_d_189);
  tcase_add_test(tc_core, test_s21_sprintf_d_190);
  tcase_add_test(tc_core, test_s21_sprintf_d_191);
  tcase_add_test(tc_core, test_s21_sprintf_d_192);
  tcase_add_test(tc_core, test_s21_sprintf_d_193);
  tcase_add_test(tc_core, test_s21_sprintf_d_194);
  tcase_add_test(tc_core, test_s21_sprintf_d_195);
  tcase_add_test(tc_core, test_s21_sprintf_d_196);
  tcase_add_test(tc_core, test_s21_sprintf_d_197);
  tcase_add_test(tc_core, test_s21_sprintf_d_198);
  tcase_add_test(tc_core, test_s21_sprintf_d_199);
  tcase_add_test(tc_core, test_s21_sprintf_d_200);
  tcase_add_test(tc_core, test_s21_sprintf_d_201);
  tcase_add_test(tc_core, test_s21_sprintf_d_202);
  tcase_add_test(tc_core, test_s21_sprintf_d_203);
  tcase_add_test(tc_core, test_s21_sprintf_d_204);
  tcase_add_test(tc_core, test_s21_sprintf_d_205);
  tcase_add_test(tc_core, test_s21_sprintf_d_206);
  tcase_add_test(tc_core, test_s21_sprintf_d_207);
  tcase_add_test(tc_core, test_s21_sprintf_d_208);
  tcase_add_test(tc_core, test_s21_sprintf_d_209);
  tcase_add_test(tc_core, test_s21_sprintf_d_210);
  tcase_add_test(tc_core, test_s21_sprintf_d_211);
  tcase_add_test(tc_core, test_s21_sprintf_d_212);
  tcase_add_test(tc_core, test_s21_sprintf_d_213);
  tcase_add_test(tc_core, test_s21_sprintf_d_214);
  tcase_add_test(tc_core, test_s21_sprintf_d_215);
  tcase_add_test(tc_core, test_s21_sprintf_d_216);
  tcase_add_test(tc_core, test_s21_sprintf_d_217);
  tcase_add_test(tc_core, test_s21_sprintf_d_218);
  tcase_add_test(tc_core, test_s21_sprintf_d_219);
  tcase_add_test(tc_core, test_s21_sprintf_d_220);
  tcase_add_test(tc_core, test_s21_sprintf_d_221);
  tcase_add_test(tc_core, test_s21_sprintf_d_222);
  tcase_add_test(tc_core, test_s21_sprintf_d_223);
  tcase_add_test(tc_core, test_s21_sprintf_d_224);
  tcase_add_test(tc_core, test_s21_sprintf_d_225);
  tcase_add_test(tc_core, test_s21_sprintf_d_226);
  tcase_add_test(tc_core, test_s21_sprintf_d_227);
  tcase_add_test(tc_core, test_s21_sprintf_d_227);
  tcase_add_test(tc_core, test_s21_sprintf_d_229);
  tcase_add_test(tc_core, test_s21_sprintf_d_230);
  tcase_add_test(tc_core, test_s21_sprintf_d_231);
  tcase_add_test(tc_core, test_s21_sprintf_d_232);
  tcase_add_test(tc_core, test_s21_sprintf_d_233);
  tcase_add_test(tc_core, test_s21_sprintf_d_234);
  tcase_add_test(tc_core, test_s21_sprintf_d_235);

  suite_add_tcase(s, tc_core);

  return s;
}
