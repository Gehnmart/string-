#include <stdio.h>

#include "./test_sprintf.h"
/* specifier d */

START_TEST(test_s21_sprintf_u_1) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  short unsigned int n = 1;
  sprintf(str, "num = %u/.", n);
  s21_sprintf(str1, "num = %u/.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_2) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long unsigned int n = 2147483647;
  sprintf(str, "num = %u.", n);
  s21_sprintf(str1, "num = %u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_3) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %u.", n);
  s21_sprintf(str1, "num = %u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_4) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);

  sprintf(str, "num = %u.", -21474836);
  s21_sprintf(str1, "num = %u.", -21474836);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier d with one flag */

START_TEST(test_s21_sprintf_u_5) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-u.", n);
  s21_sprintf(str1, "num = %-u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_6) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+u.", n);
  s21_sprintf(str1, "num = %+u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_7) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = % u.", n);
  s21_sprintf(str1, "num = % u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_8) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %#u.", n);
  s21_sprintf(str1, "num = %#u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_9) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %0u.", n);
  s21_sprintf(str1, "num = %0u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier u with some flags */
/* 2 flags */

START_TEST(test_s21_sprintf_u_10) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+u.", n);
  s21_sprintf(str1, "num = %-+u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_11) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %- u.", n);
  s21_sprintf(str1, "num = %- u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_12) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-#u.", n);
  s21_sprintf(str1, "num = %-#u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_13) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-0u.", n);
  s21_sprintf(str1, "num = %-0u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_14) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ u.", n);
  s21_sprintf(str1, "num = %+ u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_15) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+#u.", n);
  s21_sprintf(str1, "num = %+#u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_16) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ u.", n);
  s21_sprintf(str1, "num = %+ u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_17) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = % #u.", n);
  s21_sprintf(str1, "num = % #u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_18) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = % 0u.", n);
  s21_sprintf(str1, "num = % 0u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_19) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %#0u.", n);
  s21_sprintf(str1, "num = %#0u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_u_20) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ u.", n);
  s21_sprintf(str1, "num = %-+ u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_21) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+#u.", n);
  s21_sprintf(str1, "num = %-+#u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_22) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+0u.", n);
  s21_sprintf(str1, "num = %-+0u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_23) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ #u.", n);
  s21_sprintf(str1, "num = %+ #u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_24) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ 0u.", n);
  s21_sprintf(str1, "num = %+ 0u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_25) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = % #0u.", n);
  s21_sprintf(str1, "num = % #0u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_u_26) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ #u.", n);
  s21_sprintf(str1, "num = %-+ #u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_27) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ 0u.", n);
  s21_sprintf(str1, "num = %-+ 0u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_28) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ #0u.", n);
  s21_sprintf(str1, "num = %+ #0u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_29) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ #0u.", n);
  s21_sprintf(str1, "num = %-+ #0u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

/* specifier u with precision */

START_TEST(test_s21_sprintf_u_30) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %.10u.", n);
  s21_sprintf(str1, "num = %.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_31) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %.*u.", 10, n);
  s21_sprintf(str1, "num = %.*u.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier u with precision anu flags */

START_TEST(test_s21_sprintf_u_32) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-.10u.", n);
  s21_sprintf(str1, "num = %-.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_33) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+.10u.", n);
  s21_sprintf(str1, "num = %+.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_34) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = % .10u.", n);
  s21_sprintf(str1, "num = % .10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_35) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %#.10u.", n);
  s21_sprintf(str1, "num = %#.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_36) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %0.10u.", n);
  s21_sprintf(str1, "num = %0.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_37) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+.10u.", n);
  s21_sprintf(str1, "num = %-+.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_38) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %- .10u.", n);
  s21_sprintf(str1, "num = %- .10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_39) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-#.10u.", n);
  s21_sprintf(str1, "num = %-#.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_40) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-0.10u.", n);
  s21_sprintf(str1, "num = %-0.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_41) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ .10u.", n);
  s21_sprintf(str1, "num = %+ .10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_42) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+#.10u.", n);
  s21_sprintf(str1, "num = %+#.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_43) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ .10u.", n);
  s21_sprintf(str1, "num = %+ .10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_44) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = % #.10u.", n);
  s21_sprintf(str1, "num = % #.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_45) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = % 0.10u.", n);
  s21_sprintf(str1, "num = % 0.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_46) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %#0.10u.", n);
  s21_sprintf(str1, "num = %#0.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_u_47) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ .10u.", n);
  s21_sprintf(str1, "num = %-+ .10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_48) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+#.10u.", n);
  s21_sprintf(str1, "num = %-+#.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_49) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+0.10u.", n);
  s21_sprintf(str1, "num = %-+0.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_50) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ #.10u.", n);
  s21_sprintf(str1, "num = %+ #.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_51) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ 0.10u.", n);
  s21_sprintf(str1, "num = %+ 0.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_52) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = % #0.10u.", n);
  s21_sprintf(str1, "num = % #0.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_u_53) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ #.10u.", n);
  s21_sprintf(str1, "num = %-+ #.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_54) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ 0.10u.", n);
  s21_sprintf(str1, "num = %-+ 0.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_55) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ #0.10u.", n);
  s21_sprintf(str1, "num = %+ #0.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_56) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ #0.10u.", n);
  s21_sprintf(str1, "num = %-+ #0.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_u_57) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ #0.10u.", n);
  s21_sprintf(str1, "num = %-+ #0.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier u with wiuth */

START_TEST(test_s21_sprintf_u_58) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %10u.", n);
  s21_sprintf(str1, "num = %10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_59) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %*u.", 10, n);
  s21_sprintf(str1, "num = %*u.", 10, n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier u with wiuth anu flags */

START_TEST(test_s21_sprintf_u_60) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-15u.", n);
  s21_sprintf(str1, "num = %-15u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_61) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+15u.", n);
  s21_sprintf(str1, "num = %+15u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_62) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = % 15u.", n);
  s21_sprintf(str1, "num = % 15u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_63) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %#15u.", n);
  s21_sprintf(str1, "num = %#15u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_64) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %015u.", n);
  s21_sprintf(str1, "num = %015u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_65) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+15u.", n);
  s21_sprintf(str1, "num = %-+15u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_66) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %- 15u.", n);
  s21_sprintf(str1, "num = %- 15u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_67) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-#15u.", n);
  s21_sprintf(str1, "num = %-#15u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_68) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-015u.", n);
  s21_sprintf(str1, "num = %-015u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_69) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ 15u.", n);
  s21_sprintf(str1, "num = %+ 15u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_70) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+#15u.", n);
  s21_sprintf(str1, "num = %+#15u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_71) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ 15u.", n);
  s21_sprintf(str1, "num = %+ 15u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_72) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = % #15u.", n);
  s21_sprintf(str1, "num = % #15u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_73) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = % 015u.", n);
  s21_sprintf(str1, "num = % 015u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_74) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %#015u.", n);
  s21_sprintf(str1, "num = %#015u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_u_75) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ 15u.", n);
  s21_sprintf(str1, "num = %-+ 15u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_76) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+#15u.", n);
  s21_sprintf(str1, "num = %-+#15u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_77) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+015u.", n);
  s21_sprintf(str1, "num = %-+015u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_78) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ #15u.", n);
  s21_sprintf(str1, "num = %+ #15u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_79) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ 015u.", n);
  s21_sprintf(str1, "num = %+ 015u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_80) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = % #015u.", n);
  s21_sprintf(str1, "num = % #015u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_u_81) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ #15u.", n);
  s21_sprintf(str1, "num = %-+ #15u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_82) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ 015u.", n);
  s21_sprintf(str1, "num = %-+ 015u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_83) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ #015u.", n);
  s21_sprintf(str1, "num = %+ #015u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_84) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ #015u.", n);
  s21_sprintf(str1, "num = %-+ #015u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_u_85) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ #015u.", n);
  s21_sprintf(str1, "num = %-+ #015u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier u with precision anu wiuth */

START_TEST(test_s21_sprintf_u_86) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %10.10u.", n);
  s21_sprintf(str1, "num = %10.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_87) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %5.10u.", n);
  s21_sprintf(str1, "num = %5.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_88) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %10.5u.", n);
  s21_sprintf(str1, "num = %10.5u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier u with precision, wiuth anu flags */

START_TEST(test_s21_sprintf_u_89) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-15.10u.", n);
  s21_sprintf(str1, "num = %-15.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_90) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+15.10u.", n);
  s21_sprintf(str1, "num = %+15.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_91) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = % 15.10u.", n);
  s21_sprintf(str1, "num = % 15.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_92) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %#15.10u.", n);
  s21_sprintf(str1, "num = %#15.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_93) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %015.10u.", n);
  s21_sprintf(str1, "num = %015.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_94) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+15.10u.", n);
  s21_sprintf(str1, "num = %-+15.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_95) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %- 15.10u.", n);
  s21_sprintf(str1, "num = %- 15.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_96) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-#15.10u.", n);
  s21_sprintf(str1, "num = %-#15.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_97) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-015.10u.", n);
  s21_sprintf(str1, "num = %-015.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_98) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ 15.10u.", n);
  s21_sprintf(str1, "num = %+ 15.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_99) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+#15.10u.", n);
  s21_sprintf(str1, "num = %+#15.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_100) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ 15.10u.", n);
  s21_sprintf(str1, "num = %+ 15.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_101) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = % #15.10u.", n);
  s21_sprintf(str1, "num = % #15.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_102) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = % 015.10u.", n);
  s21_sprintf(str1, "num = % 015.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_103) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %#015.10u.", n);
  s21_sprintf(str1, "num = %#015.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 3 flags */

START_TEST(test_s21_sprintf_u_104) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ 15.10u.", n);
  s21_sprintf(str1, "num = %-+ 15.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_105) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+#15.10u.", n);
  s21_sprintf(str1, "num = %-+#15.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_106) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+015.10u.", n);
  s21_sprintf(str1, "num = %-+015.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_107) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ #15.10u.", n);
  s21_sprintf(str1, "num = %+ #15.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_108) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ 015.10u.", n);
  s21_sprintf(str1, "num = %+ 015.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_109) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = % #015.10u.", n);
  s21_sprintf(str1, "num = % #015.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 4 flags */

START_TEST(test_s21_sprintf_u_110) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ #15.10u.", n);
  s21_sprintf(str1, "num = %-+ #15.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_111) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ 015.10u.", n);
  s21_sprintf(str1, "num = %-+ 015.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_112) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %+ #015.10u.", n);
  s21_sprintf(str1, "num = %+ #015.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* 5 flags */

START_TEST(test_s21_sprintf_u_113) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 21474836;

  sprintf(str, "num = %-+ #015.10u.", n);
  s21_sprintf(str1, "num = %-+ #015.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

/* specifier u with length */

START_TEST(test_s21_sprintf_u_114) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  long unsigned int n = 2147483647;

  sprintf(str, "num = %-+ #015.10lu.", n);
  s21_sprintf(str1, "num = %-+ #015.10lu.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_115) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  short unsigned int n = 214;

  sprintf(str, "num = %-+ #015.10hu.", n);
  s21_sprintf(str1, "num = %-+ #015.10hu.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_116) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  short unsigned int n = 65535;

  sprintf(str, "num = %-+ #015.10hlu.", n);
  s21_sprintf(str1, "num = %-+ #015.10hlu.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_117) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned long int n = 4294967295;

  sprintf(str, "num = %-+ #015.10lu.", n);
  s21_sprintf(str1, "num = %-+ #015.10lu.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_118) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  int n = 2147483647;

  sprintf(str, "num = %-+ #015.10hu.", n);
  s21_sprintf(str1, "num = %-+ #015.10hu.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_119) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 072;

  sprintf(str, "num = %-+ #015.10u.", n);
  s21_sprintf(str1, "num = %-+ #015.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_120) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 072;

  sprintf(str, "num = %-+ #015.10hu.", n);
  s21_sprintf(str1, "num = %-+ #015.10hu.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_121) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 0xb72;

  sprintf(str, "num = %-+ #015.10u.", n);
  s21_sprintf(str1, "num = %-+ #015.10u.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

START_TEST(test_s21_sprintf_u_122) {
  char *str = malloc(sizeof(char) * 1000);
  char *str1 = malloc(sizeof(char) * 1000);
  unsigned int n = 0xb72;

  sprintf(str, "num = %-+ #015.10hu.", n);
  s21_sprintf(str1, "num = %-+ #015.10hu.", n);
  ck_assert_str_eq(str, str1);
  free(str);
  free(str1);
}
END_TEST

Suite *s21_sprintf_u_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_sprintf");

  /* Core test case */
  tc_core = tcase_create("sprintf_test_u");

  tcase_add_test(tc_core, test_s21_sprintf_u_1);
  tcase_add_test(tc_core, test_s21_sprintf_u_2);
  tcase_add_test(tc_core, test_s21_sprintf_u_3);
  tcase_add_test(tc_core, test_s21_sprintf_u_4);
  tcase_add_test(tc_core, test_s21_sprintf_u_5);
  tcase_add_test(tc_core, test_s21_sprintf_u_6);
  tcase_add_test(tc_core, test_s21_sprintf_u_7);
  tcase_add_test(tc_core, test_s21_sprintf_u_8);
  tcase_add_test(tc_core, test_s21_sprintf_u_9);
  tcase_add_test(tc_core, test_s21_sprintf_u_10);
  tcase_add_test(tc_core, test_s21_sprintf_u_11);
  tcase_add_test(tc_core, test_s21_sprintf_u_12);
  tcase_add_test(tc_core, test_s21_sprintf_u_13);
  tcase_add_test(tc_core, test_s21_sprintf_u_14);
  tcase_add_test(tc_core, test_s21_sprintf_u_15);
  tcase_add_test(tc_core, test_s21_sprintf_u_16);
  tcase_add_test(tc_core, test_s21_sprintf_u_17);
  tcase_add_test(tc_core, test_s21_sprintf_u_18);
  tcase_add_test(tc_core, test_s21_sprintf_u_19);
  tcase_add_test(tc_core, test_s21_sprintf_u_20);
  tcase_add_test(tc_core, test_s21_sprintf_u_21);
  tcase_add_test(tc_core, test_s21_sprintf_u_22);
  tcase_add_test(tc_core, test_s21_sprintf_u_23);
  tcase_add_test(tc_core, test_s21_sprintf_u_24);
  tcase_add_test(tc_core, test_s21_sprintf_u_25);
  tcase_add_test(tc_core, test_s21_sprintf_u_26);
  tcase_add_test(tc_core, test_s21_sprintf_u_27);
  tcase_add_test(tc_core, test_s21_sprintf_u_28);
  tcase_add_test(tc_core, test_s21_sprintf_u_29);
  tcase_add_test(tc_core, test_s21_sprintf_u_30);
  tcase_add_test(tc_core, test_s21_sprintf_u_31);
  tcase_add_test(tc_core, test_s21_sprintf_u_32);
  tcase_add_test(tc_core, test_s21_sprintf_u_33);
  tcase_add_test(tc_core, test_s21_sprintf_u_34);
  tcase_add_test(tc_core, test_s21_sprintf_u_35);
  tcase_add_test(tc_core, test_s21_sprintf_u_36);
  tcase_add_test(tc_core, test_s21_sprintf_u_37);
  tcase_add_test(tc_core, test_s21_sprintf_u_38);
  tcase_add_test(tc_core, test_s21_sprintf_u_39);
  tcase_add_test(tc_core, test_s21_sprintf_u_40);
  tcase_add_test(tc_core, test_s21_sprintf_u_41);
  tcase_add_test(tc_core, test_s21_sprintf_u_42);
  tcase_add_test(tc_core, test_s21_sprintf_u_43);
  tcase_add_test(tc_core, test_s21_sprintf_u_44);
  tcase_add_test(tc_core, test_s21_sprintf_u_45);
  tcase_add_test(tc_core, test_s21_sprintf_u_46);
  tcase_add_test(tc_core, test_s21_sprintf_u_47);
  tcase_add_test(tc_core, test_s21_sprintf_u_48);
  tcase_add_test(tc_core, test_s21_sprintf_u_49);
  tcase_add_test(tc_core, test_s21_sprintf_u_50);
  tcase_add_test(tc_core, test_s21_sprintf_u_51);
  tcase_add_test(tc_core, test_s21_sprintf_u_52);
  tcase_add_test(tc_core, test_s21_sprintf_u_53);
  tcase_add_test(tc_core, test_s21_sprintf_u_54);
  tcase_add_test(tc_core, test_s21_sprintf_u_55);
  tcase_add_test(tc_core, test_s21_sprintf_u_56);
  tcase_add_test(tc_core, test_s21_sprintf_u_57);
  tcase_add_test(tc_core, test_s21_sprintf_u_58);
  tcase_add_test(tc_core, test_s21_sprintf_u_60);
  tcase_add_test(tc_core, test_s21_sprintf_u_61);
  tcase_add_test(tc_core, test_s21_sprintf_u_62);
  tcase_add_test(tc_core, test_s21_sprintf_u_63);
  tcase_add_test(tc_core, test_s21_sprintf_u_64);
  tcase_add_test(tc_core, test_s21_sprintf_u_65);
  tcase_add_test(tc_core, test_s21_sprintf_u_66);
  tcase_add_test(tc_core, test_s21_sprintf_u_67);
  tcase_add_test(tc_core, test_s21_sprintf_u_68);
  tcase_add_test(tc_core, test_s21_sprintf_u_69);
  tcase_add_test(tc_core, test_s21_sprintf_u_70);
  tcase_add_test(tc_core, test_s21_sprintf_u_71);
  tcase_add_test(tc_core, test_s21_sprintf_u_72);
  tcase_add_test(tc_core, test_s21_sprintf_u_73);
  tcase_add_test(tc_core, test_s21_sprintf_u_74);
  tcase_add_test(tc_core, test_s21_sprintf_u_75);
  tcase_add_test(tc_core, test_s21_sprintf_u_76);
  tcase_add_test(tc_core, test_s21_sprintf_u_77);
  tcase_add_test(tc_core, test_s21_sprintf_u_78);
  tcase_add_test(tc_core, test_s21_sprintf_u_79);
  tcase_add_test(tc_core, test_s21_sprintf_u_80);
  tcase_add_test(tc_core, test_s21_sprintf_u_81);
  tcase_add_test(tc_core, test_s21_sprintf_u_82);
  tcase_add_test(tc_core, test_s21_sprintf_u_83);
  tcase_add_test(tc_core, test_s21_sprintf_u_84);
  tcase_add_test(tc_core, test_s21_sprintf_u_85);
  tcase_add_test(tc_core, test_s21_sprintf_u_86);
  tcase_add_test(tc_core, test_s21_sprintf_u_87);
  tcase_add_test(tc_core, test_s21_sprintf_u_88);
  tcase_add_test(tc_core, test_s21_sprintf_u_89);
  tcase_add_test(tc_core, test_s21_sprintf_u_90);
  tcase_add_test(tc_core, test_s21_sprintf_u_100);
  tcase_add_test(tc_core, test_s21_sprintf_u_101);
  tcase_add_test(tc_core, test_s21_sprintf_u_102);
  tcase_add_test(tc_core, test_s21_sprintf_u_103);
  tcase_add_test(tc_core, test_s21_sprintf_u_104);
  tcase_add_test(tc_core, test_s21_sprintf_u_105);
  tcase_add_test(tc_core, test_s21_sprintf_u_106);
  tcase_add_test(tc_core, test_s21_sprintf_u_107);
  tcase_add_test(tc_core, test_s21_sprintf_u_108);
  tcase_add_test(tc_core, test_s21_sprintf_u_109);
  tcase_add_test(tc_core, test_s21_sprintf_u_110);
  tcase_add_test(tc_core, test_s21_sprintf_u_111);
  tcase_add_test(tc_core, test_s21_sprintf_u_112);
  tcase_add_test(tc_core, test_s21_sprintf_u_113);
  tcase_add_test(tc_core, test_s21_sprintf_u_114);
  tcase_add_test(tc_core, test_s21_sprintf_u_115);
  tcase_add_test(tc_core, test_s21_sprintf_u_116);
  tcase_add_test(tc_core, test_s21_sprintf_u_117);
  tcase_add_test(tc_core, test_s21_sprintf_u_118);
  tcase_add_test(tc_core, test_s21_sprintf_u_119);
  tcase_add_test(tc_core, test_s21_sprintf_u_120);
  tcase_add_test(tc_core, test_s21_sprintf_u_121);
  tcase_add_test(tc_core, test_s21_sprintf_u_122);

  suite_add_tcase(s, tc_core);

  return s;
}
