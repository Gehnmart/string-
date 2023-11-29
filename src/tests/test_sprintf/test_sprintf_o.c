#include <stdio.h>

#include "./test_sprintf.h"
/* specifier d */

START_TEST(test_s21_sprintf_o_1) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  short int n = 01;
  sprintf(str, "num = %o/.", n);
  s21_sprintf(str1, "num = %o/.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_2) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long int n = 0214743647;
  sprintf(str, "num = %o.", n);
  s21_sprintf(str1, "num = %o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_3) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %o.", n);
  s21_sprintf(str1, "num = %o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_4) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %o.", n);
  s21_sprintf(str1, "num = %o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier o with one flag */

START_TEST(test_s21_sprintf_o_5) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-o.", n);
  s21_sprintf(str1, "num = %-o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_6) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-o.", n);
  s21_sprintf(str1, "num = %-o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_7) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+o.", n);
  s21_sprintf(str1, "num = %+o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_8) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+o.", n);
  s21_sprintf(str1, "num = %+o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_9) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = % o.", n);
  s21_sprintf(str1, "num = % o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_10) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = % o.", n);
  s21_sprintf(str1, "num = % o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_11) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %#o.", n);
  s21_sprintf(str1, "num = %#o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_12) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %#o.", n);
  s21_sprintf(str1, "num = %#o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_13) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %0o.", n);
  s21_sprintf(str1, "num = %0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_14) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %0o.", n);
  s21_sprintf(str1, "num = %0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier o with some flags */
/* 2 flags */

START_TEST(test_s21_sprintf_o_15) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+o.", n);
  s21_sprintf(str1, "num = %-+o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_16) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+o.", n);
  s21_sprintf(str1, "num = %-+o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_17) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %- o.", n);
  s21_sprintf(str1, "num = %- o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_18) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %- o.", n);
  s21_sprintf(str1, "num = %- o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_19) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-#o.", n);
  s21_sprintf(str1, "num = %-#o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_20) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-#o.", n);
  s21_sprintf(str1, "num = %-#o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_21) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-0o.", n);
  s21_sprintf(str1, "num = %-0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_22) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-0o.", n);
  s21_sprintf(str1, "num = %-0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_23) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ o.", n);
  s21_sprintf(str1, "num = %+ o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_24) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+ o.", n);
  s21_sprintf(str1, "num = %+ o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_25) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+#o.", n);
  s21_sprintf(str1, "num = %+#o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_26) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+#o.", n);
  s21_sprintf(str1, "num = %+#o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_27) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ o.", n);
  s21_sprintf(str1, "num = %+ o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_28) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+0o.", n);
  s21_sprintf(str1, "num = %+0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_29) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = % #o.", n);
  s21_sprintf(str1, "num = % #o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_30) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = % #o.", n);
  s21_sprintf(str1, "num = % #o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_31) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = % 0o.", n);
  s21_sprintf(str1, "num = % 0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_32) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = % 0o.", n);
  s21_sprintf(str1, "num = % 0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_33) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %#0o.", n);
  s21_sprintf(str1, "num = %#0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_34) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %0#o.", n);
  s21_sprintf(str1, "num = %0#o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_o_35) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+ o.", n);
  s21_sprintf(str1, "num = %-+ o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_36) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+ o.", n);
  s21_sprintf(str1, "num = %-+ o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_37) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+#o.", n);
  s21_sprintf(str1, "num = %-+#o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_38) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+#o.", n);
  s21_sprintf(str1, "num = %-+#o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_39) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+0o.", n);
  s21_sprintf(str1, "num = %-+0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_40) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+0o.", n);
  s21_sprintf(str1, "num = %-+0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_41) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ #o.", n);
  s21_sprintf(str1, "num = %+ #o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_42) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+ #o.", n);
  s21_sprintf(str1, "num = %+ #o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_43) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ 0o.", n);
  s21_sprintf(str1, "num = %+ 0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_44) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+ 0o.", n);
  s21_sprintf(str1, "num = %+ 0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_45) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = % #0o.", n);
  s21_sprintf(str1, "num = % #0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_46) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = % #0o.", n);
  s21_sprintf(str1, "num = % #0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_o_47) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+ #o.", n);
  s21_sprintf(str1, "num = %-+ #o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_48) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+ #o.", n);
  s21_sprintf(str1, "num = %-+ #o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_49) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+ 0o.", n);
  s21_sprintf(str1, "num = %-+ 0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_50) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+ #o.", n);
  s21_sprintf(str1, "num = %-+ #o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_51) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ #0o.", n);
  s21_sprintf(str1, "num = %+ #0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_52) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+ #0o.", n);
  s21_sprintf(str1, "num = %+ #0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_53) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+ #0o.", n);
  s21_sprintf(str1, "num = %-+ #0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_o_54) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+ #0o.", n);
  s21_sprintf(str1, "num = %-+ #0o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier o with precision */

START_TEST(test_s21_sprintf_o_55) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %.10o.", n);
  s21_sprintf(str1, "num = %.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_56) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %.10o.", n);
  s21_sprintf(str1, "num = %.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_57) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %.*o.", 10, n);
  s21_sprintf(str1, "num = %.*o.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_58) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %.*o.", 10, n);
  s21_sprintf(str1, "num = %.*o.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier o with precision ano flags */

START_TEST(test_s21_sprintf_o_59) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-.10o.", n);
  s21_sprintf(str1, "num = %-.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_60) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-.10o.", n);
  s21_sprintf(str1, "num = %-.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_61) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+.10o.", n);
  s21_sprintf(str1, "num = %+.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_62) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+.10o.", n);
  s21_sprintf(str1, "num = %+.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_63) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = % .10o.", n);
  s21_sprintf(str1, "num = % .10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_64) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = % .10o.", n);
  s21_sprintf(str1, "num = % .10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_65) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %#.10o.", n);
  s21_sprintf(str1, "num = %#.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_66) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %#.10o.", n);
  s21_sprintf(str1, "num = %#.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_67) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %0.10o.", n);
  s21_sprintf(str1, "num = %0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_68) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %0.10o.", n);
  s21_sprintf(str1, "num = %0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_69) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+.10o.", n);
  s21_sprintf(str1, "num = %-+.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_70) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+.10o.", n);
  s21_sprintf(str1, "num = %-+.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_71) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %- .10o.", n);
  s21_sprintf(str1, "num = %- .10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_72) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %- .10o.", n);
  s21_sprintf(str1, "num = %- .10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_73) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-#.10o.", n);
  s21_sprintf(str1, "num = %-#.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_74) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-#.10o.", n);
  s21_sprintf(str1, "num = %-#.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_75) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-0.10o.", n);
  s21_sprintf(str1, "num = %-0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_76) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-0.10o.", n);
  s21_sprintf(str1, "num = %-0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_77) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ .10o.", n);
  s21_sprintf(str1, "num = %+ .10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_78) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+ .10o.", n);
  s21_sprintf(str1, "num = %+ .10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_79) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+#.10o.", n);
  s21_sprintf(str1, "num = %+#.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_80) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+#.10o.", n);
  s21_sprintf(str1, "num = %+#.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_81) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ .10o.", n);
  s21_sprintf(str1, "num = %+ .10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_82) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+0.10o.", n);
  s21_sprintf(str1, "num = %+0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_83) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = % #.10o.", n);
  s21_sprintf(str1, "num = % #.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_84) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = % #.10o.", n);
  s21_sprintf(str1, "num = % #.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_85) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = % 0.10o.", n);
  s21_sprintf(str1, "num = % 0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_86) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = % 0.10o.", n);
  s21_sprintf(str1, "num = % 0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_87) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %#0.10o.", n);
  s21_sprintf(str1, "num = %#0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_88) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %0#.10o.", n);
  s21_sprintf(str1, "num = %0#.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_o_89) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+ .10o.", n);
  s21_sprintf(str1, "num = %-+ .10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_90) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+ .10o.", n);
  s21_sprintf(str1, "num = %-+ .10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_91) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+#.10o.", n);
  s21_sprintf(str1, "num = %-+#.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_92) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+#.10o.", n);
  s21_sprintf(str1, "num = %-+#.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_93) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+0.10o.", n);
  s21_sprintf(str1, "num = %-+0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_94) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+0.10o.", n);
  s21_sprintf(str1, "num = %-+0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_95) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ #.10o.", n);
  s21_sprintf(str1, "num = %+ #.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_96) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+ #.10o.", n);
  s21_sprintf(str1, "num = %+ #.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_97) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ 0.10o.", n);
  s21_sprintf(str1, "num = %+ 0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_98) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+ 0.10o.", n);
  s21_sprintf(str1, "num = %+ 0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_99) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = % #0.10o.", n);
  s21_sprintf(str1, "num = % #0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_100) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = % #0.10o.", n);
  s21_sprintf(str1, "num = % #0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_o_101) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+ #.10o.", n);
  s21_sprintf(str1, "num = %-+ #.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_102) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+ #.10o.", n);
  s21_sprintf(str1, "num = %-+ #.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_103) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+ 0.10o.", n);
  s21_sprintf(str1, "num = %-+ 0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_104) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+ #.10o.", n);
  s21_sprintf(str1, "num = %-+ #.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_105) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ #0.10o.", n);
  s21_sprintf(str1, "num = %+ #0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_106) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+ #0.10o.", n);
  s21_sprintf(str1, "num = %+ #0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_107) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+ #0.10o.", n);
  s21_sprintf(str1, "num = %-+ #0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_o_108) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+ #0.10o.", n);
  s21_sprintf(str1, "num = %-+ #0.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier o with wioth */

START_TEST(test_s21_sprintf_o_109) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %10o.", n);
  s21_sprintf(str1, "num = %10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_110) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %10o.", n);
  s21_sprintf(str1, "num = %10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_111) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %*o.", 10, n);
  s21_sprintf(str1, "num = %*o.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_112) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %*o.", 10, n);
  s21_sprintf(str1, "num = %*o.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier o with wioth ano flags */

START_TEST(test_s21_sprintf_o_113) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-15o.", n);
  s21_sprintf(str1, "num = %-15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_114) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-15o.", n);
  s21_sprintf(str1, "num = %-15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_115) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+15o.", n);
  s21_sprintf(str1, "num = %+15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_116) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+15o.", n);
  s21_sprintf(str1, "num = %+15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_117) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = % 15o.", n);
  s21_sprintf(str1, "num = % 15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_118) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = % 15o.", n);
  s21_sprintf(str1, "num = % 15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_119) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %#15o.", n);
  s21_sprintf(str1, "num = %#15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_120) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %#15o.", n);
  s21_sprintf(str1, "num = %#15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_121) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %015o.", n);
  s21_sprintf(str1, "num = %015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_122) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %015o.", n);
  s21_sprintf(str1, "num = %015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_123) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+15o.", n);
  s21_sprintf(str1, "num = %-+15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_124) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+15o.", n);
  s21_sprintf(str1, "num = %-+15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_125) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %- 15o.", n);
  s21_sprintf(str1, "num = %- 15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_126) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %- 15o.", n);
  s21_sprintf(str1, "num = %- 15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_127) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-#15o.", n);
  s21_sprintf(str1, "num = %-#15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_128) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-#15o.", n);
  s21_sprintf(str1, "num = %-#15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_129) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-015o.", n);
  s21_sprintf(str1, "num = %-015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_130) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-015o.", n);
  s21_sprintf(str1, "num = %-015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_131) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ 15o.", n);
  s21_sprintf(str1, "num = %+ 15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_132) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+ 15o.", n);
  s21_sprintf(str1, "num = %+ 15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_133) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+#15o.", n);
  s21_sprintf(str1, "num = %+#15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_134) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+#15o.", n);
  s21_sprintf(str1, "num = %+#15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_135) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ 15o.", n);
  s21_sprintf(str1, "num = %+ 15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_136) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+015o.", n);
  s21_sprintf(str1, "num = %+015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_137) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = % #15o.", n);
  s21_sprintf(str1, "num = % #15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_138) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = % #15o.", n);
  s21_sprintf(str1, "num = % #15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_139) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = % 015o.", n);
  s21_sprintf(str1, "num = % 015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_140) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = % 015o.", n);
  s21_sprintf(str1, "num = % 015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_141) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %#015o.", n);
  s21_sprintf(str1, "num = %#015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_142) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %0#15o.", n);
  s21_sprintf(str1, "num = %0#15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_o_143) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+ 15o.", n);
  s21_sprintf(str1, "num = %-+ 15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_144) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+ 15o.", n);
  s21_sprintf(str1, "num = %-+ 15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_145) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+#15o.", n);
  s21_sprintf(str1, "num = %-+#15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_146) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+#15o.", n);
  s21_sprintf(str1, "num = %-+#15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_147) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+015o.", n);
  s21_sprintf(str1, "num = %-+015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_148) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+015o.", n);
  s21_sprintf(str1, "num = %-+015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_149) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ #15o.", n);
  s21_sprintf(str1, "num = %+ #15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_150) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+ #15o.", n);
  s21_sprintf(str1, "num = %+ #15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_151) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ 015o.", n);
  s21_sprintf(str1, "num = %+ 015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_152) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+ 015o.", n);
  s21_sprintf(str1, "num = %+ 015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_153) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = % #015o.", n);
  s21_sprintf(str1, "num = % #015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_154) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = % #015o.", n);
  s21_sprintf(str1, "num = % #015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_o_155) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+ #15o.", n);
  s21_sprintf(str1, "num = %-+ #15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_156) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+ #15o.", n);
  s21_sprintf(str1, "num = %-+ #15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_157) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+ 015o.", n);
  s21_sprintf(str1, "num = %-+ 015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_158) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+ #15o.", n);
  s21_sprintf(str1, "num = %-+ #15o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_159) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ #015o.", n);
  s21_sprintf(str1, "num = %+ #015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_160) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+ #015o.", n);
  s21_sprintf(str1, "num = %+ #015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_161) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+ #015o.", n);
  s21_sprintf(str1, "num = %-+ #015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_o_162) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+ #015o.", n);
  s21_sprintf(str1, "num = %-+ #015o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier o with precision ano wioth */

START_TEST(test_s21_sprintf_o_163) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %10.10o.", n);
  s21_sprintf(str1, "num = %10.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_164) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %10.10o.", n);
  s21_sprintf(str1, "num = %10.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_165) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %5.10o.", n);
  s21_sprintf(str1, "num = %5.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_166) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %5.10o.", n);
  s21_sprintf(str1, "num = %5.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_167) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %10.5o.", n);
  s21_sprintf(str1, "num = %10.5o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_168) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %10.5o.", n);
  s21_sprintf(str1, "num = %10.5o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier o with precision, wioth ano flags */

START_TEST(test_s21_sprintf_o_169) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-15.10o.", n);
  s21_sprintf(str1, "num = %-15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_170) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-15.10o.", n);
  s21_sprintf(str1, "num = %-15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_171) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+15.10o.", n);
  s21_sprintf(str1, "num = %+15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_172) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+15.10o.", n);
  s21_sprintf(str1, "num = %+15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_173) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = % 15.10o.", n);
  s21_sprintf(str1, "num = % 15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_174) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = % 15.10o.", n);
  s21_sprintf(str1, "num = % 15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_175) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %#15.10o.", n);
  s21_sprintf(str1, "num = %#15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_176) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %#15.10o.", n);
  s21_sprintf(str1, "num = %#15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_177) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %015.10o.", n);
  s21_sprintf(str1, "num = %015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_178) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %015.10o.", n);
  s21_sprintf(str1, "num = %015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_179) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+15.10o.", n);
  s21_sprintf(str1, "num = %-+15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_180) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+15.10o.", n);
  s21_sprintf(str1, "num = %-+15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_181) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %- 15.10o.", n);
  s21_sprintf(str1, "num = %- 15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_182) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %- 15.10o.", n);
  s21_sprintf(str1, "num = %- 15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_183) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-#15.10o.", n);
  s21_sprintf(str1, "num = %-#15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_184) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-#15.10o.", n);
  s21_sprintf(str1, "num = %-#15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_185) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-015.10o.", n);
  s21_sprintf(str1, "num = %-015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_186) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-015.10o.", n);
  s21_sprintf(str1, "num = %-015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_187) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ 15.10o.", n);
  s21_sprintf(str1, "num = %+ 15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_188) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+ 15.10o.", n);
  s21_sprintf(str1, "num = %+ 15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_189) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+#15.10o.", n);
  s21_sprintf(str1, "num = %+#15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_190) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+#15.10o.", n);
  s21_sprintf(str1, "num = %+#15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_191) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ 15.10o.", n);
  s21_sprintf(str1, "num = %+ 15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_192) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+015.10o.", n);
  s21_sprintf(str1, "num = %+015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_193) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = % #15.10o.", n);
  s21_sprintf(str1, "num = % #15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_194) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = % #15.10o.", n);
  s21_sprintf(str1, "num = % #15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_195) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = % 015.10o.", n);
  s21_sprintf(str1, "num = % 015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_196) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = % 015.10o.", n);
  s21_sprintf(str1, "num = % 015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_197) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %#015.10o.", n);
  s21_sprintf(str1, "num = %#015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_198) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %0#15.10o.", n);
  s21_sprintf(str1, "num = %0#15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_o_199) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+ 15.10o.", n);
  s21_sprintf(str1, "num = %-+ 15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_200) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+ 15.10o.", n);
  s21_sprintf(str1, "num = %-+ 15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_201) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+#15.10o.", n);
  s21_sprintf(str1, "num = %-+#15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_202) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+#15.10o.", n);
  s21_sprintf(str1, "num = %-+#15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_203) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+015.10o.", n);
  s21_sprintf(str1, "num = %-+015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_204) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+015.10o.", n);
  s21_sprintf(str1, "num = %-+015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_205) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ #15.10o.", n);
  s21_sprintf(str1, "num = %+ #15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_206) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+ #15.10o.", n);
  s21_sprintf(str1, "num = %+ #15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_207) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ 015.10o.", n);
  s21_sprintf(str1, "num = %+ 015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_208) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+ 015.10o.", n);
  s21_sprintf(str1, "num = %+ 015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_209) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = % #015.10o.", n);
  s21_sprintf(str1, "num = % #015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_210) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = % #015.10o.", n);
  s21_sprintf(str1, "num = % #015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_o_211) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+ #15.10o.", n);
  s21_sprintf(str1, "num = %-+ #15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_212) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+ #15.10o.", n);
  s21_sprintf(str1, "num = %-+ #15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_213) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+ 015.10o.", n);
  s21_sprintf(str1, "num = %-+ 015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_214) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+ #15.10o.", n);
  s21_sprintf(str1, "num = %-+ #15.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_215) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %+ #015.10o.", n);
  s21_sprintf(str1, "num = %+ #015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_216) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %+ #015.10o.", n);
  s21_sprintf(str1, "num = %+ #015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_o_217) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 02147436;

  sprintf(str, "num = %-+ #015.10o.", n);
  s21_sprintf(str1, "num = %-+ #015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_218) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -02147436;

  sprintf(str, "num = %-+ #015.10o.", n);
  s21_sprintf(str1, "num = %-+ #015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier o with length */

START_TEST(test_s21_sprintf_o_219) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long int n = 0214743647;

  sprintf(str, "num = %-+ #015.10lo.", n);
  s21_sprintf(str1, "num = %-+ #015.10lo.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_221) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  short int n = 214;

  sprintf(str, "num = %-+ #015.10ho.", n);
  s21_sprintf(str1, "num = %-+ #015.10ho.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_222) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long int n = -214;

  sprintf(str, "num = %-+ #015.10ho.", n);
  s21_sprintf(str1, "num = %-+ #015.10ho.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_223) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  short int n = 214;

  sprintf(str, "num = %-+ #015.10hlo.", n);
  s21_sprintf(str1, "num = %-+ #015.10hlo.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_225) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned long int n = 4294967295;

  sprintf(str, "num = %-+ #015.10lo.", n);
  s21_sprintf(str1, "num = %-+ #015.10lo.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_226) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0214743647;

  sprintf(str, "num = %-+ #015.10ho.", n);
  s21_sprintf(str1, "num = %-+ #015.10ho.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_227) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -021474364;

  sprintf(str, "num = %-+ #015.10ho.", n);
  s21_sprintf(str1, "num = %-+ #015.10ho.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_228) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 72;

  sprintf(str, "num = %-+ #015.10o.", n);
  s21_sprintf(str1, "num = %-+ #015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_229) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -72;

  sprintf(str, "num = %-+ #015.10o.", n);
  s21_sprintf(str1, "num = %-+ #015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_230) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 72;

  sprintf(str, "num = %-+ #015.10ho.", n);
  s21_sprintf(str1, "num = %-+ #015.10ho.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_231) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -72;

  sprintf(str, "num = %-+ #015.10ho.", n);
  s21_sprintf(str1, "num = %-+ #015.10ho.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_232) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0xb72;

  sprintf(str, "num = %-+ #015.10o.", n);
  s21_sprintf(str1, "num = %-+ #015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_233) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0xb72;

  sprintf(str, "num = %-+ #015.10o.", n);
  s21_sprintf(str1, "num = %-+ #015.10o.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_234) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0xb72;

  sprintf(str, "num = %-+ #015.10ho.", n);
  s21_sprintf(str1, "num = %-+ #015.10ho.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_o_235) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0xb72;

  sprintf(str, "num = %-+ #015.10ho.", n);
  s21_sprintf(str1, "num = %-+ #015.10ho.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

Suite *s21_sprintf_o_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_sprintf_o");

  /* Core test case */
  tc_core = tcase_create("sprintf_test");

  tcase_add_test(tc_core, test_s21_sprintf_o_1);
  tcase_add_test(tc_core, test_s21_sprintf_o_2);
  tcase_add_test(tc_core, test_s21_sprintf_o_3);
  tcase_add_test(tc_core, test_s21_sprintf_o_4);
  tcase_add_test(tc_core, test_s21_sprintf_o_5);
  tcase_add_test(tc_core, test_s21_sprintf_o_6);
  tcase_add_test(tc_core, test_s21_sprintf_o_7);
  tcase_add_test(tc_core, test_s21_sprintf_o_8);
  tcase_add_test(tc_core, test_s21_sprintf_o_9);
  tcase_add_test(tc_core, test_s21_sprintf_o_10);
  tcase_add_test(tc_core, test_s21_sprintf_o_11);
  tcase_add_test(tc_core, test_s21_sprintf_o_12);
  tcase_add_test(tc_core, test_s21_sprintf_o_13);
  tcase_add_test(tc_core, test_s21_sprintf_o_14);
  tcase_add_test(tc_core, test_s21_sprintf_o_15);
  tcase_add_test(tc_core, test_s21_sprintf_o_16);
  tcase_add_test(tc_core, test_s21_sprintf_o_17);
  tcase_add_test(tc_core, test_s21_sprintf_o_18);
  tcase_add_test(tc_core, test_s21_sprintf_o_19);
  tcase_add_test(tc_core, test_s21_sprintf_o_20);
  tcase_add_test(tc_core, test_s21_sprintf_o_21);
  tcase_add_test(tc_core, test_s21_sprintf_o_22);
  tcase_add_test(tc_core, test_s21_sprintf_o_23);
  tcase_add_test(tc_core, test_s21_sprintf_o_24);
  tcase_add_test(tc_core, test_s21_sprintf_o_25);
  tcase_add_test(tc_core, test_s21_sprintf_o_26);
  tcase_add_test(tc_core, test_s21_sprintf_o_27);
  tcase_add_test(tc_core, test_s21_sprintf_o_28);
  tcase_add_test(tc_core, test_s21_sprintf_o_29);
  tcase_add_test(tc_core, test_s21_sprintf_o_30);
  tcase_add_test(tc_core, test_s21_sprintf_o_31);
  tcase_add_test(tc_core, test_s21_sprintf_o_32);
  tcase_add_test(tc_core, test_s21_sprintf_o_33);
  tcase_add_test(tc_core, test_s21_sprintf_o_34);
  tcase_add_test(tc_core, test_s21_sprintf_o_35);
  tcase_add_test(tc_core, test_s21_sprintf_o_36);
  tcase_add_test(tc_core, test_s21_sprintf_o_37);
  tcase_add_test(tc_core, test_s21_sprintf_o_38);
  tcase_add_test(tc_core, test_s21_sprintf_o_39);
  tcase_add_test(tc_core, test_s21_sprintf_o_40);
  tcase_add_test(tc_core, test_s21_sprintf_o_41);
  tcase_add_test(tc_core, test_s21_sprintf_o_42);
  tcase_add_test(tc_core, test_s21_sprintf_o_43);
  tcase_add_test(tc_core, test_s21_sprintf_o_44);
  tcase_add_test(tc_core, test_s21_sprintf_o_45);
  tcase_add_test(tc_core, test_s21_sprintf_o_46);
  tcase_add_test(tc_core, test_s21_sprintf_o_47);
  tcase_add_test(tc_core, test_s21_sprintf_o_48);
  tcase_add_test(tc_core, test_s21_sprintf_o_49);
  tcase_add_test(tc_core, test_s21_sprintf_o_50);
  tcase_add_test(tc_core, test_s21_sprintf_o_51);
  tcase_add_test(tc_core, test_s21_sprintf_o_52);
  tcase_add_test(tc_core, test_s21_sprintf_o_53);
  tcase_add_test(tc_core, test_s21_sprintf_o_54);
  tcase_add_test(tc_core, test_s21_sprintf_o_55);
  tcase_add_test(tc_core, test_s21_sprintf_o_56);
  tcase_add_test(tc_core, test_s21_sprintf_o_57);
  tcase_add_test(tc_core, test_s21_sprintf_o_58);
  tcase_add_test(tc_core, test_s21_sprintf_o_60);
  tcase_add_test(tc_core, test_s21_sprintf_o_61);
  tcase_add_test(tc_core, test_s21_sprintf_o_62);
  tcase_add_test(tc_core, test_s21_sprintf_o_63);
  tcase_add_test(tc_core, test_s21_sprintf_o_64);
  tcase_add_test(tc_core, test_s21_sprintf_o_65);
  tcase_add_test(tc_core, test_s21_sprintf_o_66);
  tcase_add_test(tc_core, test_s21_sprintf_o_67);
  tcase_add_test(tc_core, test_s21_sprintf_o_68);
  tcase_add_test(tc_core, test_s21_sprintf_o_69);
  tcase_add_test(tc_core, test_s21_sprintf_o_70);
  tcase_add_test(tc_core, test_s21_sprintf_o_71);
  tcase_add_test(tc_core, test_s21_sprintf_o_72);
  tcase_add_test(tc_core, test_s21_sprintf_o_73);
  tcase_add_test(tc_core, test_s21_sprintf_o_74);
  tcase_add_test(tc_core, test_s21_sprintf_o_75);
  tcase_add_test(tc_core, test_s21_sprintf_o_76);
  tcase_add_test(tc_core, test_s21_sprintf_o_77);
  tcase_add_test(tc_core, test_s21_sprintf_o_78);
  tcase_add_test(tc_core, test_s21_sprintf_o_79);
  tcase_add_test(tc_core, test_s21_sprintf_o_80);
  tcase_add_test(tc_core, test_s21_sprintf_o_81);
  tcase_add_test(tc_core, test_s21_sprintf_o_82);
  tcase_add_test(tc_core, test_s21_sprintf_o_83);
  tcase_add_test(tc_core, test_s21_sprintf_o_84);
  tcase_add_test(tc_core, test_s21_sprintf_o_85);
  tcase_add_test(tc_core, test_s21_sprintf_o_86);
  tcase_add_test(tc_core, test_s21_sprintf_o_87);
  tcase_add_test(tc_core, test_s21_sprintf_o_88);
  tcase_add_test(tc_core, test_s21_sprintf_o_89);
  tcase_add_test(tc_core, test_s21_sprintf_o_90);
  tcase_add_test(tc_core, test_s21_sprintf_o_100);
  tcase_add_test(tc_core, test_s21_sprintf_o_101);
  tcase_add_test(tc_core, test_s21_sprintf_o_102);
  tcase_add_test(tc_core, test_s21_sprintf_o_103);
  tcase_add_test(tc_core, test_s21_sprintf_o_104);
  tcase_add_test(tc_core, test_s21_sprintf_o_105);
  tcase_add_test(tc_core, test_s21_sprintf_o_106);
  tcase_add_test(tc_core, test_s21_sprintf_o_107);
  tcase_add_test(tc_core, test_s21_sprintf_o_108);
  tcase_add_test(tc_core, test_s21_sprintf_o_109);
  tcase_add_test(tc_core, test_s21_sprintf_o_110);
  tcase_add_test(tc_core, test_s21_sprintf_o_111);
  tcase_add_test(tc_core, test_s21_sprintf_o_112);
  tcase_add_test(tc_core, test_s21_sprintf_o_113);
  tcase_add_test(tc_core, test_s21_sprintf_o_114);
  tcase_add_test(tc_core, test_s21_sprintf_o_115);
  tcase_add_test(tc_core, test_s21_sprintf_o_116);
  tcase_add_test(tc_core, test_s21_sprintf_o_117);
  tcase_add_test(tc_core, test_s21_sprintf_o_118);
  tcase_add_test(tc_core, test_s21_sprintf_o_119);
  tcase_add_test(tc_core, test_s21_sprintf_o_120);
  tcase_add_test(tc_core, test_s21_sprintf_o_121);
  tcase_add_test(tc_core, test_s21_sprintf_o_122);
  tcase_add_test(tc_core, test_s21_sprintf_o_123);
  tcase_add_test(tc_core, test_s21_sprintf_o_124);
  tcase_add_test(tc_core, test_s21_sprintf_o_125);
  tcase_add_test(tc_core, test_s21_sprintf_o_126);
  tcase_add_test(tc_core, test_s21_sprintf_o_127);
  tcase_add_test(tc_core, test_s21_sprintf_o_128);
  tcase_add_test(tc_core, test_s21_sprintf_o_129);
  tcase_add_test(tc_core, test_s21_sprintf_o_130);
  tcase_add_test(tc_core, test_s21_sprintf_o_131);
  tcase_add_test(tc_core, test_s21_sprintf_o_132);
  tcase_add_test(tc_core, test_s21_sprintf_o_133);
  tcase_add_test(tc_core, test_s21_sprintf_o_134);
  tcase_add_test(tc_core, test_s21_sprintf_o_135);
  tcase_add_test(tc_core, test_s21_sprintf_o_136);
  tcase_add_test(tc_core, test_s21_sprintf_o_137);
  tcase_add_test(tc_core, test_s21_sprintf_o_138);
  tcase_add_test(tc_core, test_s21_sprintf_o_139);
  tcase_add_test(tc_core, test_s21_sprintf_o_140);
  tcase_add_test(tc_core, test_s21_sprintf_o_141);
  tcase_add_test(tc_core, test_s21_sprintf_o_142);
  tcase_add_test(tc_core, test_s21_sprintf_o_143);
  tcase_add_test(tc_core, test_s21_sprintf_o_144);
  tcase_add_test(tc_core, test_s21_sprintf_o_145);
  tcase_add_test(tc_core, test_s21_sprintf_o_146);
  tcase_add_test(tc_core, test_s21_sprintf_o_147);
  tcase_add_test(tc_core, test_s21_sprintf_o_148);
  tcase_add_test(tc_core, test_s21_sprintf_o_149);
  tcase_add_test(tc_core, test_s21_sprintf_o_150);
  tcase_add_test(tc_core, test_s21_sprintf_o_151);
  tcase_add_test(tc_core, test_s21_sprintf_o_152);
  tcase_add_test(tc_core, test_s21_sprintf_o_153);
  tcase_add_test(tc_core, test_s21_sprintf_o_154);
  tcase_add_test(tc_core, test_s21_sprintf_o_155);
  tcase_add_test(tc_core, test_s21_sprintf_o_156);
  tcase_add_test(tc_core, test_s21_sprintf_o_157);
  tcase_add_test(tc_core, test_s21_sprintf_o_158);
  tcase_add_test(tc_core, test_s21_sprintf_o_159);
  tcase_add_test(tc_core, test_s21_sprintf_o_160);
  tcase_add_test(tc_core, test_s21_sprintf_o_161);
  tcase_add_test(tc_core, test_s21_sprintf_o_162);
  tcase_add_test(tc_core, test_s21_sprintf_o_163);
  tcase_add_test(tc_core, test_s21_sprintf_o_164);
  tcase_add_test(tc_core, test_s21_sprintf_o_165);
  tcase_add_test(tc_core, test_s21_sprintf_o_166);
  tcase_add_test(tc_core, test_s21_sprintf_o_167);
  tcase_add_test(tc_core, test_s21_sprintf_o_168);
  tcase_add_test(tc_core, test_s21_sprintf_o_169);
  tcase_add_test(tc_core, test_s21_sprintf_o_170);
  tcase_add_test(tc_core, test_s21_sprintf_o_171);
  tcase_add_test(tc_core, test_s21_sprintf_o_172);
  tcase_add_test(tc_core, test_s21_sprintf_o_173);
  tcase_add_test(tc_core, test_s21_sprintf_o_174);
  tcase_add_test(tc_core, test_s21_sprintf_o_175);
  tcase_add_test(tc_core, test_s21_sprintf_o_176);
  tcase_add_test(tc_core, test_s21_sprintf_o_177);
  tcase_add_test(tc_core, test_s21_sprintf_o_178);
  tcase_add_test(tc_core, test_s21_sprintf_o_179);
  tcase_add_test(tc_core, test_s21_sprintf_o_180);
  tcase_add_test(tc_core, test_s21_sprintf_o_181);
  tcase_add_test(tc_core, test_s21_sprintf_o_182);
  tcase_add_test(tc_core, test_s21_sprintf_o_183);
  tcase_add_test(tc_core, test_s21_sprintf_o_184);
  tcase_add_test(tc_core, test_s21_sprintf_o_185);
  tcase_add_test(tc_core, test_s21_sprintf_o_186);
  tcase_add_test(tc_core, test_s21_sprintf_o_187);
  tcase_add_test(tc_core, test_s21_sprintf_o_188);
  tcase_add_test(tc_core, test_s21_sprintf_o_189);
  tcase_add_test(tc_core, test_s21_sprintf_o_190);
  tcase_add_test(tc_core, test_s21_sprintf_o_191);
  tcase_add_test(tc_core, test_s21_sprintf_o_192);
  tcase_add_test(tc_core, test_s21_sprintf_o_193);
  tcase_add_test(tc_core, test_s21_sprintf_o_194);
  tcase_add_test(tc_core, test_s21_sprintf_o_195);
  tcase_add_test(tc_core, test_s21_sprintf_o_196);
  tcase_add_test(tc_core, test_s21_sprintf_o_197);
  tcase_add_test(tc_core, test_s21_sprintf_o_198);
  tcase_add_test(tc_core, test_s21_sprintf_o_199);
  tcase_add_test(tc_core, test_s21_sprintf_o_200);
  tcase_add_test(tc_core, test_s21_sprintf_o_201);
  tcase_add_test(tc_core, test_s21_sprintf_o_202);
  tcase_add_test(tc_core, test_s21_sprintf_o_203);
  tcase_add_test(tc_core, test_s21_sprintf_o_204);
  tcase_add_test(tc_core, test_s21_sprintf_o_205);
  tcase_add_test(tc_core, test_s21_sprintf_o_206);
  tcase_add_test(tc_core, test_s21_sprintf_o_207);
  tcase_add_test(tc_core, test_s21_sprintf_o_208);
  tcase_add_test(tc_core, test_s21_sprintf_o_209);
  tcase_add_test(tc_core, test_s21_sprintf_o_210);
  tcase_add_test(tc_core, test_s21_sprintf_o_211);
  tcase_add_test(tc_core, test_s21_sprintf_o_212);
  tcase_add_test(tc_core, test_s21_sprintf_o_213);
  tcase_add_test(tc_core, test_s21_sprintf_o_214);
  tcase_add_test(tc_core, test_s21_sprintf_o_215);
  tcase_add_test(tc_core, test_s21_sprintf_o_216);
  tcase_add_test(tc_core, test_s21_sprintf_o_217);
  tcase_add_test(tc_core, test_s21_sprintf_o_218);
  tcase_add_test(tc_core, test_s21_sprintf_o_219);
  tcase_add_test(tc_core, test_s21_sprintf_o_221);
  tcase_add_test(tc_core, test_s21_sprintf_o_222);
  tcase_add_test(tc_core, test_s21_sprintf_o_223);
  tcase_add_test(tc_core, test_s21_sprintf_o_225);
  tcase_add_test(tc_core, test_s21_sprintf_o_226);
  tcase_add_test(tc_core, test_s21_sprintf_o_227);
  tcase_add_test(tc_core, test_s21_sprintf_o_227);
  tcase_add_test(tc_core, test_s21_sprintf_o_229);
  tcase_add_test(tc_core, test_s21_sprintf_o_230);
  tcase_add_test(tc_core, test_s21_sprintf_o_231);
  tcase_add_test(tc_core, test_s21_sprintf_o_232);
  tcase_add_test(tc_core, test_s21_sprintf_o_233);
  tcase_add_test(tc_core, test_s21_sprintf_o_234);
  tcase_add_test(tc_core, test_s21_sprintf_o_235);

  suite_add_tcase(s, tc_core);

  return s;
}
