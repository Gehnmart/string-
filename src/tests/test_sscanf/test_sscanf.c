#include <check.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

#include "../../s21_string.h"

#define assert_double(x, y, z) (fabsl(x - y) < z)
#define assert_long_double(x, y, z) (fabsl(x - y) < z)

#line 1 "tests/test_sscanf/test_sscanf_my.check"

START_TEST(sscanf_test_1) {
#line 3

  int res9 = 95;
  int res = res9;
  char str10[] = "617 hjgb 823984 3423412";
  s21_sscanf((char *)str10, "%u", &res9);
  sscanf((char *)str10, "%u", &res);
  ck_assert_uint_eq(res9, res);
}
END_TEST

START_TEST(sscanf_test_2) {
#line 12

  int res = 8, res5 = 1209;
  char str10[] = "0x233 617 hjgb 823984 3423412";
  s21_sscanf((char *)str10, "%i", &res5);
  sscanf((char *)str10, "%i", &res);
  ck_assert_int_eq(res5, res);
}
END_TEST

START_TEST(sscanf_test_3) {
#line 20
  char fstr[] = "%d";
  char str[] = "        ";
  int16_t res1 = 0;
  int16_t res2 = 0;
  res1 = s21_sscanf((char *)str, fstr, 0);
  res2 = sscanf((char *)str, fstr, 100);
  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_4) {
#line 28
  char fstr[] = "%d ";
  char str[] = "               ";
  int16_t a1 = 0, a2 = 0;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1);
  int16_t res2 = sscanf((char *)str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_5) {
#line 39
  char fstr[] = "%d ";
  char str[] = "   ";
  int16_t a1 = 0, a2 = 0;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1);
  int16_t res2 = sscanf((char *)str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_6) {
#line 49
  char fstr[] = "%c %c %c %c";
  char str[] = "   a     b c d";
  int16_t a1 = 0, a2 = 5, b1 = 0, b2 = 5, c1 = 0, c2 = 5, d1 = 0, d2 = 5;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);

  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_7) {
#line 65
  char fstr[] = "%c%c%c%c";
  char str[] = "abcd";
  int16_t a1 = 0, a2 = 5, b1 = 0, b2 = 5, c1 = 0, c2 = 5, d1 = 0, d2 = 5;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);

  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_8) {
#line 81
  char fstr[] = "%c %c %c      %c";
  char str[] = "1 a 3   c           ";
  int16_t a1 = 0, a2 = 5, b1 = 0, b2 = 5, c1 = 0, c2 = 5, d1 = 0, d2 = 5;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_9) {
#line 96
  char fstr[] = "%c %c %c %c";
  char str[] = "   000 0    ";
  int16_t a1 = 0, a2 = 5, b1 = 0, b2 = 5, c1 = 0, c2 = 5, d1 = 0, d2 = 5;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);

  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_10) {
#line 112
  char fstr[] = "%c %c %c %c";
  char str[] = "tttt";
  int16_t a1 = 0, a2 = 5, b1 = 0, b2 = 5, c1 = 0, c2 = 5, d1 = 0, d2 = 5;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);

  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_11) {
#line 128
  char fstr[] = "%c%c%c%c";
  char str[] = "\\\n\t\t\t";
  int16_t a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_12) {
#line 143
  char fstr[] = "%c %c %c %c";
  char str[] = "z ' ' /";
  int16_t a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_13) {
#line 158
  char fstr[] = "%c%*c%c%c";
  char str[] = "ABCD";
  int16_t a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1);

  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(sscanf_test_14) {
#line 173
  char fstr[] = "%c %c %c %c";
  char str[] = "z *'15 ";
  int16_t a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_16) {
#line 188
  char fstr[] = "%1c %c %c %0c";
  char str[] = "z *'17 ";
  int16_t a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_18) {
#line 203
  char fstr[] = "%c %c %c %c";
  char str[] = "z *'19 ";
  int16_t a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_20) {
#line 218
  char fstr[] = "%c %c %c %c";
  char str[] = "z *'21 ";
  int16_t a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_22) {
#line 233
  char fstr[] = "%*c%*c%*c%c";
  char str[] = "abcde";
  int16_t a1 = 0, a2 = 0;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1);
  int16_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_23) {
#line 245
  char fstr[] = "%*c%*c%*c%*c";
  char str[] = "   c ";
  int16_t a1 = 0, a2 = 0;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1);
  int16_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_24) {
#line 257
  char fstr[] = "%*c%*c%*c%c";
  char str[] = "abcd ";
  int16_t a1 = 0, a2 = 0;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1);
  int16_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_25) {
#line 269
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char fstr[] = "%ld %ld %ld %ld";
  const char str[] = "555 666 777 888";

  int32_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int32_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_26) {
#line 284
  int16_t a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "1337 21 5008 3000";
  const char fstr[] = "%hd %hd %hd %hd";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_27) {
#line 299
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "1337 21 5008 300004";
  const char fstr[] = "%ld %ld %ld %ld";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_28) {
#line 314
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "1337 21 5008 300004";
  const char fstr[] = "%1ld %3ld %1ld %4ld";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_29) {
#line 329
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = " 1337";
  const char fstr[] = "%1ld %1ld %1ld %1ld";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_30) {
#line 344
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "100000000000000005";
  const char fstr[] = "%3ld%ld%1ld%5ld";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_31) {
#line 359
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "1337";
  const char fstr[] = "%15ld %1ld %1ld %1ld";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_32) {
#line 374
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0;
  const char str[] = "1337123123 1 123412341234 1 999999 0";
  const char fstr[] = "%*d %ld %*d %ld %*d %ld";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(sscanf_test_33) {
#line 388
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "1337";
  const char fstr[] = "%15ld %1ld %1ld %1ld";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_34) {
#line 403
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "1337";
  const char fstr[] = "%15ld %1ld %1ld %1ld";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_35) {
#line 418
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "1337";
  const char fstr[] = "%15ld %1ld %1ld %1ld";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_36) {
#line 433
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "11337 ++3 -5 ------4";
  const char fstr[] = "%ld %ld %ld %ld";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_37) {
#line 448
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "-1337 +1 -1 -1";
  const char fstr[] = "%15ld %1ld %1ld %5ld";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_38) {
#line 463
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "-0 +0 +0 -0";
  const char fstr[] = "%2ld %1ld %1ld %1ld";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_39) {
#line 478
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "1 01 10 0";
  const char fstr[] = "%ld %ld %ld %ld";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_40) {
#line 493
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "300 500 -600 +700";
  const char fstr[] = "%li %li %li %li";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_41) {
#line 508
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "300500-600+700 111";
  const char fstr[] = "%li %ld %ld %li";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_42) {
#line 523
  long a1 = 0, a2 = 0, c1 = 0, c2 = 0;
  char b1 = 0, b2 = 0, d1 = 0, d2 = 0;
  const char str[] = "300500-600+700+400";
  const char fstr[] = "%li%c%li%c";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_43) {
#line 539
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "  55555 f f f5555555 ddd   4    3    1 ";
  const char fstr[] = "%li %ld %ld %li";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_44) {
#line 554
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "0xFFF 0xA123123 0x123123 0x0";
  const char fstr[] = "%li %ld %ld %li";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_45) {
#line 569
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = " 0xFFFF 0xf 0xf 0xf5555555 ddd   4    3    1 ";
  const char fstr[] = "%li %ld %ld %li";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_46) {
#line 584
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "  055555 0f 0f 0f5555555 0ddd   4    3    1 ";
  const char fstr[] = "%li %ld %ld %li";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_47) {
#line 599
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "  055555 0f 0f 0f5555555 0ddd   4    3    1 ";
  const char fstr[] = "%li %ld %ld %li";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_48) {
#line 614
  char s1[512] = {'\0'};
  char s2[512] = {'\0'};
  char s3[512] = {'\0'};
  char s4[512] = {'\0'};

  char s5[512] = {'\0'};
  char s6[512] = {'\0'};
  char s7[512] = {'\0'};
  char s8[512] = {'\0'};

  const char str[] = "Aboba Floppa Keppa Shleppa Anuroba";
  const char fstr[] = "%s %s %s %s";

  int16_t res1 = s21_sscanf((char *)str, fstr, s1, s2, s3, s4);
  int16_t res2 = sscanf((char *)str, fstr, s5, s6, s7, s8);

  ck_assert_int_eq(res1, res2);

  ck_assert_str_eq(s1, s5);
  ck_assert_str_eq(s2, s6);
  ck_assert_str_eq(s3, s7);
  ck_assert_str_eq(s4, s8);
}
END_TEST

START_TEST(sscanf_test_49) {
#line 639
  char s1[512] = {'\0'};
  char s2[512] = {'\0'};
  char s3[512] = {'\0'};
  char s4[512] = {'\0'};

  char s5[512] = {'\0'};
  char s6[512] = {'\0'};
  char s7[512] = {'\0'};
  char s8[512] = {'\0'};

  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;

  const char str[] = "Aboba 123 Floppa -3 Keppa 4444Shleppa 333Anuroba 3";
  const char fstr[] = "%s%ld%s%d%s%d%s";

  int16_t res1 =
      s21_sscanf((char *)str, fstr, s1, &a1, s2, &b1, s3, &c1, s4, &d1);
  int16_t res2 =
      s21_sscanf((char *)str, fstr, s5, &a2, s6, &b2, s7, &c2, s8, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);

  ck_assert_str_eq(s1, s5);
  ck_assert_str_eq(s2, s6);
  ck_assert_str_eq(s3, s7);
  ck_assert_str_eq(s4, s8);
}
END_TEST

START_TEST(sscanf_test_50) {
#line 670
  char s1[512] = {'\0'};
  char s2[512] = {'\0'};
  char s3[512] = {'\0'};
  char s4[512] = {'\0'};

  char s5[512] = {'\0'};
  char s6[512] = {'\0'};
  char s7[512] = {'\0'};
  char s8[512] = {'\0'};

  const char str[] = "aboba\tshlepa\tasdfasdf\tasdfasdf";
  const char fstr[] = "%s%s%s%s";

  int16_t res1 = s21_sscanf((char *)str, fstr, s1, s2, s3, s4);
  int16_t res2 = sscanf((char *)str, fstr, s5, s6, s7, s8);

  ck_assert_int_eq(res1, res2);

  ck_assert_str_eq(s1, s5);
  ck_assert_str_eq(s2, s6);
  ck_assert_str_eq(s3, s7);
  ck_assert_str_eq(s4, s8);
}
END_TEST

START_TEST(sscanf_test_51) {
#line 695
  char s1[512] = {'\0'};
  char s2[512] = {'\0'};
  char s3[512] = {'\0'};
  char s4[512] = {'\0'};

  char s5[512] = {'\0'};
  char s6[512] = {'\0'};
  char s7[512] = {'\0'};
  char s8[512] = {'\0'};

  const char str[] = "aboba\tkepaboba floppa shleppa koooppa ap p p p p";
  const char fstr[] = "%*s%*s%*s%*s";

  int16_t res1 = s21_sscanf((char *)str, fstr);
  int16_t res2 = sscanf((char *)str, fstr);

  ck_assert_int_eq(res1, res2);

  ck_assert_str_eq(s1, s5);
  ck_assert_str_eq(s2, s6);
  ck_assert_str_eq(s3, s7);
  ck_assert_str_eq(s4, s8);
}
END_TEST

START_TEST(sscanf_test_52) {
#line 720
  char s1[512] = {'\0'};
  char s2[512] = {'\0'};
  char s3[512] = {'\0'};
  char s4[512] = {'\0'};

  char s5[512] = {'\0'};
  char s6[512] = {'\0'};
  char s7[512] = {'\0'};
  char s8[512] = {'\0'};

  const char str[] = "aboba\tshlepa\tasdfasdf\tasdfasdf";
  const char fstr[] = "%1s%1s%1s%1s";

  int16_t res1 = s21_sscanf((char *)str, fstr, s1, s2, s3, s4);
  int16_t res2 = sscanf((char *)str, fstr, s5, s6, s7, s8);

  ck_assert_int_eq(res1, res2);

  ck_assert_str_eq(s1, s5);
  ck_assert_str_eq(s2, s6);
  ck_assert_str_eq(s3, s7);
  ck_assert_str_eq(s4, s8);
}
END_TEST

START_TEST(sscanf_test_53) {
#line 745
  char s1[512] = {'\0'};
  char s2[512] = {'\0'};
  char s3[512] = {'\0'};
  char s4[512] = {'\0'};

  char s5[512] = {'\0'};
  char s6[512] = {'\0'};
  char s7[512] = {'\0'};
  char s8[512] = {'\0'};

  const char str[] = "aboba\tshlepa\tasdfasdf\tasdfasdf";
  const char fstr[] = "%3s%3s%3s%3s";

  int16_t res1 = s21_sscanf((char *)str, fstr, s1, s2, s3, s4);
  int16_t res2 = sscanf((char *)str, fstr, s5, s6, s7, s8);

  ck_assert_int_eq(res1, res2);

  ck_assert_str_eq(s1, s5);
  ck_assert_str_eq(s2, s6);
  ck_assert_str_eq(s3, s7);
  ck_assert_str_eq(s4, s8);
}
END_TEST

START_TEST(sscanf_test_54) {
#line 770
  char s1[512] = {'\0'};
  char s2[512] = {'\0'};
  char s3[512] = {'\0'};
  char s4[512] = {'\0'};

  char s5[512] = {'\0'};
  char s6[512] = {'\0'};
  char s7[512] = {'\0'};
  char s8[512] = {'\0'};

  const char str[] = "aboba\tshlepa\tasdfasdf\tasdfasdf";
  const char fstr[] = "%150s%1s%1s\t%3s";

  int16_t res1 = s21_sscanf((char *)str, fstr, s1, s2, s3, s4);
  int16_t res2 = sscanf((char *)str, fstr, s5, s6, s7, s8);

  ck_assert_int_eq(res1, res2);

  ck_assert_str_eq(s1, s5);
  ck_assert_str_eq(s2, s6);
  ck_assert_str_eq(s3, s7);
  ck_assert_str_eq(s4, s8);
}
END_TEST

START_TEST(sscanf_test_55) {
#line 796
  unsigned long int a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0;
  long d1 = 0, d2 = 0;
  long double e1 = 0, e2 = 0;

  const char str[] =
      "4444444"
      "eeeeeee\teeeeeee";
  const char fstr[] = "%5s %1s %*s %*s %lu %s %lu %lu %ld %Lf %33s";

  char s1[512] = {'\0'};
  char s2[512] = {'\0'};
  char s3[512] = {'\0'};
  char s4[512] = {'\0'};
  char s5[512] = {'\0'};
  char s6[512] = {'\0'};
  char s7[512] = {'\0'};
  char s8[512] = {'\0'};
  char s9[512] = {'\0'};
  char s10[512] = {'\0'};

  int16_t res1 =
      s21_sscanf((char *)str, fstr, s7, s9, &a1, s5, &b1, &c1, &d1, &e1, s1);
  int16_t res2 =
      sscanf((char *)str, fstr, s8, s10, &a2, s6, &b2, &c2, &d2, &e2, s2);

  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(s1, s2);
  ck_assert_str_eq(s3, s4);
  ck_assert_str_eq(s5, s6);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_56) {
#line 830
  int d1 = 0, d2 = 0, b1 = 0, b2 = 0, a1 = 0, a2 = 0;
  long v1, v2;

  const char str[] = "1 1 1 1 1 -1";
  const char fstr[] = "%1s %5d %1s %1s %d %ld %d";

  char s1[512] = {'\0'};
  char s2[512] = {'\0'};
  char s3[512] = {'\0'};
  char s4[512] = {'\0'};
  char s5[512] = {'\0'};
  char s6[512] = {'\0'};

  int16_t res1 = s21_sscanf((char *)str, fstr, s1, &a1, s2, s3, &b1, &v1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, s4, &a2, s5, s6, &b2, &v2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(s1, s2);
  ck_assert_str_eq(s3, s4);
  ck_assert_str_eq(s5, s6);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_57) {
#line 856
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  int32_t n1 = 0, n2 = 5;

  const char str[512] = "50 160 70 80";
  const char fstr[512] = "%li %li %n %li %li";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &n1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &n2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(n1, n2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_58) {
#line 874
  int n1 = 1, n2 = 5;

  char s1[512] = {'\0'};
  char s2[512] = {'\0'};
  char s3[512] = {'\0'};
  char s5[512] = {'\0'};
  char s6[512] = {'\0'};
  char s7[512] = {'\0'};

  const char str[] = "cbobErobM fl? asdfasdflkasdf asdfasdf asdfasdf 88888";
  const char fstr[] = "%s %s %n %s";

  int32_t res1 = s21_sscanf((char *)str, fstr, s1, s2, &n1, s3);
  int32_t res2 = sscanf((char *)str, fstr, s5, s6, &n2, s7);

  ck_assert_int_eq(res1, res2);

  ck_assert_int_eq(n1, n2);
  ck_assert_str_eq(s1, s5);
  ck_assert_str_eq(s2, s6);
  ck_assert_str_eq(s3, s7);
}
END_TEST

START_TEST(sscanf_test_59) {
#line 898
  int n1 = 0, n2 = 5;

  const char str[512] = "50 60 70 80";
  const char fstr[512] = "%n";

  int16_t res1 = s21_sscanf((char *)str, fstr, &n1);
  int16_t res2 = sscanf((char *)str, fstr, &n2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(sscanf_test_60) {
#line 911
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  int32_t n1 = 0, n2 = 5;

  const char str[] = "50 60 70 80";
  const char fstr[] = "%li %li %n %li %li";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &n1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &n2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(n1, n2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_61) {
#line 929
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  int n1 = 0, n2 = 5;

  const char str[] = "50 60 70 80";
  const char fstr[] = "%li %li %n %li %li";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &n1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &n2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(n1, n2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_62) {
#line 947
  long double a1 = 1, a2 = 1, b1 = 1, b2 = 1, c1 = 1, c2 = 1, d1 = 1, d2 = 1;

  const char str[] = "53.1 -4.1135 41.3333 +2.0001";
  const char fstr[] = "%Lf %Lf %*Lf %Lf";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_long_double(a1, a2, 1e-6), 1);
  ck_assert_int_eq(assert_long_double(b1, b2, 1e-6), 1);
  ck_assert_int_eq(assert_long_double(c1, c2, 1e-6), 1);
  ck_assert_int_eq(assert_long_double(d1, d2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_63) {
#line 963
  long double a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;

  const char str[] = "0.00001 -4123123 4. .";
  const char fstr[] = "%Lf %Lf %Lf %Lf";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_long_double(a1, a2, 1e-6), 1);
  ck_assert_int_eq(assert_long_double(b1, b2, 1e-6), 1);
  ck_assert_int_eq(assert_long_double(c1, c2, 1e-6), 1);
  ck_assert_int_eq(assert_long_double(d1, d2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_64) {
#line 979
  float a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;

  const char str[] = ". . . .";
  const char fstr[] = "%f %f %f %f";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
  ck_assert_int_eq(assert_double(b1, b2, 1e-6), 1);
  ck_assert_int_eq(assert_double(c1, c2, 1e-6), 1);
  ck_assert_int_eq(assert_double(d1, d2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_65) {
#line 995

  long double a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0,
              e1 = 0, e2 = 0;

  const char str[] = "513.41 -4.14135 414.3333 +112.0001";
  const char fstr[] = "%Lf %Lf %Lf %Lf";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_long_double(a1, a2, 1e-6), 1);
  ck_assert_int_eq(assert_long_double(b1, b2, 1e-6), 1);
  ck_assert_int_eq(assert_long_double(c1, c2, 1e-6), 1);
  ck_assert_int_eq(assert_long_double(d1, d2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_66) {
#line 1013
#ifdef __linux__
  float a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0, e1 = 0,
        e2 = 0;
#else
  double a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0, e1 = 0,
         e2 = 0;
#endif

  const char str[] = "53.1 -4.1135 411231.333 +2.0001";
  const char fstr[] = "%*f %f %f %f";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
  ck_assert_int_eq(assert_double(b1, b2, 1e-6), 1);
  ck_assert_int_eq(assert_double(c1, c2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_67) {
#line 1032
  double a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0, e1 = 0,
         e2 = 0;

  const char str[] = "1.4441 1.31e+4 -3.31e-4 0.444e-5";
  const char fstr[] = "%G %G %G %G";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
  ck_assert_int_eq(assert_double(b1, b2, 1e-6), 1);
  ck_assert_int_eq(assert_double(c1, c2, 1e-6), 1);
  ck_assert_int_eq(assert_double(d1, d2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_68) {
#line 1048
  double a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0, e1 = 0,
         e2 = 0;

  const char str[] = "inf 1.31e+4 NaN 0.444e-5";
  const char fstr[] = "%G %G %G %G";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
  ck_assert_int_eq(assert_double(b1, b2, 1e-6), 1);
#ifdef __linux__
  ck_assert_int_eq(isnanf(c1), isnanf(c2));
#else
  ck_assert_int_eq(isnan(c1), isnan(c2));
#endif
  ck_assert_int_eq(assert_double(d1, d2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_69) {
#line 1069
  double a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0, e1 = 0,
         e2 = 0;

  const char str[] = "inF InF inF INF";
  const char fstr[] = "%G %G %G %G";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
  ck_assert_int_eq(assert_double(b1, b2, 1e-6), 1);
  ck_assert_int_eq(assert_double(c1, c2, 1e-6), 1);
  ck_assert_int_eq(assert_double(d1, d2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_70) {
#line 1085
#ifdef __linux__
  float a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0, e1 = 0,
        e2 = 0;
#else
  double a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0, e1 = 0,
         e2 = 0;
#endif

  const char str[] = "Nan NAN 0.0000 0";
  const char fstr[] = "%G %G %G %G";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
#ifdef __linux__
  ck_assert_int_eq(isnanf(a1), isnanf(a2));
  ck_assert_int_eq(isnanf(b1), isnanf(b2));
#else
  ck_assert_int_eq(isnan(a1), isnan(a2));
  ck_assert_int_eq(isnan(b1), isnan(b2));
#endif

  ck_assert_int_eq(assert_double(c1, c2, 1e-6), 1);
  ck_assert_int_eq(assert_double(d1, d2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_71) {
#line 1111
  double a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0, e1 = 0,
         e2 = 0;

  const char str[] =
      "nAN           INF                   -0.1111         1e-10";
  const char fstr[] = "%G %G %G %G";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(res1, res2);
#ifdef __linux__
  ck_assert_int_eq(isnanf(a1), isnanf(a2));
#else
  ck_assert_int_eq(isnan(a1), isnan(a2));
#endif
  ck_assert_int_eq(assert_double(b1, b2, 1e-6), 1);
  ck_assert_int_eq(assert_double(c1, c2, 1e-6), 1);
  ck_assert_int_eq(assert_double(d1, d2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_72) {
#line 1134
  unsigned short a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "-1337 +21 --5008 3000";
  const char fstr[] = "%hu %hu %hu %hu";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_uint_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
  ck_assert_uint_eq(c1, c2);
  ck_assert_uint_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_73) {
#line 1150
  unsigned long int a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0,
                    d2 = 0;
  const char str[] = "-1337 233333331 5008 3000";
  const char fstr[] = "%1llu %2llu %5llu %4llu";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_74) {
#line 1166
  unsigned long int a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0;
  long d1 = 0, d2 = 0;
  long double v1, v2;

  const char str[] =
      "\t\t\t\t\t\n 3      adsfdfa%$$$$`adfasdfasdfaszcvzcxvcv -1337 "
      "anurobich+ 21 -5008 -33000 0.3333";
  const char fstr[] = "%*s %*s %lu %s %lu %lu %ld %Lf";

  char s1[512] = {'\0'};
  char s2[512] = {'\0'};

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, s1, &b1, &c1, &d1, &v1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, s2, &b2, &c2, &d2, &v2);

  ck_assert_uint_eq(res1, res2);
  ck_assert_str_eq(s1, s2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
  ck_assert_uint_eq(c1, c2);
  ck_assert_uint_eq(d1, d2);
  ck_assert_int_eq(assert_long_double(v1, v2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_75) {
#line 1191
  unsigned short a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "-1337 +21 --5008 3000";
  const char fstr[] = "%hu %hu %hu %hu";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_76) {
#line 1207
  unsigned short a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "-1337 +21 --5008 3000";
  const char fstr[] = "%hu %hu %hu %hu";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_77) {
#line 1223
  unsigned short a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "-1337 +21 --5008 3000";
  const char fstr[] = "%hu %hu %hu %hu";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_78) {
#line 1239
  uint32_t a1, a2;
  const char str[] = "F";
  const char fstr[] = "%X";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_79) {
#line 1250
  uint32_t a1, a2;
  const char str[] = "0xFFFFFFFF";
  const char fstr[] = "%X";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_80) {
#line 1261
  uint32_t a1, a2;
  const char str[] = "0x";
  const char fstr[] = "%X";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_81) {
#line 1272
  uint32_t a1, a2;
  const char str[] = "0X";
  const char fstr[] = "%X";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_82) {
#line 1283
  uint32_t a1, a2;
  const char str[] = "";
  const char fstr[] = "%X";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_83) {
#line 1293
  uint32_t a1, a2;
  const char str[] = "qF";
  const char fstr[] = "%X";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_84) {
#line 1303
  uint32_t a1, a2;
  const char str[] = "          \n             \n     F";
  const char fstr[] = "%X";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_85) {
#line 1314
  uint16_t a1, a2;
  const char str[] = "F";
  const char fstr[] = "%hX";
  uint16_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint16_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_86) {
#line 1325
  unsigned long int a1, a2;
  const char str[] = "F";
  const char fstr[] = "%lX";
  uint16_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint16_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_87) {
#line 1336
  unsigned long int a1, a2;
  const char str[] = "F";
  const char fstr[] = "%lX";
  uint16_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint16_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_88) {
#line 1347
  uint32_t a1, a2;
  const char str[] = "0xFF0x0xFFF 0xFFxFF";
  const char fstr[] = "%X";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_89) {
#line 1358
  const char str[] = "0xFF0x0xFFF 0xFFxFF";
  const char fstr[] = "%*X";
  uint32_t res1 = s21_sscanf((char *)str, fstr);
  uint32_t res2 = sscanf((char *)str, fstr);

  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_90) {
#line 1367
  uint32_t a1, a2;
  const char str[] = "tqwqpl";
  const char fstr[] = "%X";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_91) {
#line 1377
  uint32_t a1, a2;
  const char str[] = "abcdef";
  const char fstr[] = "%X";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_92) {
#line 1388
  uint32_t a1, a2;
  const char str[] = "-f";
  const char fstr[] = "%X";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_93) {
#line 1399
  uint32_t a1, a2;
  const char str[] = "f";
  const char fstr[] = "%x";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_94) {
#line 1410
  uint32_t a1, a2;
  const char str[] = "0xfffffffffffffffffff";
  const char fstr[] = "%x";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_95) {
#line 1421
  uint32_t a1, a2;
  const char str[] = "0x";
  const char fstr[] = "%x";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_96) {
#line 1432
  uint32_t a1, a2;
  const char str[] = "0X";
  const char fstr[] = "%x";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_97) {
#line 1443
  uint32_t a1, a2;
  const char str[] = "";
  const char fstr[] = "%x";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_98) {
#line 1453
  uint32_t a1, a2;
  const char str[] = "qF";
  const char fstr[] = "%x";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_99) {
#line 1463
  uint32_t a1, a2;
  const char str[] = "          \n             \n     F";
  const char fstr[] = "%x";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_100) {
#line 1474
  uint16_t a1, a2;
  const char str[] = "ff";
  const char fstr[] = "%hx";
  uint16_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint16_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_101) {
#line 1485
  unsigned long int a1, a2;
  const char str[] = "ff";
  const char fstr[] = "%lx";
  uint16_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint16_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_102) {
#line 1496
  unsigned long int a1, a2;
  const char str[] = "faaaaaaf";
  const char fstr[] = "%lx";
  uint16_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint16_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  // ck_assert_unsigned long int_eq(a1, a2);
  // ck_assert_uint64_eq(a1, a2);
  ck_assert_uint_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_103) {
#line 1509
  uint32_t a1, a2;
  const char str[] = "0xFF0x0xFFF 0xFFxFF";
  const char fstr[] = "%x";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_104) {
#line 1520
  const char str[] = "0xFF0x0xFFF 0xFFxFF";
  const char fstr[] = "%*x";
  uint32_t res1 = s21_sscanf((char *)str, fstr);
  uint32_t res2 = sscanf((char *)str, fstr);

  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_105) {
#line 1529
  uint32_t a1, a2;
  const char str[] = "tqwqpl";
  const char fstr[] = "%x";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_106) {
#line 1539
  uint32_t a1, a2;
  const char str[] = "abcdef";
  const char fstr[] = "%x";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_107) {
#line 1550
  uint32_t a1, a2;
  const char str[] = "-f";
  const char fstr[] = "%x";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_108) {
#line 1561
  uint32_t a1, a2;
  const char str[] = "123531FFF";
  const char fstr[] = "%2X";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_109) {
#line 1572
  uint32_t a1, a2;
  const char str[] = "123531FFF";
  const char fstr[] = "%2x";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_110) {
#line 1583
  uint32_t a1, a2;
  const char str[] = "777";
  const char fstr[] = "%o";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_111) {
#line 1594
  uint32_t a1, a2;
  const char str[] = "0x7777777777777777777777";
  const char fstr[] = "%o";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_112) {
#line 1605
  uint32_t a1, a2;
  const char str[] = "0x";
  const char fstr[] = "%o";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_113) {
#line 1616
  uint32_t a1, a2;
  const char str[] = "0X";
  const char fstr[] = "%o";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_114) {
#line 1627
  uint32_t a1, a2;
  const char str[] = "";
  const char fstr[] = "%o";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_115) {
#line 1637
  uint32_t a1, a2;
  const char str[] = "q1";
  const char fstr[] = "%o";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_116) {
#line 1647
  uint32_t a1, a2;
  const char str[] = "          \n             \n     5";
  const char fstr[] = "%o";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_117) {
#line 1658
  uint16_t a1, a2;
  const char str[] = "12";
  const char fstr[] = "%ho";
  uint16_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint16_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_118) {
#line 1669
  unsigned long int a1, a2;
  const char str[] = "57234";
  const char fstr[] = "%lo";
  uint16_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint16_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_119) {
#line 1680
  unsigned long int a1, a2;
  const char str[] = "12356226137";
  const char fstr[] = "%lo";
  uint16_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint16_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_120) {
#line 1691
  uint32_t a1, a2;
  const char str[] = "0x12320x213x123213";
  const char fstr[] = "%o";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_121) {
#line 1702
  const char str[] = "521561612";
  const char fstr[] = "%*o";
  uint32_t res1 = s21_sscanf((char *)str, fstr);
  uint32_t res2 = sscanf((char *)str, fstr);

  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_122) {
#line 1711
  uint32_t a1, a2;
  const char str[] = "tqwqpl";
  const char fstr[] = "%o";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_123) {
#line 1721
  uint32_t a1, a2;
  const char str[] = "01234567";
  const char fstr[] = "%o";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_124) {
#line 1732
  uint32_t a1, a2;
  const char str[] = "-66";
  const char fstr[] = "%o";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_125) {
#line 1743
  uint32_t a1, a2;
  const char str[] = "123531";
  const char fstr[] = "%2o";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_126) {
#line 1754
  int32_t a1, a2;
  int32_t b1, b2;
  const char str[] = "12 keppa 12";
  const char fstr[] = "%d keppa %d";
  int32_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1);
  int32_t res2 = sscanf((char *)str, fstr, &a2, &b2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_127) {
#line 1767
  int32_t a1, a2;
  int32_t b1, b2;
  const char str[] = "12keppa12";
  const char fstr[] = "%dkeppa%d";
  int32_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1);
  int32_t res2 = sscanf((char *)str, fstr, &a2, &b2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_128) {
#line 1780
  int *a1 = 0, *a2 = 0, *b1 = 0, *b2 = 0, *c1 = 0, *c2 = 0, *d1 = 0, *d2 = 0;
  const char str[] = "0xFFFF 0xAAAA -7123 0x";
  const char fstr[] = "%p %p %p %p";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_ptr_eq(a1, a2);
  ck_assert_ptr_eq(b1, b2);
  ck_assert_ptr_eq(c1, c2);
  ck_assert_ptr_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_129) {
#line 1795
  int *a1 = 0, *a2 = 0, *b1 = 0, *b2 = 0, *c1 = 0, *c2 = 0, *d1 = 0, *d2 = 0;
  const char str[] = "0xFFFF 0xAAAA 0x7123 0xBBC1FF";
  const char fstr[] = "%p %p %p %p";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_ptr_eq(a1, a2);
  ck_assert_ptr_eq(b1, b2);
  ck_assert_ptr_eq(c1, c2);
  ck_assert_ptr_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_130) {
#line 1810
  int *a1 = 0, *a2 = 0, *b1 = 0, *b2 = 0, *c1 = 0, *c2 = 0, *d1 = 0, *d2 = 0;
  const char str[] = "0xFFFF 0xAAAA 0x7123 0xBBC1FF";
  const char fstr[] = "%p %p %p %p";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_ptr_eq(a1, a2);
  ck_assert_ptr_eq(b1, b2);
  ck_assert_ptr_eq(c1, c2);
  ck_assert_ptr_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_131) {
#line 1825
  int *a1 = 0, *a2 = 0, *b1 = 0, *b2 = 0, *c1 = 0, *c2 = 0, *d1 = 0, *d2 = 0;
  const char str[] = "0xFFFF 0xAAAA 0x7123 0xBBC1FF";
  const char fstr[] = "%p %p %p %p";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_ptr_eq(a1, a2);
  ck_assert_ptr_eq(b1, b2);
  ck_assert_ptr_eq(c1, c2);
  ck_assert_ptr_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_132) {
#line 1840
  int a1 = 0, a2 = 5, a3 = 3, a4 = 9;
  int32_t n1 = 500, n2 = 10000;

  const char str[] = "123123SkipMePlease!!!!123";
  const char fstr[] = "%dSkipMePlease!!!!%d %n";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &a3, &n1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &a4, &n2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(n1, n2);
  ck_assert_int_eq(a3, a4);
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(sscanf_test_133) {
#line 1856
  int32_t a1, a2;
  int32_t b1 = 0, b2 = 0;
  const char str[] = "12keppa12";
  const char fstr[] = "%dkeppapos%d";
  int32_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1);
  int32_t res2 = sscanf((char *)str, fstr, &a2, &b2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_134) {
#line 1869
  int32_t a1, a2;
  int32_t b1 = 80, b2 = 33;
  int32_t c1 = 55, c2 = 33;
  const char str[] = "12 % 13 % 14";
  const char fstr[] = "%d %% %d %% %d";
  int32_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1);
  int32_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(sscanf_test_135) {
#line 1884
  int32_t a1, a2;
  int32_t b1 = 33, b2 = 33;
  int32_t c1 = 33, c2 = 33;
  const char str[] = "12%13%14";
  const char fstr[] = "%d%%%d%%%-3d";
  int32_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1);
  int32_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(sscanf_test_136) {
#line 1899
  int32_t a1 = 1234, a2 = 33333;

  const char str[] = "%%%16";
  const char fstr[] = "%%%%%%%d";
  int32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  int32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_137) {
#line 1911
  const char str[] = "%%%";
  const char fstr[] = "%%%%%%";
  int32_t res1 = s21_sscanf((char *)str, fstr);
  int32_t res2 = sscanf((char *)str, fstr);

  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_138) {
#line 1920
  int32_t a1 = 1234, a2 = 33333;
  int32_t b1 = 1234, b2 = 33333;

  const char str[] = "%%123%888";
  const char fstr[] = "%%%%%d%%%d";
  int32_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1);
  int32_t res2 = sscanf((char *)str, fstr, &a2, &b2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_139) {
#line 1934
  int *a1 = 0, *a2 = 0, *b1 = 0, *b2 = 0, *c1 = 0, *c2 = 0, *d1 = 0, *d2 = 0;

  const char str[] = "0xFFFF 0xAAA 7123 0xBBC1FF";
  const char fstr[] = "%p %p %p %p";

  int32_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int32_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_ptr_eq(a1, a2);
  ck_assert_ptr_eq(b1, b2);
  ck_assert_ptr_eq(c1, c2);
  ck_assert_ptr_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_140) {
#line 1950
  char *a1 = 0, *a2 = 0, *b1 = 0, *b2 = 0, *c1 = 0, *c2 = 0, *d1 = 0, *d2 = 0;

  const char str[] = "0x4 0x3 0x2 0x1";
  const char fstr[] = "%p %p %p %p";

  int32_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int32_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_ptr_eq(a1, a2);
  ck_assert_ptr_eq(b1, b2);
  ck_assert_ptr_eq(c1, c2);
  ck_assert_ptr_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_141) {
#line 1966
  int *a1 = 0, *a2 = 0, *b1 = 0, *b2 = 0, *c1 = 0, *c2 = 0, *d1 = 0, *d2 = 0;

  const char str[] = "03033 0333 0123 0123 0x123 0xFFFFF 0xBBC1FF";
  const char fstr[] = "%p %p %p %p";

  int32_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int32_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_ptr_eq(a1, a2);
  ck_assert_ptr_eq(b1, b2);
  ck_assert_ptr_eq(c1, c2);
  ck_assert_ptr_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_142) {
#line 1982
  int *a1 = 0, *a2 = 0, *b1 = 0, *b2 = 0, *c1 = 0, *c2 = 0, *d1 = 0, *d2 = 0;

  const char str[] = "0xABCDEF 0xAAA 7123 0xBBC1FF";
  const char fstr[] = "%p %p %p %p";

  int32_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int32_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_ptr_eq(a1, a2);
  ck_assert_ptr_eq(b1, b2);
  ck_assert_ptr_eq(c1, c2);
  ck_assert_ptr_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_143) {
#line 1998
  int *a1 = 0, *a2 = 0, *b1 = 0, *b2 = 0, *c1 = 0, *c2 = 0, *d1 = 0, *d2 = 0;

  const char str[] = "NULL";
  const char fstr[] = "%p %p %p %p";

  int32_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int32_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_ptr_eq(a1, a2);
  ck_assert_ptr_eq(b1, b2);
  ck_assert_ptr_eq(c1, c2);
  ck_assert_ptr_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_144) {
#line 2014
  char a1, a2;
  char b1[256] = {'\0'};
  char b2[256] = {'\0'};
  double c1 = 0, c2 = 0;
  short int d1 = 5, d2 = 5;
  long int e1 = 5, e2 = 5;

  const char str[] = "$AmIIn%%sane? %\n\n\n \n \n \n\t   InF 0 %FIN9D-ME%";
  const char fstr[] = "%c%5s%%%*s %%  %G %hi %%FIN%ldDME%%";

  int32_t res1 = s21_sscanf((char *)str, fstr, &a1, b1, &c1, &d1, &e1);
  int32_t res2 = sscanf((char *)str, fstr, &a2, b2, &c2, &d2, &e2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_str_eq(b1, b2);
  ck_assert_int_eq(assert_double(c1, c2, 1e-6), 1);
  ck_assert_int_eq(d1, d2);
  ck_assert_int_eq(e1, e2);
}
END_TEST

START_TEST(sscanf_test_145) {
#line 2036
  char a1, a2;
  char b1, b2;
  char c1, c2;
  char d1, d2;

  const char str[] = "%%$Char!StressssT%%estus!&&&";
  const char fstr[] = "%% %*c%*c%*c%*c%*c %c %c %c %c ### %*c";

  int32_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int32_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_146) {
#line 2055
  char a1, a2;
  char b1, b2;
  char c1, c2;
  char d1, d2;
  const char str[] =
      "%%$Char!StressssVIm User Aboba %% %%% %%% %% % % %% % "
      "% % %% % % %% %T%%estus!%%&&&";
  const char fstr[] =
      "%% %*c%*c%*c%*c%*c %c %c %c %c %% %% %% %% %% %% %% "
      "%% %% %% %% %% %% %% %% %% ### %*c";

  int32_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int32_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(sscanf_test_147) {
#line 2073
  char fstr[] = " %*c";
  char str[] = "   ";
  char a1 = 5, a2 = 5, b1 = 5, b2 = 5;

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_148) {
#line 2084
  long a1 = 0, a2 = 0;
  const char str[] = "0000004";
  const char fstr[] = "%5ld";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1);
  int16_t res2 = sscanf((char *)str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_149) {
#line 2094
  long a1 = 0, a2 = 0;
  const char str[] = "-004";
  const char fstr[] = "%3ld";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1);
  int16_t res2 = sscanf((char *)str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_150) {
#line 2104
  double a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 3, d2 = 3;

  const char str[] = "0.00001 -4123123 4. .";
  const char fstr[] = "%lf %lf %lf %lf";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
  ck_assert_int_eq(assert_double(b1, b2, 1e-6), 1);
  ck_assert_int_eq(assert_double(c1, c2, 1e-6), 1);
  ck_assert_int_eq(assert_double(d1, d2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_151) {
#line 2119
  uint32_t a1 = 0, a2 = 0;
  const char str[] = "0xFFFFFFFF";
  const char fstr[] = "%X";
  uint32_t res1 = s21_sscanf((char *)str, fstr, &a1);
  uint32_t res2 = sscanf((char *)str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_152) {
#line 2129
  long double a1 = 1, a2 = 0, b1 = 1, b2 = 0, c1 = 1, c2 = 0, d1 = 1, d2 = 0;

  const char str[] = "53.1 -4.1135e6 41.3333 +2.0001";
  const char fstr[] = "%Lf %Lf %Lf %Lf";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2, &c2, &d2);
}
END_TEST

START_TEST(sscanf_test_153) {
#line 2138
  double a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0, e1 = 0,
         e2 = 0;
  const char str[] = "1.331 1.3331e4  +4 -3.3331e4 0.44334e3  -5 1.3331e2 ";
  const char fstr[] = "%G %G %G %G %G";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1, &c1, &d1, &e1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2, &c2, &d2, &e2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
  ck_assert_int_eq(assert_double(b1, b2, 1e-6), 1);
  ck_assert_int_eq(assert_double(c1, c2, 1e-6), 1);
  ck_assert_int_eq(assert_double(d1, d2, 1e-6), 1);
  ck_assert_int_eq(assert_double(e1, e2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_154) {
#line 2151
  long double a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0,
              e1 = 0, e2 = 0;
  const char str[] = "1.331 1.3331e4  +4 -3.3331e4 0.44334e3  -5 1.3331e2 ";
  const char fstr[] = "%lf %lf %lf %lf %lf";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1, &c1, &d1, &e1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2, &c2, &d2, &e2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
  ck_assert_int_eq(assert_double(b1, b2, 1e-6), 1);
  ck_assert_int_eq(assert_double(c1, c2, 1e-6), 1);
  ck_assert_int_eq(assert_double(d1, d2, 1e-6), 1);
  ck_assert_int_eq(assert_double(e1, e2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_155) {
#line 2164
  unsigned long a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "184467440737095516150 321";
  const char fstr[] = "%lu %lu";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_156) {
#line 2173
  unsigned int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "4294967295321120 0xffffffff";
  const char fstr[] = "%u %u";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_157) {
#line 2182
  double a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0, e1 = 0,
         e2 = 0;

  const char str[] = "-8e5 7.9e3  7.9e3 7.9e3";
  const char fstr[] = "%2G %G %G %G";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
  ck_assert_int_eq(assert_double(b1, b2, 1e-6), 1);
  ck_assert_int_eq(assert_double(c1, c2, 1e-6), 1);
  ck_assert_int_eq(assert_double(d1, d2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_158) {
#line 2199

  long double a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0,
              e1 = 0, e2 = 0;

  const char str[] = "6.7e5 7.9e3  7.9e3 7.9e3";
  const char fstr[] = "%3LG %LG %LG %LG";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_long_double(a1, a2, 1e-6), 1);
  ck_assert_int_eq(assert_long_double(b1, b2, 1e-6), 1);
  ck_assert_int_eq(assert_long_double(c1, c2, 1e-6), 1);
  ck_assert_int_eq(assert_long_double(d1, d2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_159) {
#line 2219
  unsigned long a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "184467440737095516150 321";
  const char fstr[] = "%li %li";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_160) {
#line 2229
  unsigned int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "4294967295321120 0xffffffff";
  const char fstr[] = "%i %i";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_161) {
#line 2239
  unsigned long a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "1446744073707775516150 321";
  const char fstr[] = "%lx %lx";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_162) {
#line 2249
  unsigned int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "4294967277775321120 0xffffffff";
  const char fstr[] = "%x %x";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_163) {
#line 2260
  unsigned long a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "1446744073707775516150 321";
  const char fstr[] = "%lx %lx";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_164) {
#line 2270
  unsigned int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "4294967277775321120 0xffffffff";
  const char fstr[] = "%o %o";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_165) {
#line 2280
  unsigned short a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "1446744073707775516150 321";
  const char fstr[] = "%hx %hx";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_166) {
#line 2290
  unsigned short a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "1446744073707775516150 321";
  const char fstr[] = "%ho %ho";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_167) {
#line 2300
  unsigned long a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "1446744073707775516150 321";
  const char fstr[] = "%lo %lo";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_168) {
#line 2310
  unsigned short a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "1446744073707775516150 321";
  const char fstr[] = "%hx %hx";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_169) {
#line 2322
  unsigned long a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "-184467440737095516150 321";
  const char fstr[] = "%li %li";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_170) {
#line 2332
  unsigned int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "-4294967295321120 0xffffffff";
  const char fstr[] = "%i %i";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_171) {
#line 2342
  unsigned long a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "-1446744073707775516150 321";
  const char fstr[] = "%lx %lx";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_172) {
#line 2352
  unsigned int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "-4294967277775321120 0xffffffff";
  const char fstr[] = "%x %x";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_173) {
#line 2363
  unsigned long a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "-1446744073707775516150 321";
  const char fstr[] = "%lx %lx";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_174) {
#line 2373
  unsigned int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "-4294967277775321120 0xffffffff";
  const char fstr[] = "%o %o";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_175) {
#line 2383
  unsigned short a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "-1446744073707775516150 321";
  const char fstr[] = "%hx %hx";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_176) {
#line 2393
  unsigned short a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "-1446744073707775516150 321";
  const char fstr[] = "%ho %ho";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_177) {
#line 2403
  unsigned long a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "-1446744073707775516150 321";
  const char fstr[] = "%lo %lo";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_178) {
#line 2413
  unsigned short a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char str[] = "-1446744073707775516150 321";
  const char fstr[] = "%hx %hx";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_179) {
#line 2423
  int x1 = 5, x2 = 5;
  int *a1 = &x1, *a2 = &x1, *b1 = &x2, *b2 = &x2;
  char str[] = "-4294967277775321120 0xffffffff";
  const char fstr[] = "%p %p";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_ptr_eq(a1, a2);
  ck_assert_ptr_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_180) {
#line 2434
  int x1 = 5, x2 = 5;
  int *a1 = &x1, *a2 = &x1, *b1 = &x2, *b2 = &x2;
  char str[] = "4294967277775321120 0xffffffff";
  const char fstr[] = "%p %p";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
  ck_assert_int_eq(res1, res2);
  ck_assert_ptr_eq(a1, a2);
  ck_assert_ptr_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_181) {
#line 2445
  int x1 = 5, x2 = 5;
  int *a1 = &x1, *a2 = &x1, *b1 = &x2, *b2 = &x2;
  char str[] = "0x4294967277775321120 (nil)  0x33";
  const char fstr[] = "%p %p";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2);
#ifdef __linux__
  ck_assert_int_eq(res1, res2);
  ck_assert_ptr_eq(a1, a2);
  ck_assert_ptr_eq(b1, b2);
#endif
}
END_TEST

START_TEST(sscanf_test_182) {
#line 2458
  int a1 = 5, a2 = 5;
  char str[] = "0x4294967277775321120 nil  0x";
  const char fstr[] = "%2i";
  int16_t res1 = s21_sscanf(str, fstr, &a1);
  int16_t res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_183) {
#line 2467
  int a1 = 5, a2 = 5;
  char str[] = "-4294967277775321120 nil  0x";
  const char fstr[] = "%4d";
  int16_t res1 = s21_sscanf(str, fstr, &a1);
  int16_t res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_184) {
#line 2476
  int a1 = 5, a2 = 5;
  char str[] = "+4294967277775321120 nil  0x";
  const char fstr[] = "%4d";
  int16_t res1 = s21_sscanf(str, fstr, &a1);
  int16_t res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_185) {
#line 2485
  int a1 = 5, a2 = 5;
  char str[] = "00000004294967277775321120 nil  0x";
  const char fstr[] = "%4d";
  int16_t res1 = s21_sscanf(str, fstr, &a1);
  int16_t res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_186) {
#line 2494
  int a1 = 5, a2 = 5;
  char str[] = "-00000004294967277775321120 nil  0x";
  const char fstr[] = "%4d";
  int16_t res1 = s21_sscanf(str, fstr, &a1);
  int16_t res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_187) {
#line 2503
  int a1 = 5, a2 = 5;
  char str[] = "+00000004294967277775321120 nil  0x";
  const char fstr[] = "%4d";
  int16_t res1 = s21_sscanf(str, fstr, &a1);
  int16_t res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_188) {
#line 2512
  int a1 = 5, a2 = 5;
  char str[] = "00000004234667277775321120 nil  0x";
  const char fstr[] = "%4i";
  int16_t res1 = s21_sscanf(str, fstr, &a1);
  int16_t res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_189) {
#line 2521
  int a1 = 5, a2 = 5, b1 = 5, b2 = 5, c1 = 5, c2 = 5;
  char str[] = "-0x4234667277775321120 (nil)  0x12";
  const char fstr[] = "%5x%x %x";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1, &c1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2, &c2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_190) {
#line 2532
  int a1 = 5, a2 = 5, b1 = 5, b2 = 5, c1 = 5, c2 = 5;
  char str[] = "+0x4234667277775321120 nil  0x67";
  const char fstr[] = "%x %x %x";
  int16_t res1 = s21_sscanf(str, fstr, &a1);
  int16_t res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(sscanf_test_191) {
#line 2543
  int a1 = 5, a2 = 5;
  char str[] = "0x+4234667277775321120 nil  0x";
  const char fstr[] = "%x";
  int16_t res1 = s21_sscanf(str, fstr, &a1);
  int16_t res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_192) {
#line 2552
  int a1 = 5, a2 = 5;
  char str[] = "0x-4234667277775321120 nil  0x";
  const char fstr[] = "%x";
  int16_t res1 = s21_sscanf(str, fstr, &a1);
  int16_t res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_193) {
#line 2561
  int a1 = 5, a2 = 5;
  char str[] = "-04234667277775321120 nil  0x";
  const char fstr[] = "%i";
  int16_t res1 = s21_sscanf(str, fstr, &a1);
  int16_t res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_194) {
#line 2570
  int a1 = 5, a2 = 5;
  char str[] = "-04234667277775321120 nil  0x";
  const char fstr[] = "%1i";
  int16_t res1 = s21_sscanf(str, fstr, &a1);
  int16_t res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_195) {
#line 2579
  int a1 = 5, a2 = 5;
  char str[] = "-04234667277775321120 nil  0x";
  const char fstr[] = "%3d";
  int16_t res1 = s21_sscanf(str, fstr, &a1);
  int16_t res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_196) {
#line 2588
  int a1 = 5, a2 = 5;
  char str[] = "-04234667277775321120 nil  0x";
  const char fstr[] = "%3x";
  int16_t res1 = s21_sscanf(str, fstr, &a1);
  int16_t res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
}
END_TEST

START_TEST(sscanf_test_197) {
#line 2597
  double a1 = 5, a2 = 5;
  char str[] = "-4234667277775321120 nil  0x";
  const char fstr[] = "%2e";
  int16_t res1 = s21_sscanf(str, fstr, &a1);
  int16_t res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_198) {
#line 2606
  unsigned short a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "1337 21 --5008 3000";
  const char fstr[] = "%0hu %0hu %1hu %2hu";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_199) {
#line 2622
  char fstr[] = "%2c %1c %3c %0c";
  char str[] = "   a     b c d";

  char s1[512] = {'\0'};
  char s2[512] = {'\0'};
  char s3[512] = {'\0'};
  char s4[512] = {'\0'};

  char s5[512] = {'\0'};
  char s6[512] = {'\0'};
  char s7[512] = {'\0'};
  char s8[512] = {'\0'};

  int16_t res1 = s21_sscanf((char *)str, fstr, s1, s2, s3, s4);
  int16_t res2 = sscanf((char *)str, fstr, s5, s6, s7, s8);

  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(s1, s5);
  ck_assert_str_eq(s2, s6);
  ck_assert_str_eq(s3, s7);
  ck_assert_str_eq(s4, s8);
}
END_TEST

START_TEST(sscanf_test_200) {
#line 2647
  char fstr[] = "%2c%1c%0c%2c";
  char str[] = "aacd";

  char s1[512] = {'\0'};
  char s2[512] = {'\0'};
  char s3[512] = {'\0'};
  char s4[512] = {'\0'};

  char s5[512] = {'\0'};
  char s6[512] = {'\0'};
  char s7[512] = {'\0'};
  char s8[512] = {'\0'};

  int16_t res1 = s21_sscanf((char *)str, fstr, s1, s2, s3, s4);
  int16_t res2 = sscanf((char *)str, fstr, s5, s6, s7, s8);

  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(s1, s5);
  ck_assert_str_eq(s2, s6);
  ck_assert_str_eq(s3, s7);
  ck_assert_str_eq(s4, s8);
}
END_TEST

START_TEST(sscanf_test_201) {
#line 2672
  unsigned short a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "+1337 21 --5008 3000";
  const char fstr[] = "";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_202) {
#line 2688
  unsigned short a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "";
  const char fstr[] = "%0hu %0hu %1hu %2hu";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_203) {
#line 2704
  unsigned short a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  const char str[] = "1337 21 --5008 3000";
  const char fstr[] = "%";

  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);
#ifdef __linux__
  ck_assert_int_eq(res1, res2);
#endif
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_204) {
#line 2721
  char fstr[] = "%2s %1s %3s %0s";
  char str[] = "   a     b c d";

  char s1[512] = {'\0'};
  char s2[512] = {'\0'};
  char s3[512] = {'\0'};
  char s4[512] = {'\0'};

  char s5[512] = {'\0'};
  char s6[512] = {'\0'};
  char s7[512] = {'\0'};
  char s8[512] = {'\0'};

  int16_t res1 = s21_sscanf((char *)str, fstr, s1, s2, s3, s4);
  int16_t res2 = sscanf((char *)str, fstr, s5, s6, s7, s8);

  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(s1, s5);
  ck_assert_str_eq(s2, s6);
  ck_assert_str_eq(s3, s7);
  ck_assert_str_eq(s4, s8);
}
END_TEST

START_TEST(sscanf_test_205) {
#line 2745
  char fstr[] = "%2c%1c%3c%0c";
  char str[] = "   a     b c d";

  char s1[512] = {'\0'};
  char s2[512] = {'\0'};
  char s3[512] = {'\0'};
  char s4[512] = {'\0'};

  char s5[512] = {'\0'};
  char s6[512] = {'\0'};
  char s7[512] = {'\0'};
  char s8[512] = {'\0'};

  int16_t res1 = s21_sscanf((char *)str, fstr, s1, s2, s3, s4);
  int16_t res2 = sscanf((char *)str, fstr, s5, s6, s7, s8);

  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(s1, s5);
  ck_assert_str_eq(s2, s6);
  ck_assert_str_eq(s3, s7);
  ck_assert_str_eq(s4, s8);
}
END_TEST

START_TEST(sscanf_test_206) {
#line 2770
  unsigned short a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;

  char fstr[] = "%2s %1s %3s %0s";
  char str[] = "   a     b c d";
  int16_t res1 = s21_sscanf((char *)str, fstr, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_207) {
#line 2785
#ifdef __linux__
  unsigned short a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;

  char fstr[] = "%2s %1s %3s %0s";
  char str[] = "   a     b c d";
  int16_t res1 = s21_sscanf((char *)str, s21_NULL, &a1, &b1, &c1, &d1);
  int16_t res2 = sscanf((char *)str, s21_NULL, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
#endif
}
END_TEST

START_TEST(sscanf_test_208) {
#line 2802
  int a1 = 5, a2 = 5, b1 = 5, b2 = 5, c1 = 5, c2 = 5;
  char str[] = "+0x4234667277775321120 (nil)  0x67";
  const char fstr[] = "%x %x %x";
  int16_t res1 = s21_sscanf(str, fstr, &a1, &b1, &c1);
  int16_t res2 = sscanf(str, fstr, &a2, &b2, &c2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(sscanf_test_209) {
#line 2813
  int a1 = 5, a2 = 5, b1 = 5, b2 = 5, c1 = 5, c2 = 5, d1 = 3, d2 = 3, e1 = 3,
      e2 = 3;
  char o11 = 3, o12 = 3, o13 = 3, o14 = 3;
  char s11[30] = {0};
  char s12[30] = {0};
  char s21[30] = {0};
  char s22[30] = {0};
  double da11 = 3, da12 = 3, da21 = 3, da22 = 3, da31 = 3, da32 = 3;
  char str[] = "  -000007tstststs0.5e9    %i, torg 324.123 yeop -0.66 t";
  const char fstr[] = "%d tstststs%g %n %%%*c, %3c%c %e %n ye\nop %e %n";
  int16_t res1 =
      s21_sscanf(str, fstr, &a1, &da11, &d1, s11, &o11, &da21, &c1, &da31, &e1);
  int16_t res2 =
      sscanf(str, fstr, &a2, &da12, &d2, s12, &o12, &da22, &c2, &da32, &e2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(d1, d2);
  ck_assert_int_eq(e1, e2);
  ck_assert_int_eq(o11, o12);
  ck_assert_int_eq(o13, o14);
  ck_assert_int_eq(res1, res2);

  ck_assert_str_eq(s11, s12);
  ck_assert_str_eq(s21, s22);
  ck_assert_int_eq(c1, c2);

  ck_assert_int_eq(assert_double(da11, da12, 1e-6), 1);
  ck_assert_int_eq(assert_double(da21, da22, 1e-6), 1);
  ck_assert_int_eq(assert_double(da31, da32, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_210) {
#line 2841
  char fstr[] = "%c %c\t%c\n%c";
  char str[] = "   w     x y z";
  int a1 = 0, a2 = 5, b1 = 0, b2 = 5, c1 = 0, c2 = 5, d1 = 0, d2 = 5;

  int res1 = s21_sscanf(str, fstr, &a1, &b1, &c1, &d1);

  int res2 = sscanf(str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_211) {
#line 2856
  char fstr[] = "%c %c %c\t%c";
  char str[] = "? S !   %   ";
  int a1 = 0, a2 = 5, b1 = 0, b2 = 5, c1 = 0, c2 = 5, d1 = 0, d2 = 5;

  int res1 = s21_sscanf(str, fstr, &a1, &b1, &c1, &d1);
  int res2 = sscanf(str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_212) {
#line 2870
  char format[] = "%10s %6c %%%c";
  char str[] = "12345678900x15 1 %23";
  char s1[20] = "111111111111";
  char s2[20] = "111111111111";
  char c1[20] = "222222222222";
  char c2[20] = "222222222222";
  char c3, c4;

  int res1 = s21_sscanf(str, format, s1, c1, &c3);
  int res2 = sscanf(str, format, s2, c2, &c4);

  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(s1, s2);
  ck_assert_str_eq(c1, c2);
  ck_assert_int_eq(c3, c4);
}
END_TEST

START_TEST(sscanf_test_213) {
#line 2887
  char format[] = "aaaaa%10s %6c %%%c";
  char str[] = "aaaaa12345678900x15 1 23";
  char s1[20] = "111111111111";
  char s2[20] = "111111111111";
  char c1[20] = "222222222222";
  char c2[20] = "222222222222";
  char c3 = '?', c4 = '?';

  int res1 = s21_sscanf(str, format, s1, c1, &c3);
  int res2 = sscanf(str, format, s2, c2, &c4);

  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(s1, s2);
  ck_assert_str_eq(c1, c2);
  ck_assert_int_eq(c3, c4);
}
END_TEST

START_TEST(sscanf_test_214) {
#line 2904
  char format[] = "aaaaa%100s %6c %%%c";
  char str[] = "aaaaa12345678900x15 1 23";
  char s1[20] = "111111111111";
  char s2[20] = "111111111111";
  char c1[20] = "222222222222";
  char c2[20] = "222222222222";
  char c3 = '?', c4 = '?';

  int res1 = s21_sscanf(str, format, s1, c1, &c3);
  int res2 = sscanf(str, format, s2, c2, &c4);

  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(s1, s2);
  ck_assert_str_eq(c1, c2);
  ck_assert_int_eq(c3, c4);
}
END_TEST

START_TEST(sscanf_test_215) {
#line 2921
  char format[] = "aaabb%*md%c";
  char str[] = "aaaaa 123";
  char c1 = '?', c2 = '?';
  int res1 = s21_sscanf(str, format, &c1);
  int res2 = sscanf(str, format, &c2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(sscanf_test_216) {
#line 2931
  char format[] = "aaabb%*d%c";
  char str[] = "";
  char c1 = '?', c2 = '?';
  int res1 = s21_sscanf(str, format, &c1);
  int res2 = sscanf(str, format, &c2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(sscanf_test_217) {
#line 2940
  char fstr[] = "%%n";
  char str[] = "%";
  int a1 = 0, a2 = 0;

  int res1 = s21_sscanf(str, fstr, &a1);
  int res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_218) {
#line 2949
  float a1 = 3, a2 = 3;
  const char str[] = "-";
  const char fstr[] = "%f";

  int res1 = s21_sscanf(str, fstr, &a1);
  int res2 = sscanf(str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_219) {
#line 2960
  double a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;

  const char str[] = "inf:INfinity--0.999-+3e-6";
  const char fstr[] = "%g:%g-%G-%G";

  int res1 = s21_sscanf(str, fstr, &a1, &b1, &c1, &d1);
  int res2 = sscanf(str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
  ck_assert_int_eq(assert_double(b1, b2, 1e-6), 1);
  ck_assert_int_eq(assert_double(c1, c2, 1e-6), 1);
  ck_assert_int_eq(assert_double(d1, d2, 1e-6), 1);
  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_220) {
#line 2975
  char format[] = "%%%Lf%%%Lf";
  char str[] =
      "%-12.34567020297654959%-"
      "195022851250969748602029765495943987241802399443014830624415310089772671"
      "36"
      "090130303978286402613298007974201591018016134764023276009379011613131727"
      "17"
      "568.000000";
  long double d1 = 0, d2 = 0, d3 = 0, d4 = 0;
  int res1 = s21_sscanf(str, format, &d1, &d3);
  int res2 = sscanf(str, format, &d2, &d4);

  ck_assert_int_eq(assert_long_double(d1, d2, 1e-6), 1);
  ck_assert_int_eq(assert_long_double(d3, d4, 1e130), 1);
  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_221) {
#line 2990
  long a1 = 0, a2 = 0, d1 = 0, d2 = 0;
  long b1 = 0, b2 = 0, c1 = 0, c2 = 0;
  const char fstr[] = "%ld %ld %ld %ld";
  const char str[] = "-555 +666 300004 888";

  int res1 = s21_sscanf(str, fstr, &a1, &b1, &c1, &d1);
  int res2 = sscanf(str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_222) {
#line 3005
  char format[] = "-%o %lo %lo %o";
  char str[] = "--635 63044711777 777777777777777777777 kkk";
  unsigned int o1 = 0, o2 = 0, o7 = 0, o8 = 0;
  long unsigned int o3 = 0, o4 = 0;
  long unsigned int o5 = 0, o6 = 0;
  int res1 = s21_sscanf(str, format, &o1, &o3, &o5, &o7);
  int res2 = sscanf(str, format, &o2, &o4, &o6, &o8);

  ck_assert_uint_eq(o1, o2);
  ck_assert_uint_eq(o3, o4);
  ck_assert_uint_eq(o5, o6);
  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_223) {
#line 3019
  char format[] = "-%x %lX %lX %x";
  char str[] = "--f9 2D798A5F8C5E 7FFFFFFFFFFFFFFF kkk";
  unsigned int x1 = 0, x2 = 0, x7 = 0, x8 = 0;
  long unsigned int x3 = 0, x4 = 0;
  long unsigned int x5 = 0, x6 = 0;
  int res1 = s21_sscanf(str, format, &x1, &x3, &x5, &x7);
  int res2 = sscanf(str, format, &x2, &x4, &x6, &x8);

  ck_assert_uint_eq(x1, x2);
  ck_assert_uint_eq(x3, x4);
  ck_assert_uint_eq(x5, x6);
  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_224) {
#line 3033
  char format[] = "%%%lu%%%u %lu";
  char str[] =
      "%-1234567020297654959%-1950228512509697 "
      "486020297654959439872418023994430148306244153100897726713609";
  unsigned int u1 = 0, u2 = 0;
  long unsigned int u3 = 0, u4 = 0;
  long unsigned int u5 = 0, u6 = 0;
  int res1 = s21_sscanf(str, format, &u3, &u1, &u5);
  int res2 = sscanf(str, format, &u4, &u2, &u6);

  ck_assert_uint_eq(u1, u2);
  ck_assert_uint_eq(u3, u4);
  ck_assert_uint_eq(u5, u6);
  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_225) {
#line 3049
  char format[] = "%%%lu%%%u %lu";
  char str[] = "%123456%1950228 486020297654959439";
  unsigned int u1 = 0, u2 = 0;
  long unsigned int u3 = 0, u4 = 0;
  long unsigned int u5 = 0, u6 = 0;
  int res1 = s21_sscanf(str, format, &u3, &u1, &u5);
  int res2 = sscanf(str, format, &u4, &u2, &u6);

  ck_assert_uint_eq(u1, u2);
  ck_assert_uint_eq(u3, u4);
  ck_assert_uint_eq(u5, u6);
  ck_assert_int_eq(res1, res2);
}
END_TEST

START_TEST(sscanf_test_226) {
#line 3063
  unsigned long int a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0,
                    d2 = 0;
  const char str[] = "1337 23333-3331";
  const char fstr[] = "%1lu %3lu %5lu %4lu";

  int res1 = s21_sscanf(str, fstr, &a1, &b1, &c1, &d1);
  int res2 = sscanf(str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_uint_eq(a1, a2);
  ck_assert_uint_eq(b1, b2);
  ck_assert_uint_eq(c1, c2);
  ck_assert_uint_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_227) {
#line 3078
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0;
  const char str[] = "01 -123 +723";
  const char fstr[] = "%li %li %li";

  int res1 = s21_sscanf(str, fstr, &a1, &b1, &c1);
  int res2 = sscanf(str, fstr, &a2, &b2, &c2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(sscanf_test_228) {
#line 3091
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char c1 = 0, c2 = 0;
  const char str[] = "500-600";
  const char fstr[] = "%li%c%li";

  int res1 = s21_sscanf(str, fstr, &a1, &c1, &b1);
  int res2 = sscanf(str, fstr, &a2, &c2, &b2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(sscanf_test_229) {
#line 3105
  long a1 = 0, a2 = 0;
  int b1 = 0, b2 = 0;
  const char str[] = "  055555 023";
  const char fstr[] = "%li %i";

  int res1 = s21_sscanf(str, fstr, &a1, &b1);
  int res2 = sscanf(str, fstr, &a2, &b2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
}
END_TEST

START_TEST(sscanf_test_230) {
#line 3118
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
  int n1 = 0, n2 = 5;

  const char str[] = "0x32 160 -07 80";
  const char fstr[] = "%li %li %n %li %li";

  int res1 = s21_sscanf(str, fstr, &a1, &b1, &n1, &c1, &d1);
  int res2 = sscanf(str, fstr, &a2, &b2, &n2, &c2, &d2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(n1, n2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
  ck_assert_int_eq(d1, d2);
}
END_TEST

START_TEST(sscanf_test_231) {
#line 3135
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char c1 = 0, c2 = 0;
  const char str[] = "500-600";
  const char fstr[] = "%li%c%li";

  int res1 = s21_sscanf(str, fstr, &a1, &c1, &b1);
  int res2 = sscanf(str, fstr, &a2, &c2, &b2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(sscanf_test_232) {
#line 3149
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char c1 = 0, c2 = 0;
  const char str[] = "500-600";
  const char fstr[] = "%li%c%li";

  int res1 = s21_sscanf(str, fstr, &a1, &c1, &b1);
  int res2 = sscanf(str, fstr, &a2, &c2, &b2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(sscanf_test_233) {
#line 3163
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char c1 = 0, c2 = 0;
  const char str[] = "500-600";
  const char fstr[] = "%li%c%li";

  int res1 = s21_sscanf(str, fstr, &a1, &c1, &b1);
  int res2 = sscanf(str, fstr, &a2, &c2, &b2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(sscanf_test_234) {
#line 3177
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char c1 = 0, c2 = 0;
  const char str[] = "500-600";
  const char fstr[] = "%li%c%li";

  int res1 = s21_sscanf(str, fstr, &a1, &c1, &b1);
  int res2 = sscanf(str, fstr, &a2, &c2, &b2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(sscanf_test_235) {
#line 3191
  long a1 = 0, a2 = 0, b1 = 0, b2 = 0;
  char c1 = 0, c2 = 0;
  const char str[] = "500-600";
  const char fstr[] = "%li%c%li";

  int res1 = s21_sscanf(str, fstr, &a1, &c1, &b1);
  int res2 = sscanf(str, fstr, &a2, &c2, &b2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(a1, a2);
  ck_assert_int_eq(b1, b2);
  ck_assert_int_eq(c1, c2);
}
END_TEST

START_TEST(sscanf_test_236) {
#line 3205
  float a1 = 3, a2 = 3;
  const char str[] = "-";
  const char fstr[] = "%d";

  int res1 = s21_sscanf(str, fstr, &a1);
  int res2 = sscanf(str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_237) {
#line 3217
  float a1 = 3, a2 = 3;
  const char str[] = "-";
  const char fstr[] = "%lf";

  int res1 = s21_sscanf(str, fstr, &a1);
  int res2 = sscanf(str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_238) {
#line 3228
  float a1 = 3, a2 = 3;
  const char str[] = ".";
  const char fstr[] = "%f";

  int res1 = s21_sscanf(str, fstr, &a1);
  int res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_239) {
#line 3238
  float a1 = 3, a2 = 3;
  const char str[] = ".";
  const char fstr[] = "%lf";

  int res1 = s21_sscanf(str, fstr, &a1);
  int res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_240) {
#line 3248
  float a1 = 3, a2 = 3;
  const char str[] = "e";
  const char fstr[] = "%f";

  int res1 = s21_sscanf(str, fstr, &a1);
  int res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_241) {
#line 3258
  float a1 = 3, a2 = 3;
  const char str[] = "e";
  const char fstr[] = "%lf";

  int res1 = s21_sscanf(str, fstr, &a1);
  int res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_242) {
#line 3268
  char format[] = "%n";
  char str[] = "";
  int n1 = -12, n2 = -12;
  int res1 = s21_sscanf(str, format, &n1);
  int res2 = sscanf(str, format, &n2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(sscanf_test_243) {
#line 3278
  float a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;

  const char str[] = "nanNAN\t-0.0\t0";
  const char fstr[] = "%G %G %G %G";

  int res1 = s21_sscanf(str, fstr, &a1, &b1, &c1, &d1);
  int res2 = sscanf(str, fstr, &a2, &b2, &c2, &d2);

  ck_assert_int_eq(res1, res2);

  ck_assert_int_eq(isnan(a1), isnan(a2));

  ck_assert_int_eq(isnan(b1), isnan(b2));

  ck_assert_int_eq(assert_long_double(c1, c2, 1e-6), 1);
  ck_assert_int_eq(assert_long_double(d1, d2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_244) {
#line 3297
  float a1 = 3, a2 = 3;
  const char str[] = "-0";
  const char fstr[] = "%f";

  int res1 = s21_sscanf(str, fstr, &a1);
  int res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_245) {
#line 3307
  long double a1 = 3, a2 = 3;
  const char str[] = "-0";
  const char fstr[] = "%Lf";

  int res1 = s21_sscanf(str, fstr, &a1);
  int res2 = sscanf(str, fstr, &a2);
  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_long_double(a1, a2, 1e-6), 1);
}
END_TEST

START_TEST(sscanf_test_246) {
#line 3317
  float a1 = 3, a2 = 3;
  const char str[] = "-0";
  const char fstr[] = "%d";

  int res1 = s21_sscanf(str, fstr, &a1);
  int res2 = sscanf(str, fstr, &a2);

  ck_assert_int_eq(res1, res2);
  ck_assert_int_eq(assert_double(a1, a2, 1e-6), 1);
}
END_TEST

Suite *s21_scanf_int_suite(void) {
  Suite *s1 = suite_create("s21_sscanf");
  TCase *tc1_1 = tcase_create("s21_sscanf");

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, sscanf_test_1);
  tcase_add_test(tc1_1, sscanf_test_2);
  tcase_add_test(tc1_1, sscanf_test_3);
  tcase_add_test(tc1_1, sscanf_test_4);
  tcase_add_test(tc1_1, sscanf_test_5);
  tcase_add_test(tc1_1, sscanf_test_6);
  tcase_add_test(tc1_1, sscanf_test_7);
  tcase_add_test(tc1_1, sscanf_test_8);
  tcase_add_test(tc1_1, sscanf_test_9);
  tcase_add_test(tc1_1, sscanf_test_10);
  tcase_add_test(tc1_1, sscanf_test_11);
  tcase_add_test(tc1_1, sscanf_test_12);
  tcase_add_test(tc1_1, sscanf_test_13);
  tcase_add_test(tc1_1, sscanf_test_14);
  tcase_add_test(tc1_1, sscanf_test_16);
  tcase_add_test(tc1_1, sscanf_test_18);
  tcase_add_test(tc1_1, sscanf_test_20);
  tcase_add_test(tc1_1, sscanf_test_22);
  tcase_add_test(tc1_1, sscanf_test_23);
  tcase_add_test(tc1_1, sscanf_test_24);
  tcase_add_test(tc1_1, sscanf_test_25);
  // tcase_add_test(tc1_1, sscanf_test_26);
  // tcase_add_test(tc1_1, sscanf_test_27);
  // tcase_add_test(tc1_1, sscanf_test_28);
  // tcase_add_test(tc1_1, sscanf_test_29);
  // tcase_add_test(tc1_1, sscanf_test_30);
  // tcase_add_test(tc1_1, sscanf_test_31);
  // tcase_add_test(tc1_1, sscanf_test_32);
  // tcase_add_test(tc1_1, sscanf_test_33);
  // tcase_add_test(tc1_1, sscanf_test_34);
  // tcase_add_test(tc1_1, sscanf_test_35);
  // tcase_add_test(tc1_1, sscanf_test_36);
  // tcase_add_test(tc1_1, sscanf_test_37);
  // tcase_add_test(tc1_1, sscanf_test_38);
  // tcase_add_test(tc1_1, sscanf_test_39);
  // tcase_add_test(tc1_1, sscanf_test_40);
  // tcase_add_test(tc1_1, sscanf_test_41);
  // tcase_add_test(tc1_1, sscanf_test_42);
  // tcase_add_test(tc1_1, sscanf_test_43);
  // tcase_add_test(tc1_1, sscanf_test_44);
  // tcase_add_test(tc1_1, sscanf_test_45);
  // tcase_add_test(tc1_1, sscanf_test_46);
  // tcase_add_test(tc1_1, sscanf_test_47);
  // tcase_add_test(tc1_1, sscanf_test_48);
  // tcase_add_test(tc1_1, sscanf_test_49);
  // tcase_add_test(tc1_1, sscanf_test_50);
  // tcase_add_test(tc1_1, sscanf_test_51);
  // tcase_add_test(tc1_1, sscanf_test_52);
  // tcase_add_test(tc1_1, sscanf_test_53);
  // tcase_add_test(tc1_1, sscanf_test_54);
  // tcase_add_test(tc1_1, sscanf_test_55);
  // tcase_add_test(tc1_1, sscanf_test_56);
  // tcase_add_test(tc1_1, sscanf_test_57);
  // tcase_add_test(tc1_1, sscanf_test_58);
  // tcase_add_test(tc1_1, sscanf_test_59);
  // tcase_add_test(tc1_1, sscanf_test_60);
  // tcase_add_test(tc1_1, sscanf_test_61);
  // tcase_add_test(tc1_1, sscanf_test_62);
  // tcase_add_test(tc1_1, sscanf_test_63);
  // tcase_add_test(tc1_1, sscanf_test_64);
  // tcase_add_test(tc1_1, sscanf_test_65);
  // tcase_add_test(tc1_1, sscanf_test_66);
  // tcase_add_test(tc1_1, sscanf_test_67);
  // tcase_add_test(tc1_1, sscanf_test_68);
  // tcase_add_test(tc1_1, sscanf_test_69);
  // tcase_add_test(tc1_1, sscanf_test_70);
  // tcase_add_test(tc1_1, sscanf_test_71);
  // tcase_add_test(tc1_1, sscanf_test_72);
  // tcase_add_test(tc1_1, sscanf_test_73);
  // tcase_add_test(tc1_1, sscanf_test_74);
  // tcase_add_test(tc1_1, sscanf_test_75);
  // tcase_add_test(tc1_1, sscanf_test_76);
  // tcase_add_test(tc1_1, sscanf_test_77);
  // tcase_add_test(tc1_1, sscanf_test_78);
  // tcase_add_test(tc1_1, sscanf_test_79);
  // tcase_add_test(tc1_1, sscanf_test_80);
  // tcase_add_test(tc1_1, sscanf_test_81);
  // tcase_add_test(tc1_1, sscanf_test_82);
  // tcase_add_test(tc1_1, sscanf_test_83);
  // tcase_add_test(tc1_1, sscanf_test_84);
  // tcase_add_test(tc1_1, sscanf_test_85);
  // tcase_add_test(tc1_1, sscanf_test_86);
  // tcase_add_test(tc1_1, sscanf_test_87);
  // tcase_add_test(tc1_1, sscanf_test_88);
  // tcase_add_test(tc1_1, sscanf_test_89);
  // tcase_add_test(tc1_1, sscanf_test_90);
  // tcase_add_test(tc1_1, sscanf_test_91);
  // tcase_add_test(tc1_1, sscanf_test_92);
  // tcase_add_test(tc1_1, sscanf_test_93);
  // tcase_add_test(tc1_1, sscanf_test_94);
  // tcase_add_test(tc1_1, sscanf_test_95);
  // tcase_add_test(tc1_1, sscanf_test_96);
  // tcase_add_test(tc1_1, sscanf_test_97);
  // tcase_add_test(tc1_1, sscanf_test_98);
  // tcase_add_test(tc1_1, sscanf_test_99);
  // tcase_add_test(tc1_1, sscanf_test_100);
  // tcase_add_test(tc1_1, sscanf_test_101);
  // tcase_add_test(tc1_1, sscanf_test_102);
  // tcase_add_test(tc1_1, sscanf_test_103);
  // tcase_add_test(tc1_1, sscanf_test_104);
  // tcase_add_test(tc1_1, sscanf_test_105);
  // tcase_add_test(tc1_1, sscanf_test_106);
  // tcase_add_test(tc1_1, sscanf_test_107);
  // tcase_add_test(tc1_1, sscanf_test_108);
  // tcase_add_test(tc1_1, sscanf_test_109);
  // tcase_add_test(tc1_1, sscanf_test_110);
  // tcase_add_test(tc1_1, sscanf_test_111);
  // tcase_add_test(tc1_1, sscanf_test_112);
  // tcase_add_test(tc1_1, sscanf_test_113);
  // tcase_add_test(tc1_1, sscanf_test_114);
  // tcase_add_test(tc1_1, sscanf_test_115);
  // tcase_add_test(tc1_1, sscanf_test_116);
  // tcase_add_test(tc1_1, sscanf_test_117);
  // tcase_add_test(tc1_1, sscanf_test_118);
  // tcase_add_test(tc1_1, sscanf_test_119);
  // tcase_add_test(tc1_1, sscanf_test_120);
  // tcase_add_test(tc1_1, sscanf_test_121);
  // tcase_add_test(tc1_1, sscanf_test_122);
  // tcase_add_test(tc1_1, sscanf_test_123);
  // tcase_add_test(tc1_1, sscanf_test_124);
  // tcase_add_test(tc1_1, sscanf_test_125);
  // tcase_add_test(tc1_1, sscanf_test_126);
  // tcase_add_test(tc1_1, sscanf_test_127);
  // tcase_add_test(tc1_1, sscanf_test_128);
  // tcase_add_test(tc1_1, sscanf_test_129);
  // tcase_add_test(tc1_1, sscanf_test_130);
  // tcase_add_test(tc1_1, sscanf_test_131);
  // tcase_add_test(tc1_1, sscanf_test_132);
  // tcase_add_test(tc1_1, sscanf_test_133);
  // tcase_add_test(tc1_1, sscanf_test_134);
  // tcase_add_test(tc1_1, sscanf_test_135);
  // tcase_add_test(tc1_1, sscanf_test_136);
  // tcase_add_test(tc1_1, sscanf_test_137);
  // tcase_add_test(tc1_1, sscanf_test_138);
  // tcase_add_test(tc1_1, sscanf_test_139);
  // tcase_add_test(tc1_1, sscanf_test_140);
  // tcase_add_test(tc1_1, sscanf_test_141);
  // tcase_add_test(tc1_1, sscanf_test_142);
  // tcase_add_test(tc1_1, sscanf_test_143);
  // tcase_add_test(tc1_1, sscanf_test_144);
  // tcase_add_test(tc1_1, sscanf_test_145);
  // tcase_add_test(tc1_1, sscanf_test_146);
  // tcase_add_test(tc1_1, sscanf_test_147);
  // tcase_add_test(tc1_1, sscanf_test_148);
  // tcase_add_test(tc1_1, sscanf_test_149);
  // tcase_add_test(tc1_1, sscanf_test_150);
  // tcase_add_test(tc1_1, sscanf_test_151);
  // tcase_add_test(tc1_1, sscanf_test_152);
  // tcase_add_test(tc1_1, sscanf_test_153);
  // tcase_add_test(tc1_1, sscanf_test_154);
  // tcase_add_test(tc1_1, sscanf_test_155);
  // tcase_add_test(tc1_1, sscanf_test_156);
  // tcase_add_test(tc1_1, sscanf_test_157);
  // tcase_add_test(tc1_1, sscanf_test_158);
  // tcase_add_test(tc1_1, sscanf_test_159);
  // tcase_add_test(tc1_1, sscanf_test_160);
  // tcase_add_test(tc1_1, sscanf_test_161);
  // tcase_add_test(tc1_1, sscanf_test_162);
  // tcase_add_test(tc1_1, sscanf_test_163);
  // tcase_add_test(tc1_1, sscanf_test_164);
  // tcase_add_test(tc1_1, sscanf_test_165);
  // tcase_add_test(tc1_1, sscanf_test_166);
  // tcase_add_test(tc1_1, sscanf_test_167);
  // tcase_add_test(tc1_1, sscanf_test_168);
  // tcase_add_test(tc1_1, sscanf_test_169);
  // tcase_add_test(tc1_1, sscanf_test_170);
  // tcase_add_test(tc1_1, sscanf_test_171);
  // tcase_add_test(tc1_1, sscanf_test_172);
  // tcase_add_test(tc1_1, sscanf_test_173);
  // tcase_add_test(tc1_1, sscanf_test_174);
  // tcase_add_test(tc1_1, sscanf_test_175);
  // tcase_add_test(tc1_1, sscanf_test_176);
  // tcase_add_test(tc1_1, sscanf_test_177);
  // tcase_add_test(tc1_1, sscanf_test_178);
  // tcase_add_test(tc1_1, sscanf_test_179);
  // tcase_add_test(tc1_1, sscanf_test_180);
  // tcase_add_test(tc1_1, sscanf_test_181);
  // tcase_add_test(tc1_1, sscanf_test_182);
  // tcase_add_test(tc1_1, sscanf_test_183);
  // tcase_add_test(tc1_1, sscanf_test_184);
  // tcase_add_test(tc1_1, sscanf_test_185);
  // tcase_add_test(tc1_1, sscanf_test_186);
  // tcase_add_test(tc1_1, sscanf_test_187);
  // tcase_add_test(tc1_1, sscanf_test_188);
  // tcase_add_test(tc1_1, sscanf_test_189);
  // tcase_add_test(tc1_1, sscanf_test_190);
  // tcase_add_test(tc1_1, sscanf_test_191);
  // tcase_add_test(tc1_1, sscanf_test_192);
  // tcase_add_test(tc1_1, sscanf_test_193);
  // tcase_add_test(tc1_1, sscanf_test_194);
  // tcase_add_test(tc1_1, sscanf_test_195);
  // tcase_add_test(tc1_1, sscanf_test_196);
  // tcase_add_test(tc1_1, sscanf_test_197);
  // tcase_add_test(tc1_1, sscanf_test_198);
  // tcase_add_test(tc1_1, sscanf_test_199);
  // tcase_add_test(tc1_1, sscanf_test_200);
  // tcase_add_test(tc1_1, sscanf_test_201);
  // tcase_add_test(tc1_1, sscanf_test_202);
  // tcase_add_test(tc1_1, sscanf_test_203);
  // tcase_add_test(tc1_1, sscanf_test_204);
  // tcase_add_test(tc1_1, sscanf_test_205);
  // tcase_add_test(tc1_1, sscanf_test_206);
  // tcase_add_test(tc1_1, sscanf_test_207);
  // tcase_add_test(tc1_1, sscanf_test_208);
  // tcase_add_test(tc1_1, sscanf_test_209);
  // tcase_add_test(tc1_1, sscanf_test_210);
  // tcase_add_test(tc1_1, sscanf_test_211);
  // tcase_add_test(tc1_1, sscanf_test_212);
  // tcase_add_test(tc1_1, sscanf_test_213);
  // tcase_add_test(tc1_1, sscanf_test_214);
  // tcase_add_test(tc1_1, sscanf_test_215);
  // tcase_add_test(tc1_1, sscanf_test_216);
  // tcase_add_test(tc1_1, sscanf_test_217);
  // tcase_add_test(tc1_1, sscanf_test_218);
  // tcase_add_test(tc1_1, sscanf_test_219);
  // tcase_add_test(tc1_1, sscanf_test_220);
  // tcase_add_test(tc1_1, sscanf_test_221);
  // tcase_add_test(tc1_1, sscanf_test_222);
  // tcase_add_test(tc1_1, sscanf_test_223);
  // tcase_add_test(tc1_1, sscanf_test_224);
  // tcase_add_test(tc1_1, sscanf_test_225);
  // tcase_add_test(tc1_1, sscanf_test_226);
  // tcase_add_test(tc1_1, sscanf_test_227);
  // tcase_add_test(tc1_1, sscanf_test_228);
  // tcase_add_test(tc1_1, sscanf_test_229);
  // tcase_add_test(tc1_1, sscanf_test_230);
  // tcase_add_test(tc1_1, sscanf_test_231);
  // tcase_add_test(tc1_1, sscanf_test_232);
  // tcase_add_test(tc1_1, sscanf_test_233);
  // tcase_add_test(tc1_1, sscanf_test_234);
  // tcase_add_test(tc1_1, sscanf_test_235);
  // tcase_add_test(tc1_1, sscanf_test_236);
  // tcase_add_test(tc1_1, sscanf_test_237);
  // tcase_add_test(tc1_1, sscanf_test_238);
  // tcase_add_test(tc1_1, sscanf_test_239);
  // tcase_add_test(tc1_1, sscanf_test_240);
  // tcase_add_test(tc1_1, sscanf_test_241);
  // tcase_add_test(tc1_1, sscanf_test_242);
  // tcase_add_test(tc1_1, sscanf_test_243);
  // tcase_add_test(tc1_1, sscanf_test_244);
  // tcase_add_test(tc1_1, sscanf_test_245);
  // tcase_add_test(tc1_1, sscanf_test_246);
  return s1;
}
