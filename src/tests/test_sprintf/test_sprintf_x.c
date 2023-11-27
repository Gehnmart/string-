#include "../../s21_string.h"
#include "./test_sprintf.h"
/* specifier x */

START_TEST(test_s21_sprintf_x_1) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  short int n = 0x0;
  sprintf(str, "num = %x/.", n);
  s21_sprintf(str1, "num = %x/.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_2) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long int n = 0x21a8afc;
  sprintf(str, "num = %x.", n);
  s21_sprintf(str1, "num = %x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_3) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %x.", n);
  s21_sprintf(str1, "num = %x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_4) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %x.", n);
  s21_sprintf(str1, "num = %x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier x with one flag */

START_TEST(test_s21_sprintf_x_5) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-x.", n);
  s21_sprintf(str1, "num = %-x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_6) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-x.", n);
  s21_sprintf(str1, "num = %-x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_7) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+x.", n);
  s21_sprintf(str1, "num = %+x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_8) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+x.", n);
  s21_sprintf(str1, "num = %+x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_9) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = % x.", n);
  s21_sprintf(str1, "num = % x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_10) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = % x.", n);
  s21_sprintf(str1, "num = % x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_11) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %#x.", n);
  s21_sprintf(str1, "num = %#x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_12) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %#x.", n);
  s21_sprintf(str1, "num = %#x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_13) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %0x.", n);
  s21_sprintf(str1, "num = %0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_14) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %0x.", n);
  s21_sprintf(str1, "num = %0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier x with some flags */
/* 2 flags */

START_TEST(test_s21_sprintf_x_15) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+x.", n);
  s21_sprintf(str1, "num = %-+x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_16) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+x.", n);
  s21_sprintf(str1, "num = %-+x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_17) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %- x.", n);
  s21_sprintf(str1, "num = %- x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_18) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %- x.", n);
  s21_sprintf(str1, "num = %- x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_19) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-#x.", n);
  s21_sprintf(str1, "num = %-#x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_20) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-#x.", n);
  s21_sprintf(str1, "num = %-#x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_21) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-0x.", n);
  s21_sprintf(str1, "num = %-0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_22) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-0x.", n);
  s21_sprintf(str1, "num = %-0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_23) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ x.", n);
  s21_sprintf(str1, "num = %+ x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_24) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+ x.", n);
  s21_sprintf(str1, "num = %+ x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_25) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+#x.", n);
  s21_sprintf(str1, "num = %+#x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_26) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+#x.", n);
  s21_sprintf(str1, "num = %+#x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_27) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ x.", n);
  s21_sprintf(str1, "num = %+ x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_28) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+0x.", n);
  s21_sprintf(str1, "num = %+0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_29) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = % #x.", n);
  s21_sprintf(str1, "num = % #x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_30) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = % #x.", n);
  s21_sprintf(str1, "num = % #x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_31) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = % 0x.", n);
  s21_sprintf(str1, "num = % 0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_32) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = % 0x.", n);
  s21_sprintf(str1, "num = % 0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_33) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %#0x.", n);
  s21_sprintf(str1, "num = %#0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_34) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %0#x.", n);
  s21_sprintf(str1, "num = %0#x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_x_35) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+ x.", n);
  s21_sprintf(str1, "num = %-+ x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_36) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+ x.", n);
  s21_sprintf(str1, "num = %-+ x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_37) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+#x.", n);
  s21_sprintf(str1, "num = %-+#x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_38) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+#x.", n);
  s21_sprintf(str1, "num = %-+#x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_39) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+0x.", n);
  s21_sprintf(str1, "num = %-+0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_40) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+0x.", n);
  s21_sprintf(str1, "num = %-+0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_41) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ #x.", n);
  s21_sprintf(str1, "num = %+ #x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_42) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+ #x.", n);
  s21_sprintf(str1, "num = %+ #x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_43) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ 0x.", n);
  s21_sprintf(str1, "num = %+ 0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_44) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+ 0x.", n);
  s21_sprintf(str1, "num = %+ 0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_45) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = % #0x.", n);
  s21_sprintf(str1, "num = % #0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_46) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = % #0x.", n);
  s21_sprintf(str1, "num = % #0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_x_47) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+ #x.", n);
  s21_sprintf(str1, "num = %-+ #x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_48) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+ #x.", n);
  s21_sprintf(str1, "num = %-+ #x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_49) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+ 0x.", n);
  s21_sprintf(str1, "num = %-+ 0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_50) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+ #x.", n);
  s21_sprintf(str1, "num = %-+ #x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_51) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ #0x.", n);
  s21_sprintf(str1, "num = %+ #0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_52) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+ #0x.", n);
  s21_sprintf(str1, "num = %+ #0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_53) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+ #0x.", n);
  s21_sprintf(str1, "num = %-+ #0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_x_54) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+ #0x.", n);
  s21_sprintf(str1, "num = %-+ #0x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier x with precision */

START_TEST(test_s21_sprintf_x_55) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %.10x.", n);
  s21_sprintf(str1, "num = %.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_56) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %.10x.", n);
  s21_sprintf(str1, "num = %.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_57) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %.*x.", 10, n);
  s21_sprintf(str1, "num = %.*x.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_58) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %.*x.", 10, n);
  s21_sprintf(str1, "num = %.*x.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier x with precision anx flags */

START_TEST(test_s21_sprintf_x_59) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-.10x.", n);
  s21_sprintf(str1, "num = %-.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_60) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-.10x.", n);
  s21_sprintf(str1, "num = %-.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_61) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+.10x.", n);
  s21_sprintf(str1, "num = %+.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_62) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+.10x.", n);
  s21_sprintf(str1, "num = %+.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_63) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = % .10x.", n);
  s21_sprintf(str1, "num = % .10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_64) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = % .10x.", n);
  s21_sprintf(str1, "num = % .10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_65) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %#.10x.", n);
  s21_sprintf(str1, "num = %#.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_66) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %#.10x.", n);
  s21_sprintf(str1, "num = %#.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_67) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %0.10x.", n);
  s21_sprintf(str1, "num = %0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_68) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %0.10x.", n);
  s21_sprintf(str1, "num = %0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_69) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+.10x.", n);
  s21_sprintf(str1, "num = %-+.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_70) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+.10x.", n);
  s21_sprintf(str1, "num = %-+.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_71) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %- .10x.", n);
  s21_sprintf(str1, "num = %- .10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_72) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %- .10x.", n);
  s21_sprintf(str1, "num = %- .10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_73) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-#.10x.", n);
  s21_sprintf(str1, "num = %-#.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_74) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-#.10x.", n);
  s21_sprintf(str1, "num = %-#.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_75) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-0.10x.", n);
  s21_sprintf(str1, "num = %-0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_76) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-0.10x.", n);
  s21_sprintf(str1, "num = %-0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_77) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ .10x.", n);
  s21_sprintf(str1, "num = %+ .10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_78) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+ .10x.", n);
  s21_sprintf(str1, "num = %+ .10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_79) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+#.10x.", n);
  s21_sprintf(str1, "num = %+#.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_80) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+#.10x.", n);
  s21_sprintf(str1, "num = %+#.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_81) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ .10x.", n);
  s21_sprintf(str1, "num = %+ .10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_82) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+0.10x.", n);
  s21_sprintf(str1, "num = %+0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_83) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = % #.10x.", n);
  s21_sprintf(str1, "num = % #.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_84) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = % #.10x.", n);
  s21_sprintf(str1, "num = % #.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_85) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = % 0.10x.", n);
  s21_sprintf(str1, "num = % 0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_86) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = % 0.10x.", n);
  s21_sprintf(str1, "num = % 0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_87) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %#0.10x.", n);
  s21_sprintf(str1, "num = %#0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_88) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %0#.10x.", n);
  s21_sprintf(str1, "num = %0#.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_x_89) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+ .10x.", n);
  s21_sprintf(str1, "num = %-+ .10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_90) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+ .10x.", n);
  s21_sprintf(str1, "num = %-+ .10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_91) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+#.10x.", n);
  s21_sprintf(str1, "num = %-+#.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_92) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+#.10x.", n);
  s21_sprintf(str1, "num = %-+#.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_93) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+0.10x.", n);
  s21_sprintf(str1, "num = %-+0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_94) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+0.10x.", n);
  s21_sprintf(str1, "num = %-+0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_95) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ #.10x.", n);
  s21_sprintf(str1, "num = %+ #.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_96) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+ #.10x.", n);
  s21_sprintf(str1, "num = %+ #.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_97) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ 0.10x.", n);
  s21_sprintf(str1, "num = %+ 0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_98) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+ 0.10x.", n);
  s21_sprintf(str1, "num = %+ 0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_99) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = % #0.10x.", n);
  s21_sprintf(str1, "num = % #0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_100) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = % #0.10x.", n);
  s21_sprintf(str1, "num = % #0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_x_101) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+ #.10x.", n);
  s21_sprintf(str1, "num = %-+ #.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_102) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+ #.10x.", n);
  s21_sprintf(str1, "num = %-+ #.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_103) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+ 0.10x.", n);
  s21_sprintf(str1, "num = %-+ 0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_104) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+ #.10x.", n);
  s21_sprintf(str1, "num = %-+ #.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_105) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ #0.10x.", n);
  s21_sprintf(str1, "num = %+ #0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_106) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+ #0.10x.", n);
  s21_sprintf(str1, "num = %+ #0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_107) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+ #0.10x.", n);
  s21_sprintf(str1, "num = %-+ #0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_x_108) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+ #0.10x.", n);
  s21_sprintf(str1, "num = %-+ #0.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier x with wixth */

START_TEST(test_s21_sprintf_x_109) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %10x.", n);
  s21_sprintf(str1, "num = %10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_110) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %10x.", n);
  s21_sprintf(str1, "num = %10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_111) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %*x.", 10, n);
  s21_sprintf(str1, "num = %*x.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_112) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %*x.", 10, n);
  s21_sprintf(str1, "num = %*x.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier x with wixth anx flags */

START_TEST(test_s21_sprintf_x_113) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-15x.", n);
  s21_sprintf(str1, "num = %-15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_114) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-15x.", n);
  s21_sprintf(str1, "num = %-15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_115) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+15x.", n);
  s21_sprintf(str1, "num = %+15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_116) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+15x.", n);
  s21_sprintf(str1, "num = %+15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_117) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = % 15x.", n);
  s21_sprintf(str1, "num = % 15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_118) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = % 15x.", n);
  s21_sprintf(str1, "num = % 15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_119) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %#15x.", n);
  s21_sprintf(str1, "num = %#15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_120) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %#15x.", n);
  s21_sprintf(str1, "num = %#15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_121) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %015x.", n);
  s21_sprintf(str1, "num = %015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_122) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %015x.", n);
  s21_sprintf(str1, "num = %015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_123) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+15x.", n);
  s21_sprintf(str1, "num = %-+15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_124) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+15x.", n);
  s21_sprintf(str1, "num = %-+15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_125) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %- 15x.", n);
  s21_sprintf(str1, "num = %- 15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_126) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %- 15x.", n);
  s21_sprintf(str1, "num = %- 15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_127) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-#15x.", n);
  s21_sprintf(str1, "num = %-#15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_128) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-#15x.", n);
  s21_sprintf(str1, "num = %-#15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_129) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-015x.", n);
  s21_sprintf(str1, "num = %-015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_130) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-015x.", n);
  s21_sprintf(str1, "num = %-015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_131) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ 15x.", n);
  s21_sprintf(str1, "num = %+ 15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_132) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+ 15x.", n);
  s21_sprintf(str1, "num = %+ 15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_133) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+#15x.", n);
  s21_sprintf(str1, "num = %+#15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_134) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+#15x.", n);
  s21_sprintf(str1, "num = %+#15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_135) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ 15x.", n);
  s21_sprintf(str1, "num = %+ 15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_136) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+015x.", n);
  s21_sprintf(str1, "num = %+015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_137) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = % #15x.", n);
  s21_sprintf(str1, "num = % #15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_138) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = % #15x.", n);
  s21_sprintf(str1, "num = % #15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_139) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = % 015x.", n);
  s21_sprintf(str1, "num = % 015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_140) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = % 015x.", n);
  s21_sprintf(str1, "num = % 015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_141) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %#015x.", n);
  s21_sprintf(str1, "num = %#015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_142) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %0#15x.", n);
  s21_sprintf(str1, "num = %0#15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_x_143) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+ 15x.", n);
  s21_sprintf(str1, "num = %-+ 15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_144) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+ 15x.", n);
  s21_sprintf(str1, "num = %-+ 15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_145) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+#15x.", n);
  s21_sprintf(str1, "num = %-+#15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_146) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+#15x.", n);
  s21_sprintf(str1, "num = %-+#15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_147) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+015x.", n);
  s21_sprintf(str1, "num = %-+015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_148) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+015x.", n);
  s21_sprintf(str1, "num = %-+015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_149) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ #15x.", n);
  s21_sprintf(str1, "num = %+ #15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_150) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+ #15x.", n);
  s21_sprintf(str1, "num = %+ #15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_151) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ 015x.", n);
  s21_sprintf(str1, "num = %+ 015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_152) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+ 015x.", n);
  s21_sprintf(str1, "num = %+ 015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_153) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = % #015x.", n);
  s21_sprintf(str1, "num = % #015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_154) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = % #015x.", n);
  s21_sprintf(str1, "num = % #015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_x_155) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+ #15x.", n);
  s21_sprintf(str1, "num = %-+ #15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_156) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+ #15x.", n);
  s21_sprintf(str1, "num = %-+ #15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_157) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+ 015x.", n);
  s21_sprintf(str1, "num = %-+ 015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_158) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+ #15x.", n);
  s21_sprintf(str1, "num = %-+ #15x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_159) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ #015x.", n);
  s21_sprintf(str1, "num = %+ #015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_160) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+ #015x.", n);
  s21_sprintf(str1, "num = %+ #015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_161) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+ #015x.", n);
  s21_sprintf(str1, "num = %-+ #015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_x_162) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+ #015x.", n);
  s21_sprintf(str1, "num = %-+ #015x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier x with precision anx wixth */

START_TEST(test_s21_sprintf_x_163) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %10.10x.", n);
  s21_sprintf(str1, "num = %10.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_164) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %10.10x.", n);
  s21_sprintf(str1, "num = %10.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_165) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %5.10x.", n);
  s21_sprintf(str1, "num = %5.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_166) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %5.10x.", n);
  s21_sprintf(str1, "num = %5.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_167) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %10.5x.", n);
  s21_sprintf(str1, "num = %10.5x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_168) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %10.5x.", n);
  s21_sprintf(str1, "num = %10.5x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier x with precision, wixth anx flags */

START_TEST(test_s21_sprintf_x_169) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-15.10x.", n);
  s21_sprintf(str1, "num = %-15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_170) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-15.10x.", n);
  s21_sprintf(str1, "num = %-15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_171) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+15.10x.", n);
  s21_sprintf(str1, "num = %+15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_172) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+15.10x.", n);
  s21_sprintf(str1, "num = %+15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_173) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = % 15.10x.", n);
  s21_sprintf(str1, "num = % 15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_174) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = % 15.10x.", n);
  s21_sprintf(str1, "num = % 15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_175) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %#15.10x.", n);
  s21_sprintf(str1, "num = %#15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_176) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %#15.10x.", n);
  s21_sprintf(str1, "num = %#15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_177) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %015.10x.", n);
  s21_sprintf(str1, "num = %015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_178) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %015.10x.", n);
  s21_sprintf(str1, "num = %015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_179) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+15.10x.", n);
  s21_sprintf(str1, "num = %-+15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_180) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+15.10x.", n);
  s21_sprintf(str1, "num = %-+15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_181) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %- 15.10x.", n);
  s21_sprintf(str1, "num = %- 15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_182) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %- 15.10x.", n);
  s21_sprintf(str1, "num = %- 15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_183) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-#15.10x.", n);
  s21_sprintf(str1, "num = %-#15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_184) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-#15.10x.", n);
  s21_sprintf(str1, "num = %-#15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_185) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-015.10x.", n);
  s21_sprintf(str1, "num = %-015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_186) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-015.10x.", n);
  s21_sprintf(str1, "num = %-015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_187) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ 15.10x.", n);
  s21_sprintf(str1, "num = %+ 15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_188) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+ 15.10x.", n);
  s21_sprintf(str1, "num = %+ 15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_189) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+#15.10x.", n);
  s21_sprintf(str1, "num = %+#15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_190) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+#15.10x.", n);
  s21_sprintf(str1, "num = %+#15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_191) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ 15.10x.", n);
  s21_sprintf(str1, "num = %+ 15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_192) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+015.10x.", n);
  s21_sprintf(str1, "num = %+015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_193) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = % #15.10x.", n);
  s21_sprintf(str1, "num = % #15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_194) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = % #15.10x.", n);
  s21_sprintf(str1, "num = % #15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_195) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = % 015.10x.", n);
  s21_sprintf(str1, "num = % 015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_196) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = % 015.10x.", n);
  s21_sprintf(str1, "num = % 015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_197) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %#015.10x.", n);
  s21_sprintf(str1, "num = %#015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_198) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %0#15.10x.", n);
  s21_sprintf(str1, "num = %0#15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_x_199) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+ 15.10x.", n);
  s21_sprintf(str1, "num = %-+ 15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_200) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+ 15.10x.", n);
  s21_sprintf(str1, "num = %-+ 15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_201) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+#15.10x.", n);
  s21_sprintf(str1, "num = %-+#15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_202) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+#15.10x.", n);
  s21_sprintf(str1, "num = %-+#15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_203) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+015.10x.", n);
  s21_sprintf(str1, "num = %-+015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_204) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+015.10x.", n);
  s21_sprintf(str1, "num = %-+015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_205) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ #15.10x.", n);
  s21_sprintf(str1, "num = %+ #15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_206) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+ #15.10x.", n);
  s21_sprintf(str1, "num = %+ #15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_207) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ 015.10x.", n);
  s21_sprintf(str1, "num = %+ 015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_208) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+ 015.10x.", n);
  s21_sprintf(str1, "num = %+ 015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_209) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = % #015.10x.", n);
  s21_sprintf(str1, "num = % #015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_210) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = % #015.10x.", n);
  s21_sprintf(str1, "num = % #015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_x_211) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+ #15.10x.", n);
  s21_sprintf(str1, "num = %-+ #15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_212) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+ #15.10x.", n);
  s21_sprintf(str1, "num = %-+ #15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_213) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+ 015.10x.", n);
  s21_sprintf(str1, "num = %-+ 015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_214) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+ #15.10x.", n);
  s21_sprintf(str1, "num = %-+ #15.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_215) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %+ #015.10x.", n);
  s21_sprintf(str1, "num = %+ #015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_216) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %+ #015.10x.", n);
  s21_sprintf(str1, "num = %+ #015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_x_217) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0x21a8afc;

  sprintf(str, "num = %-+ #015.10x.", n);
  s21_sprintf(str1, "num = %-+ #015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_218) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0x21a8afc;

  sprintf(str, "num = %-+ #015.10x.", n);
  s21_sprintf(str1, "num = %-+ #015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier x with length */

START_TEST(test_s21_sprintf_x_219) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long int n = 0x21a8afc47;

  sprintf(str, "num = %-+ #015.10lx.", n);
  s21_sprintf(str1, "num = %-+ #015.10lx.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_220) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long int n = -0x21a8afc48;

  sprintf(str, "num = %-+ #015.10lx.", n);
  s21_sprintf(str1, "num = %-+ #015.10lx.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_221) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  short int n = 214;

  sprintf(str, "num = %-+ #015.10hx.", n);
  s21_sprintf(str1, "num = %-+ #015.10hx.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_222) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long int n = -214;

  sprintf(str, "num = %-+ #015.10hx.", n);
  s21_sprintf(str1, "num = %-+ #015.10hx.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_223) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  short int n = 214;

  sprintf(str, "num = %-+ #015.10hlx.", n);
  s21_sprintf(str1, "num = %-+ #015.10hlx.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_225) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned long int n = 4294967295;

  sprintf(str, "num = %-+ #015.10lx.", n);
  s21_sprintf(str1, "num = %-+ #015.10lx.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_226) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0xa8afc47;

  sprintf(str, "num = %-+ #015.10hx.", n);
  s21_sprintf(str1, "num = %-+ #015.10hx.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_227) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0xa8afc4;

  sprintf(str, "num = %-+ #015.10hx.", n);
  s21_sprintf(str1, "num = %-+ #015.10hx.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_228) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 072;

  sprintf(str, "num = %-+ #015.10x.", n);
  s21_sprintf(str1, "num = %-+ #015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_229) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -072;

  sprintf(str, "num = %-+ #015.10x.", n);
  s21_sprintf(str1, "num = %-+ #015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_230) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 072;

  sprintf(str, "num = %-+ #015.10hx.", n);
  s21_sprintf(str1, "num = %-+ #015.10hx.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_231) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -072;

  sprintf(str, "num = %-+ #015.10hx.", n);
  s21_sprintf(str1, "num = %-+ #015.10hx.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_232) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 2147483647;

  sprintf(str, "num = %-+ #015.10x.", n);
  s21_sprintf(str1, "num = %-+ #015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_233) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -2147483647;

  sprintf(str, "num = %-+ #015.10x.", n);
  s21_sprintf(str1, "num = %-+ #015.10x.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_234) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 2147483647;

  sprintf(str, "num = %-+ #015.10hx.", n);
  s21_sprintf(str1, "num = %-+ #015.10hx.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_235) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -2147483647;

  sprintf(str, "num = %-+ #015.10hx.", n);
  s21_sprintf(str1, "num = %-+ #015.10hx.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_236) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0xa8afc47;

  sprintf(str, "num = %-+ #015.10hX.", n);
  s21_sprintf(str1, "num = %-+ #015.10hX.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_237) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0xa8afc47;

  sprintf(str, "num = %-+ #015.10hX.", n);
  s21_sprintf(str1, "num = %-+ #015.10hX.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_238) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 0xa8afc47;

  sprintf(str, "num = %-+ #015.10X.", n);
  s21_sprintf(str1, "num = %-+ #015.10X.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_x_239) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = -0xa8afc47;

  sprintf(str, "num = %-+ #015.10X.", n);
  s21_sprintf(str1, "num = %-+ #015.10X.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

Suite *s21_sprintf_x_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_sprintf_u");

  /* Core test case */
  tc_core = tcase_create("sprintf_test");

  tcase_add_test(tc_core, test_s21_sprintf_x_1);
  tcase_add_test(tc_core, test_s21_sprintf_x_2);
  tcase_add_test(tc_core, test_s21_sprintf_x_3);
  tcase_add_test(tc_core, test_s21_sprintf_x_4);
  tcase_add_test(tc_core, test_s21_sprintf_x_5);
  tcase_add_test(tc_core, test_s21_sprintf_x_6);
  tcase_add_test(tc_core, test_s21_sprintf_x_7);
  tcase_add_test(tc_core, test_s21_sprintf_x_8);
  tcase_add_test(tc_core, test_s21_sprintf_x_9);
  tcase_add_test(tc_core, test_s21_sprintf_x_10);
  tcase_add_test(tc_core, test_s21_sprintf_x_11);
  tcase_add_test(tc_core, test_s21_sprintf_x_12);
  tcase_add_test(tc_core, test_s21_sprintf_x_13);
  tcase_add_test(tc_core, test_s21_sprintf_x_14);
  tcase_add_test(tc_core, test_s21_sprintf_x_15);
  tcase_add_test(tc_core, test_s21_sprintf_x_16);
  tcase_add_test(tc_core, test_s21_sprintf_x_17);
  tcase_add_test(tc_core, test_s21_sprintf_x_18);
  tcase_add_test(tc_core, test_s21_sprintf_x_19);
  tcase_add_test(tc_core, test_s21_sprintf_x_20);
  tcase_add_test(tc_core, test_s21_sprintf_x_21);
  tcase_add_test(tc_core, test_s21_sprintf_x_22);
  tcase_add_test(tc_core, test_s21_sprintf_x_23);
  tcase_add_test(tc_core, test_s21_sprintf_x_24);
  tcase_add_test(tc_core, test_s21_sprintf_x_25);
  tcase_add_test(tc_core, test_s21_sprintf_x_26);
  tcase_add_test(tc_core, test_s21_sprintf_x_27);
  tcase_add_test(tc_core, test_s21_sprintf_x_28);
  tcase_add_test(tc_core, test_s21_sprintf_x_29);
  tcase_add_test(tc_core, test_s21_sprintf_x_30);
  tcase_add_test(tc_core, test_s21_sprintf_x_31);
  tcase_add_test(tc_core, test_s21_sprintf_x_32);
  tcase_add_test(tc_core, test_s21_sprintf_x_33);
  tcase_add_test(tc_core, test_s21_sprintf_x_34);
  tcase_add_test(tc_core, test_s21_sprintf_x_35);
  tcase_add_test(tc_core, test_s21_sprintf_x_36);
  tcase_add_test(tc_core, test_s21_sprintf_x_37);
  tcase_add_test(tc_core, test_s21_sprintf_x_38);
  tcase_add_test(tc_core, test_s21_sprintf_x_39);
  tcase_add_test(tc_core, test_s21_sprintf_x_40);
  tcase_add_test(tc_core, test_s21_sprintf_x_41);
  tcase_add_test(tc_core, test_s21_sprintf_x_42);
  tcase_add_test(tc_core, test_s21_sprintf_x_43);
  tcase_add_test(tc_core, test_s21_sprintf_x_44);
  tcase_add_test(tc_core, test_s21_sprintf_x_45);
  tcase_add_test(tc_core, test_s21_sprintf_x_46);
  tcase_add_test(tc_core, test_s21_sprintf_x_47);
  tcase_add_test(tc_core, test_s21_sprintf_x_48);
  tcase_add_test(tc_core, test_s21_sprintf_x_49);
  tcase_add_test(tc_core, test_s21_sprintf_x_50);
  tcase_add_test(tc_core, test_s21_sprintf_x_51);
  tcase_add_test(tc_core, test_s21_sprintf_x_52);
  tcase_add_test(tc_core, test_s21_sprintf_x_53);
  tcase_add_test(tc_core, test_s21_sprintf_x_54);
  tcase_add_test(tc_core, test_s21_sprintf_x_55);
  tcase_add_test(tc_core, test_s21_sprintf_x_56);
  tcase_add_test(tc_core, test_s21_sprintf_x_57);
  tcase_add_test(tc_core, test_s21_sprintf_x_58);
  tcase_add_test(tc_core, test_s21_sprintf_x_60);
  tcase_add_test(tc_core, test_s21_sprintf_x_61);
  tcase_add_test(tc_core, test_s21_sprintf_x_62);
  tcase_add_test(tc_core, test_s21_sprintf_x_63);
  tcase_add_test(tc_core, test_s21_sprintf_x_64);
  tcase_add_test(tc_core, test_s21_sprintf_x_65);
  tcase_add_test(tc_core, test_s21_sprintf_x_66);
  tcase_add_test(tc_core, test_s21_sprintf_x_67);
  tcase_add_test(tc_core, test_s21_sprintf_x_68);
  tcase_add_test(tc_core, test_s21_sprintf_x_69);
  tcase_add_test(tc_core, test_s21_sprintf_x_70);
  tcase_add_test(tc_core, test_s21_sprintf_x_71);
  tcase_add_test(tc_core, test_s21_sprintf_x_72);
  tcase_add_test(tc_core, test_s21_sprintf_x_73);
  tcase_add_test(tc_core, test_s21_sprintf_x_74);
  tcase_add_test(tc_core, test_s21_sprintf_x_75);
  tcase_add_test(tc_core, test_s21_sprintf_x_76);
  tcase_add_test(tc_core, test_s21_sprintf_x_77);
  tcase_add_test(tc_core, test_s21_sprintf_x_78);
  tcase_add_test(tc_core, test_s21_sprintf_x_79);
  tcase_add_test(tc_core, test_s21_sprintf_x_80);
  tcase_add_test(tc_core, test_s21_sprintf_x_81);
  tcase_add_test(tc_core, test_s21_sprintf_x_82);
  tcase_add_test(tc_core, test_s21_sprintf_x_83);
  tcase_add_test(tc_core, test_s21_sprintf_x_84);
  tcase_add_test(tc_core, test_s21_sprintf_x_85);
  tcase_add_test(tc_core, test_s21_sprintf_x_86);
  tcase_add_test(tc_core, test_s21_sprintf_x_87);
  tcase_add_test(tc_core, test_s21_sprintf_x_88);
  tcase_add_test(tc_core, test_s21_sprintf_x_89);
  tcase_add_test(tc_core, test_s21_sprintf_x_90);
  tcase_add_test(tc_core, test_s21_sprintf_x_100);
  tcase_add_test(tc_core, test_s21_sprintf_x_101);
  tcase_add_test(tc_core, test_s21_sprintf_x_102);
  tcase_add_test(tc_core, test_s21_sprintf_x_103);
  tcase_add_test(tc_core, test_s21_sprintf_x_104);
  tcase_add_test(tc_core, test_s21_sprintf_x_105);
  tcase_add_test(tc_core, test_s21_sprintf_x_106);
  tcase_add_test(tc_core, test_s21_sprintf_x_107);
  tcase_add_test(tc_core, test_s21_sprintf_x_108);
  tcase_add_test(tc_core, test_s21_sprintf_x_109);
  tcase_add_test(tc_core, test_s21_sprintf_x_110);
  tcase_add_test(tc_core, test_s21_sprintf_x_111);
  tcase_add_test(tc_core, test_s21_sprintf_x_112);
  tcase_add_test(tc_core, test_s21_sprintf_x_113);
  tcase_add_test(tc_core, test_s21_sprintf_x_114);
  tcase_add_test(tc_core, test_s21_sprintf_x_115);
  tcase_add_test(tc_core, test_s21_sprintf_x_116);
  tcase_add_test(tc_core, test_s21_sprintf_x_117);
  tcase_add_test(tc_core, test_s21_sprintf_x_118);
  tcase_add_test(tc_core, test_s21_sprintf_x_119);
  tcase_add_test(tc_core, test_s21_sprintf_x_120);
  tcase_add_test(tc_core, test_s21_sprintf_x_121);
  tcase_add_test(tc_core, test_s21_sprintf_x_122);
  tcase_add_test(tc_core, test_s21_sprintf_x_123);
  tcase_add_test(tc_core, test_s21_sprintf_x_124);
  tcase_add_test(tc_core, test_s21_sprintf_x_125);
  tcase_add_test(tc_core, test_s21_sprintf_x_126);
  tcase_add_test(tc_core, test_s21_sprintf_x_127);
  tcase_add_test(tc_core, test_s21_sprintf_x_128);
  tcase_add_test(tc_core, test_s21_sprintf_x_129);
  tcase_add_test(tc_core, test_s21_sprintf_x_130);
  tcase_add_test(tc_core, test_s21_sprintf_x_131);
  tcase_add_test(tc_core, test_s21_sprintf_x_132);
  tcase_add_test(tc_core, test_s21_sprintf_x_133);
  tcase_add_test(tc_core, test_s21_sprintf_x_134);
  tcase_add_test(tc_core, test_s21_sprintf_x_135);
  tcase_add_test(tc_core, test_s21_sprintf_x_136);
  tcase_add_test(tc_core, test_s21_sprintf_x_137);
  tcase_add_test(tc_core, test_s21_sprintf_x_138);
  tcase_add_test(tc_core, test_s21_sprintf_x_139);
  tcase_add_test(tc_core, test_s21_sprintf_x_140);
  tcase_add_test(tc_core, test_s21_sprintf_x_141);
  tcase_add_test(tc_core, test_s21_sprintf_x_142);
  tcase_add_test(tc_core, test_s21_sprintf_x_143);
  tcase_add_test(tc_core, test_s21_sprintf_x_144);
  tcase_add_test(tc_core, test_s21_sprintf_x_145);
  tcase_add_test(tc_core, test_s21_sprintf_x_146);
  tcase_add_test(tc_core, test_s21_sprintf_x_147);
  tcase_add_test(tc_core, test_s21_sprintf_x_148);
  tcase_add_test(tc_core, test_s21_sprintf_x_149);
  tcase_add_test(tc_core, test_s21_sprintf_x_150);
  tcase_add_test(tc_core, test_s21_sprintf_x_151);
  tcase_add_test(tc_core, test_s21_sprintf_x_152);
  tcase_add_test(tc_core, test_s21_sprintf_x_153);
  tcase_add_test(tc_core, test_s21_sprintf_x_154);
  tcase_add_test(tc_core, test_s21_sprintf_x_155);
  tcase_add_test(tc_core, test_s21_sprintf_x_156);
  tcase_add_test(tc_core, test_s21_sprintf_x_157);
  tcase_add_test(tc_core, test_s21_sprintf_x_158);
  tcase_add_test(tc_core, test_s21_sprintf_x_159);
  tcase_add_test(tc_core, test_s21_sprintf_x_160);
  tcase_add_test(tc_core, test_s21_sprintf_x_161);
  tcase_add_test(tc_core, test_s21_sprintf_x_162);
  tcase_add_test(tc_core, test_s21_sprintf_x_163);
  tcase_add_test(tc_core, test_s21_sprintf_x_164);
  tcase_add_test(tc_core, test_s21_sprintf_x_165);
  tcase_add_test(tc_core, test_s21_sprintf_x_166);
  tcase_add_test(tc_core, test_s21_sprintf_x_167);
  tcase_add_test(tc_core, test_s21_sprintf_x_168);
  tcase_add_test(tc_core, test_s21_sprintf_x_169);
  tcase_add_test(tc_core, test_s21_sprintf_x_170);
  tcase_add_test(tc_core, test_s21_sprintf_x_171);
  tcase_add_test(tc_core, test_s21_sprintf_x_172);
  tcase_add_test(tc_core, test_s21_sprintf_x_173);
  tcase_add_test(tc_core, test_s21_sprintf_x_174);
  tcase_add_test(tc_core, test_s21_sprintf_x_175);
  tcase_add_test(tc_core, test_s21_sprintf_x_176);
  tcase_add_test(tc_core, test_s21_sprintf_x_177);
  tcase_add_test(tc_core, test_s21_sprintf_x_178);
  tcase_add_test(tc_core, test_s21_sprintf_x_179);
  tcase_add_test(tc_core, test_s21_sprintf_x_180);
  tcase_add_test(tc_core, test_s21_sprintf_x_181);
  tcase_add_test(tc_core, test_s21_sprintf_x_182);
  tcase_add_test(tc_core, test_s21_sprintf_x_183);
  tcase_add_test(tc_core, test_s21_sprintf_x_184);
  tcase_add_test(tc_core, test_s21_sprintf_x_185);
  tcase_add_test(tc_core, test_s21_sprintf_x_186);
  tcase_add_test(tc_core, test_s21_sprintf_x_187);
  tcase_add_test(tc_core, test_s21_sprintf_x_188);
  tcase_add_test(tc_core, test_s21_sprintf_x_189);
  tcase_add_test(tc_core, test_s21_sprintf_x_190);
  tcase_add_test(tc_core, test_s21_sprintf_x_191);
  tcase_add_test(tc_core, test_s21_sprintf_x_192);
  tcase_add_test(tc_core, test_s21_sprintf_x_193);
  tcase_add_test(tc_core, test_s21_sprintf_x_194);
  tcase_add_test(tc_core, test_s21_sprintf_x_195);
  tcase_add_test(tc_core, test_s21_sprintf_x_196);
  tcase_add_test(tc_core, test_s21_sprintf_x_197);
  tcase_add_test(tc_core, test_s21_sprintf_x_198);
  tcase_add_test(tc_core, test_s21_sprintf_x_199);
  tcase_add_test(tc_core, test_s21_sprintf_x_200);
  tcase_add_test(tc_core, test_s21_sprintf_x_201);
  tcase_add_test(tc_core, test_s21_sprintf_x_202);
  tcase_add_test(tc_core, test_s21_sprintf_x_203);
  tcase_add_test(tc_core, test_s21_sprintf_x_204);
  tcase_add_test(tc_core, test_s21_sprintf_x_205);
  tcase_add_test(tc_core, test_s21_sprintf_x_206);
  tcase_add_test(tc_core, test_s21_sprintf_x_207);
  tcase_add_test(tc_core, test_s21_sprintf_x_208);
  tcase_add_test(tc_core, test_s21_sprintf_x_209);
  tcase_add_test(tc_core, test_s21_sprintf_x_210);
  tcase_add_test(tc_core, test_s21_sprintf_x_211);
  tcase_add_test(tc_core, test_s21_sprintf_x_212);
  tcase_add_test(tc_core, test_s21_sprintf_x_213);
  tcase_add_test(tc_core, test_s21_sprintf_x_214);
  tcase_add_test(tc_core, test_s21_sprintf_x_215);
  tcase_add_test(tc_core, test_s21_sprintf_x_216);
  tcase_add_test(tc_core, test_s21_sprintf_x_217);
  tcase_add_test(tc_core, test_s21_sprintf_x_218);
  tcase_add_test(tc_core, test_s21_sprintf_x_219);
  tcase_add_test(tc_core, test_s21_sprintf_x_220);
  tcase_add_test(tc_core, test_s21_sprintf_x_221);
  tcase_add_test(tc_core, test_s21_sprintf_x_222);
  tcase_add_test(tc_core, test_s21_sprintf_x_223);
  tcase_add_test(tc_core, test_s21_sprintf_x_225);
  tcase_add_test(tc_core, test_s21_sprintf_x_226);
  tcase_add_test(tc_core, test_s21_sprintf_x_227);
  tcase_add_test(tc_core, test_s21_sprintf_x_227);
  tcase_add_test(tc_core, test_s21_sprintf_x_229);
  tcase_add_test(tc_core, test_s21_sprintf_x_230);
  tcase_add_test(tc_core, test_s21_sprintf_x_231);
  tcase_add_test(tc_core, test_s21_sprintf_x_232);
  tcase_add_test(tc_core, test_s21_sprintf_x_233);
  tcase_add_test(tc_core, test_s21_sprintf_x_234);
  tcase_add_test(tc_core, test_s21_sprintf_x_235);
  tcase_add_test(tc_core, test_s21_sprintf_x_236);
  tcase_add_test(tc_core, test_s21_sprintf_x_237);
  tcase_add_test(tc_core, test_s21_sprintf_x_238);
  tcase_add_test(tc_core, test_s21_sprintf_x_239);

  suite_add_tcase(s, tc_core);

  return s;
}

// int main() {
//   Suite *s = s21_sprintf_x_suite();
//   int number_failed = 0;
//   SRunner *sr;

//   sr = srunner_create(s);
//   srunner_run_all(sr, CK_NORMAL);
//   number_failed = srunner_ntests_failed(sr);
//   srunner_free(sr);

//   return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
// }