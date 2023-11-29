#include "test_string_all.h"

START_TEST(test_my_insert_1) {
  char src1[20] = "000";
  char app[10] = "12345";
  char *src = s21_insert(src1, app, 3);
  char res[20] = "00012345";
  ck_assert_str_eq(src, res);

  if (src != s21_NULL) free(src);
}
END_TEST

START_TEST(test_my_insert_2) {
  char src1[20] = "qqqqq";
  char app[10] = "12345";
  char *src = s21_insert(src1, app, 2);
  char res[20] = "qq12345qqq";
  ck_assert_str_eq(src, res);
  if (src != s21_NULL) free(src);
}
END_TEST

START_TEST(test_my_insert_3) {
  char src1[] = "qqqqqqqqqqqqqqWWWWWWWWWWW";
  char app[] = "eeeEEE";
  char *src = s21_insert(src1, app, 14);
  char res[] = "qqqqqqqqqqqqqqeeeEEEWWWWWWWWWWW";
  ck_assert_str_eq(src, res);

  if (src != s21_NULL) free(src);
}
END_TEST

START_TEST(test_my_insert_4) {
  char src1[] = "123456789";
  char app[] = "qwertyu";
  char *src = s21_insert(src1, app, 9);
  char res[] = "123456789qwertyu";
  ck_assert_str_eq(src, res);

  if (src != s21_NULL) free(src);
}
END_TEST

START_TEST(test_my_insert_5) {
  char src1[] = "123456789";
  char app[] = "qwertyu";
  char *src = s21_insert(src1, app, 0);
  char res[] = "qwertyu123456789";
  ck_assert_str_eq(src, res);

  if (src != s21_NULL) free(src);
}
END_TEST

START_TEST(test_my_memchr_1) {
  int *my_func;
  int *func;
  char test_cmp2[20] = "123";
  my_func = s21_memchr(test_cmp2, 49, 3);
  func = memchr(test_cmp2, 49, 3);
  ck_assert_ptr_eq(func, my_func);
}
END_TEST

START_TEST(test_my_memchr_2) {
  int *my_func;
  int *func;
  char test_cmp2[20] = "123";
  my_func = s21_memchr(test_cmp2, 127, 3);
  func = memchr(test_cmp2, 127, 3);
  ck_assert_ptr_eq(func, my_func);
}
END_TEST

START_TEST(test_my_memchr_3) {
  int *my_func;
  int *func;
  char test_cmp2[20] = "123";
  my_func = s21_memchr(test_cmp2, 12, 10);
  func = memchr(test_cmp2, 12, 10);
  ck_assert_ptr_eq(func, my_func);
}
END_TEST

START_TEST(test_my_memchr_4) {
  int *my_func;
  int *func;
  char test_cmp2[20] = "qwertyuio";
  my_func = s21_memchr(test_cmp2, 'o', 5);
  func = memchr(test_cmp2, 'o', 5);
  ck_assert_ptr_eq(func, my_func);
}
END_TEST

START_TEST(test_my_memchr_5) {
  int *my_func;
  int *func;
  char test_cmp2[20] = "qwertyuio";
  my_func = s21_memchr(test_cmp2, 'w', 5);
  func = memchr(test_cmp2, 'w', 5);
  ck_assert_ptr_eq(func, my_func);
}
END_TEST

START_TEST(test_my_memcmp_1) {
  int my_func;
  int func;
  char test_cmp[4] = "123";
  char test_cmp2[4] = "123";
  my_func = s21_memcmp(test_cmp, test_cmp2, 3);
  func = memcmp(test_cmp, test_cmp2, 3);
  ck_assert_int_eq(func, my_func);
}
END_TEST

START_TEST(test_my_memcmp_5) {
  int my_func;
  int func;
  char test_cmp[] = "qwertyuiop[]";
  char test_cmp2[] = "qwertyuiop[]";
  my_func = s21_memcmp(test_cmp, test_cmp2, 10);
  func = memcmp(test_cmp, test_cmp2, 10);
  ck_assert_int_eq(func, my_func);
}
END_TEST

START_TEST(test_my_memcmp_6) {
  int my_func;
  int func;
  char test_cmp[] = "qwertyuiop[]";
  char test_cmp2[] = "qwetyuiop[]";
  my_func = s21_memcmp(test_cmp, test_cmp2, 10);
  func = memcmp(test_cmp, test_cmp2, 10);
  ck_assert_int_eq(func, my_func);
}
END_TEST

START_TEST(test_my_memcmp_2) {
  int my_func;
  int func;
  char test_cmp[4] = "121";
  char test_cmp2[4] = "12g";
  my_func = s21_memcmp(test_cmp, test_cmp2, 3);
  func = memcmp(test_cmp, test_cmp2, 3);
  ck_assert_int_eq(func, my_func);
}
END_TEST

START_TEST(test_my_memcmp_3) {
  int my_func;
  int func;
  char test_cmp[4] = "12j";
  char test_cmp2[4] = "121";
  my_func = s21_memcmp(test_cmp, test_cmp2, 3);
  func = memcmp(test_cmp, test_cmp2, 3);
  ck_assert_int_eq(func, my_func);
}
END_TEST

START_TEST(test_my_memcmp_4) {
  int my_func;
  int func;
  char test_cmp[4] = "12j";
  char test_cmp2[4] = "121";
  my_func = s21_memcmp(test_cmp, test_cmp2, 12);
  func = memcmp(test_cmp, test_cmp2, 12);
  ck_assert_int_eq(func, my_func);
}
END_TEST

START_TEST(test_my_memcpy_1) {
  char my_func1[40] = {0};
  char func1[40] = {0};
  char *temp_my_func1 = s21_memcpy(my_func1, "QWERTYUIOP", 5);
  char *temp_func1 = memcpy(func1, "QWERTYUIOP", 5);

  ck_assert_str_eq(func1, my_func1);
}
END_TEST

START_TEST(test_my_memcpy_2) {
  char my_func1[40] = {0};
  char func1[40] = {0};
  char *temp_my_func1 = s21_memcpy(my_func1, "QWERTYUIOP", 5);
  char *temp_func1 = memcpy(func1, "QWERTYUIOP", 5);

  ck_assert_str_eq(func1, my_func1);
}
END_TEST

START_TEST(test_my_memcpy_3) {
  char my_func1[40] = {0};
  char func1[40] = {0};
  char *temp_my_func1 = s21_memcpy(my_func1, "QWERTYUIOP", 5);
  char *temp_func1 = memcpy(func1, "QWERTYUIOP", 5);

  ck_assert_str_eq(func1, my_func1);
}
END_TEST

START_TEST(test_my_memcpy_4) {
  char my_func1[40] = {0};
  char func1[40] = {0};
  char *temp_my_func1 = s21_memcpy(my_func1, "QWE12345", 5);
  char *temp_func1 = memcpy(func1, "QW12345", 5);

  ck_assert_str_eq(func1, my_func1);
}
END_TEST

START_TEST(test_my_memcpy_5) {
  char my_func1[40] = {0};
  char func1[40] = {0};
  char *temp_my_func1 = s21_memcpy(
      my_func1, "qwertyuy\0ewertyurewertyuiuytrertyuioiuytrertyu", 9);
  char *temp_func1 = memcpy(func1, "0ewertyuiuytrertyu", 9);

  ck_assert_str_eq(func1, my_func1);
}
END_TEST

START_TEST(test_my_memset_1) {
  char *my_func;
  char *func;
  char test_set[4] = "123";
  char test_set1[4] = "123";
  my_func = s21_memset(test_set, '1', 3);
  func = memset(test_set1, '1', 3);
  ck_assert_str_eq(func, my_func);
}
END_TEST

START_TEST(test_my_memset_2) {
  char *my_func;
  char *func;
  char test_set[] = "123456789";
  char test_set1[] = "123456789";
  my_func = s21_memset(test_set, '4', 8);
  func = memset(test_set1, '4', 8);
  ck_assert_str_eq(func, my_func);
}
END_TEST

START_TEST(test_my_memset_3) {
  char *my_func;
  char *func;
  char test_set[] = "123456789";
  char test_set1[] = "123456789";
  my_func = s21_memset(test_set, '4', 8);
  func = memset(test_set1, '2', 6);
  ck_assert_str_ne(func, my_func);
}
END_TEST

START_TEST(test_my_memset_4) {
  char *my_func;
  char *func;
  char test_set[] = "fghjk6789";
  char test_set1[] = "fghjk6789";
  my_func = s21_memset(test_set, 'r', 5);
  func = memset(test_set1, 'r', 5);
  ck_assert_str_eq(func, my_func);
}
END_TEST

START_TEST(test_my_memset_5) {
  char *my_func;
  char *func;
  char test_set[] = "fghjk6789w";
  char test_set1[] = "fghjk6789w";
  my_func = s21_memset(test_set, 'A', 9);
  func = memset(test_set1, 'A', 9);
  ck_assert_str_eq(func, my_func);
}
END_TEST

START_TEST(test_my_strchr_1) {
  char *my_func;
  char *func;
  char test_cmp2[20] = "123";
  my_func = s21_strchr(test_cmp2, 49);
  func = strchr(test_cmp2, 49);
  ck_assert_ptr_eq(func, my_func);
}
END_TEST

START_TEST(test_my_strchr_2) {
  char *my_func;
  char *func;
  char test_cmp2[20] = "123";
  my_func = s21_strchr(test_cmp2, 127);
  func = strchr(test_cmp2, 127);
  ck_assert_ptr_eq(func, my_func);
}
END_TEST

START_TEST(test_my_strchr_3) {
  char *my_func;
  char *func;
  char test_cmp2[20] = "123";
  my_func = s21_strchr(test_cmp2, 12);
  func = strchr(test_cmp2, 12);
  ck_assert_ptr_eq(func, my_func);
}
END_TEST

START_TEST(test_my_strchr_4) {
  char *my_func;
  char *func;
  char test_cmp2[20] = "qwertyui";
  my_func = s21_strchr(test_cmp2, 'g');
  func = strchr(test_cmp2, 'g');
  ck_assert_ptr_eq(func, my_func);
}
END_TEST
START_TEST(test_my_strchr_5) {
  char *my_func;
  char *func;
  char test_cmp2[20] = "qwertyui";
  my_func = s21_strchr(test_cmp2, 't');
  func = strchr(test_cmp2, 't');
  ck_assert_ptr_eq(func, my_func);
}
END_TEST

START_TEST(test_s21_strcspn_1) {
  char source[] = "HORNEY_MAD";
  char dest[] = "RYGA";

  int res_std = strcspn(source, dest);
  int res_s21 = s21_strcspn(source, dest);

  ck_assert_int_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strcspn_2) {
  char source[] = "";
  char dest[] = "RYGA";

  int res_std = strcspn(source, dest);
  int res_s21 = s21_strcspn(source, dest);

  ck_assert_int_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strcspn_3) {
  char source[] = "HORNEY_\n\n\tMAD";
  char dest[] = "";

  int res_std = strcspn(source, dest);
  int res_s21 = s21_strcspn(source, dest);

  ck_assert_int_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strcspn_4) {
  char source[] = "";
  char dest[] = "";

  int res_std = strcspn(source, dest);
  int res_s21 = s21_strcspn(source, dest);

  ck_assert_int_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strcspn_5) {
  char source[] = "1234567890-----09876543234567890987654321Z";
  char dest[] = "Z";

  int res_std = strcspn(source, dest);
  int res_s21 = s21_strcspn(source, dest);

  ck_assert_int_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_my_strerror_1) {
  char test_set[100];
  char test_set1[100];
  strcpy(test_set, s21_strerror(10));
  strcpy(test_set1, strerror(10));
  ck_assert_str_eq(test_set, test_set1);
}
END_TEST

START_TEST(test_my_strerror_2) {
  char test_set[100];
  char test_set1[100];
  strcpy(test_set, s21_strerror(24));
  strcpy(test_set1, strerror(24));
  ck_assert_str_eq(test_set, test_set1);
}
END_TEST

START_TEST(test_my_strerror_3) {
  char test_set[100];
  char test_set1[100];
  strcpy(test_set, s21_strerror(38));
  strcpy(test_set1, strerror(38));
  ck_assert_str_eq(test_set, test_set1);
}
END_TEST

START_TEST(test_my_strerror_4) {
  char test_set[100];
  char test_set1[100];
  strcpy(test_set, s21_strerror(45));
  strcpy(test_set1, strerror(45));
  ck_assert_str_eq(test_set, test_set1);
}
END_TEST

START_TEST(test_my_strerror_5) {
  char test_set[100];
  char test_set1[100];
  strcpy(test_set, s21_strerror(95));
  strcpy(test_set1, strerror(95));
  ck_assert_str_eq(test_set, test_set1);
}
END_TEST

START_TEST(test_my_strerror_6) {
  char test_set[100];
  char test_set1[100];
  strcpy(test_set, s21_strerror(41));
  strcpy(test_set1, strerror(41));
  ck_assert_str_eq(test_set, test_set1);
}
END_TEST

START_TEST(test_s21_strlen_1) {
  char source[] = "HORNEY_MAD";

  int res_std = (int)strlen(source);
  int res_s21 = (int)s21_strlen(source);

  ck_assert_int_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strlen_2) {
  char source[] = "";

  int res_std = (int)strlen(source);
  int res_s21 = (int)s21_strlen(source);

  ck_assert_int_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strlen_3) {
  char source[] = "HORNEY_MAD";

  int res_std = (int)strlen(source);
  int res_s21 = (int)s21_strlen(source);

  ck_assert_int_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strlen_4) {
  char source[] = "1234567890-----09876543234567890987\n\n654321Z";

  int res_std = (int)strlen(source);
  int res_s21 = (int)s21_strlen(source);

  ck_assert_int_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strlen_5) {
  char source[] = "12   jjkjkjannn\t\t\t\t\034567890987\n\n654321Z";

  int res_std = (int)strlen(source);
  int res_s21 = (int)s21_strlen(source);

  ck_assert_int_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_my_strncat_1) {
  char src1[10] = "000";
  char src2[10] = "000";
  // Добавляемая строка
  char app[10] = "12345";
  s21_strncat(src1, app, 3);
  strncat(src2, app, 3);
  ck_assert_str_eq(src1, src2);
}
END_TEST

START_TEST(test_my_strncat_2) {
  char src1[10] = "0";
  char src2[10] = "0";
  // Добавляемая строка
  char app[10] = "qwerty";
  s21_strncat(src1, app, 5);
  strncat(src2, app, 5);
  ck_assert_str_eq(src1, src2);
}
END_TEST

START_TEST(test_my_strncat_3) {
  char src1[10] = "0";
  char src2[10] = "0";
  // Добавляемая строка
  char app[20] = "qwertyqwedfsdfdsfd";
  s21_strncat(src1, app, 8);
  strncat(src2, app, 8);
  ck_assert_str_eq(src1, src2);
}
END_TEST

START_TEST(test_my_strncat_4) {
  char src1[10] = "0";
  char src2[10] = "0";
  // Добавляемая строка
  char app[20] = "qwertyqwedfsdfdsfd";
  s21_strncat(src1, app, 6);
  strncat(src2, app, 8);
  ck_assert_str_ne(src1, src2);
}
END_TEST

START_TEST(test_my_strncmp_1) {
  int my_func;
  int func;
  char test_cmp[] = "12345678";
  char test_cmp2[] = "12345678";
  my_func = s21_strncmp(test_cmp, test_cmp2, 5);
  func = strncmp(test_cmp, test_cmp2, 5);
  ck_assert_int_eq(func, my_func);
}
END_TEST

START_TEST(test_my_strncmp_2) {
  int my_func;
  int func;
  char test_cmp[] = "12345678";
  char test_cmp2[] = "1245678";
  my_func = s21_strncmp(test_cmp, test_cmp2, 5);
  func = strncmp(test_cmp, test_cmp2, 5);
  ck_assert_int_eq(func, my_func);
}
END_TEST

START_TEST(test_my_strncmp_3) {
  int my_func;
  int func;
  char test_cmp[] = "1qw2345678";
  char test_cmp2[] = "1qw2345678";
  my_func = s21_strncmp(test_cmp, test_cmp2, 7);
  func = strncmp(test_cmp, test_cmp2, 7);
  ck_assert_int_eq(func, my_func);
}
END_TEST

START_TEST(test_my_strncmp_4) {
  int my_func;
  int func;
  char test_cmp[] = "1qw2345678";
  char test_cmp2[] = "1qW2345678";
  my_func = s21_strncmp(test_cmp, test_cmp2, 7);
  func = strncmp(test_cmp, test_cmp2, 7);
  ck_assert_int_eq(func, my_func);
}
END_TEST

START_TEST(test_my_strncmp_5) {
  int my_func;
  int func;
  char test_cmp[] = "1qW2345678";
  char test_cmp2[] = "1qw2345678";
  my_func = s21_strncmp(test_cmp, test_cmp2, 7);
  func = strncmp(test_cmp, test_cmp2, 7);
  ck_assert_int_eq(func, my_func);
}
END_TEST

START_TEST(test_my_strncpy_1) {
  char my_func[30];
  char func[30];
  s21_strncpy(my_func, "QWERTYUIOP", 12);
  strncpy(func, "QWERTYUIOP", 12);

  ck_assert_str_eq(func, my_func);
}
END_TEST

START_TEST(test_my_strncpy_2) {
  char my_func[30];
  char func[30];
  s21_strncpy(my_func, "asdfgg", 8);
  strncpy(func, "asdfgg", 8);

  ck_assert_str_eq(func, my_func);
}
END_TEST

START_TEST(test_my_strncpy_3) {
  char my_func[32];
  char func[32];
  s21_strncpy(my_func, "asdfgg", 30);
  strncpy(func, "asdfgg", 30);

  ck_assert_str_eq(func, my_func);
}
END_TEST

START_TEST(test_my_strncpy_4) {
  char my_func[32];
  char func[32];
  s21_strncpy(my_func, "cvbnb", 30);
  strncpy(func, "asdfgg", 30);

  ck_assert_str_ne(func, my_func);
}
END_TEST

START_TEST(test_my_strncpy_5) {
  char my_func[60];
  char func[60];
  s21_strncpy(my_func, "qwertyuiopoiuytrewq   qwertyuioiuytrewqw", 42);
  strncpy(func, "qwertyuiopoiuytrewq   qwertyuioiuytrewqw", 42);

  ck_assert_str_eq(func, my_func);
}
END_TEST

START_TEST(test_s21_strpbrk_1) {
  char source[] = "HORNEY_MAD";
  char dest[] = "RYGA";

  char *res_std = strpbrk(source, dest);
  char *res_s21 = s21_strpbrk(source, dest);

  ck_assert_ptr_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strpbrk_2) {
  char source[] = "";
  char dest[] = "RYGA";

  char *res_std = strpbrk(source, dest);
  char *res_s21 = s21_strpbrk(source, dest);

  ck_assert_ptr_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strpbrk_3) {
  char source[] = "HORNEY_\n\n\tMAD";
  char dest[] = "";

  char *res_std = strpbrk(source, dest);
  char *res_s21 = s21_strpbrk(source, dest);

  ck_assert_ptr_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strpbrk_4) {
  char source[] = "";
  char dest[] = "";

  char *res_std = strpbrk(source, dest);
  char *res_s21 = s21_strpbrk(source, dest);

  ck_assert_ptr_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strpbrk_5) {
  char source[] = "1234567890-----09876543234567890987654321Z";
  char dest[] = "Z";

  char *res_std = strpbrk(source, dest);
  char *res_s21 = s21_strpbrk(source, dest);

  ck_assert_ptr_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strrchr_1) {
  char source[] = "HORNEY_MAD";
  char dest = 'N';

  char *res_std = strrchr(source, dest);
  char *res_s21 = s21_strrchr(source, dest);

  ck_assert_ptr_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strrchr_2) {
  char source[] = "";
  char dest = 'c';

  char *res_std = strrchr(source, dest);
  char *res_s21 = s21_strrchr(source, dest);

  ck_assert_ptr_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strrchr_3) {
  char source[] = "HORNEY_\n\n\tMAD";
  char dest = '\n';

  char *res_std = strrchr(source, dest);
  char *res_s21 = s21_strrchr(source, dest);

  ck_assert_ptr_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strrchr_4) {
  char source[] = "";
  char dest = ' ';

  char *res_std = strrchr(source, dest);
  char *res_s21 = s21_strrchr(source, dest);

  ck_assert_ptr_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strrchr_5) {
  char source[] = "1234-a-sdfa-df-ad-f-ad-fas-fd--sd-444";
  char dest = '4';

  char *res_std = strrchr(source, dest);
  char *res_s21 = s21_strrchr(source, dest);

  ck_assert_ptr_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strstr_1) {
  const char haystack[20] = "TutorialsPoint";
  const char needle[10] = "Point";

  char *res_std = strstr(haystack, needle);
  char *res_s21 = s21_strstr(haystack, needle);

  ck_assert_ptr_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strstr_2) {
  const char haystack[20] = "";
  const char needle[10] = "Point";

  char *res_std = strstr(haystack, needle);
  char *res_s21 = s21_strstr(haystack, needle);

  ck_assert_ptr_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strstr_3) {
  const char haystack[20] = "TutorialsPoint";
  const char needle[10] = "";

  char *res_std = strstr(haystack, needle);
  char *res_s21 = s21_strstr(haystack, needle);

  ck_assert_ptr_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strstr_4) {
  const char haystack[20] = "Tutor\n\n\n\talsPoint";
  const char needle[10] = "\n\n\n\t";

  char *res_std = strstr(haystack, needle);
  char *res_s21 = s21_strstr(haystack, needle);

  ck_assert_ptr_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strstr_5) {
  const char haystack[20] = "";
  const char needle[10] = "";

  char *res_std = strstr(haystack, needle);
  char *res_s21 = s21_strstr(haystack, needle);

  ck_assert_ptr_eq(res_std, res_s21);
}
END_TEST

START_TEST(test_s21_strtok_1) {
  char str_src[] = "123 123 33 ,.,.    ,., 3333 ,.,;";
  char str_s21[] = "123 123 33 ,.,.    ,., 3333 ,.,;";
  char sep[] = ",. ";
  char *src_tok = strtok(str_src, sep);
  char *s21_tok = s21_strtok(str_s21, sep);

  while (src_tok != NULL && s21_tok != s21_NULL) {
    src_tok = strtok(NULL, sep);
    s21_tok = s21_strtok(s21_NULL, sep);
    ck_assert_msg((strcmp(s21_tok, s21_tok) == 0), "/%s/ not ecuals /%s/",
                  s21_tok, src_tok);
  }
}
END_TEST

START_TEST(test_s21_strtok_2) {
  char str_src[] = "";
  char str_s21[] = "";
  char sep[] = ",. ";
  char *src_tok = strtok(str_src, sep);
  char *s21_tok = s21_strtok(str_s21, sep);

  while (src_tok != NULL && s21_tok != s21_NULL) {
    src_tok = strtok(NULL, sep);
    s21_tok = s21_strtok(s21_NULL, sep);
    ck_assert_msg((strcmp(s21_tok, s21_tok) == 0), "/%s/ not ecuals /%s/",
                  s21_tok, src_tok);
  }
}
END_TEST

START_TEST(test_s21_strtok_3) {
  char str_src[] = "123 123 33 ,.,.    ,., 3333 ,., ";
  char str_s21[] = "123 123 33 ,.,.    ,., 3333 ,., ";
  char sep[] = "";
  char *src_tok = strtok(str_src, sep);
  char *s21_tok = s21_strtok(str_s21, sep);

  while (src_tok != NULL && s21_tok != s21_NULL) {
    src_tok = strtok(NULL, sep);
    s21_tok = s21_strtok(s21_NULL, sep);
    ck_assert_msg((strcmp(s21_tok, s21_tok) == 0), "/%s/ not ecuals /%s/",
                  s21_tok, src_tok);
  }
}
END_TEST

START_TEST(test_s21_strtok_4) {
  char str_src[] = "qwertyuioasdfghjk";
  char str_s21[] = "qwertyuioasdfghjk";
  char sep[] = "2";
  char *src_tok = strtok(str_src, sep);
  char *s21_tok = s21_strtok(str_s21, sep);

  while (src_tok != NULL && s21_tok != s21_NULL) {
    src_tok = strtok(NULL, sep);
    s21_tok = s21_strtok(s21_NULL, sep);
    ck_assert_msg((strcmp(s21_tok, s21_tok) == 0), "/%s/ not ecuals /%s/",
                  s21_tok, src_tok);
  }
}
END_TEST

START_TEST(test_s21_strtok_5) {
  char str_src[] = "\n\n\n\n\n\n\n\n\n\n\t\t";
  char str_s21[] = "\n\n\n\n\n\n\n\n\n\n\t\t";
  char sep[] = "\n";
  char *src_tok = strtok(str_src, sep);
  char *s21_tok = s21_strtok(str_s21, sep);

  while (src_tok != NULL && s21_tok != s21_NULL) {
    src_tok = strtok(NULL, sep);
    s21_tok = s21_strtok(s21_NULL, sep);
    ck_assert_msg((strcmp(s21_tok, s21_tok) == 0), "/%s/ not ecuals /%s/",
                  s21_tok, src_tok);
  }
}
END_TEST

START_TEST(test_my_to_lower_1) {
  char src1[] = "000LLLLLLaaaaaA";
  char *srl = s21_to_lower(src1);
  char res[] = "000llllllaaaaaa";
  ck_assert_str_eq(srl, res);
  if (srl != s21_NULL) free(srl);
}
END_TEST

START_TEST(test_my_to_lower_2) {
  char src1[] = "/.,12367890-!@#$^&*FFSS()";
  char *src = s21_to_lower(src1);
  char res[] = "/.,12367890-!@#$^&*ffss()";
  ck_assert_str_eq(src, res);

  if (src != s21_NULL) free(src);
}
END_TEST

START_TEST(test_my_to_lower_3) {
  char src1[] = "";
  char *src = s21_to_lower(src1);
  char res[] = "";
  ck_assert_str_eq(src, res);

  if (src != s21_NULL) free(src);
}
END_TEST

START_TEST(test_my_to_lower_4) {
  char src1[] = "       ";
  char *src = s21_to_lower(src1);
  char res[] = "       ";
  ck_assert_str_eq(src, res);

  if (src != s21_NULL) free(src);
}
END_TEST

START_TEST(test_my_to_lower_5) {
  char src1[] = "   AAAAFFFFIIII    ";
  char *src = s21_to_lower(src1);
  char res[] = "   aaaaffffiiii    ";
  ck_assert_str_eq(src, res);
  if (src != s21_NULL) free(src);
}
END_TEST

START_TEST(test_s21_to_upper_1) {
  char source[] = "      point     ";
  char result[] = "      POINT     ";
  char *res_s21 = s21_to_upper(source);
  ck_assert_str_eq(result, res_s21);

  if (res_s21 != s21_NULL) free(res_s21);
}
END_TEST

START_TEST(test_s21_to_upper_2) {
  char source[] = "      POint     ";
  char result[] = "      POINT     ";
  char *res_s21 = s21_to_upper(source);
  ck_assert_str_eq(result, res_s21);

  if (res_s21 != s21_NULL) free(res_s21);
}
END_TEST

START_TEST(test_s21_to_upper_3) {
  char source[] = "......point\n\t..";
  char result[] = "......POINT\n\t..";
  char *res_s21 = s21_to_upper(source);
  ck_assert_str_eq(result, res_s21);

  if (res_s21 != s21_NULL) free(res_s21);
}
END_TEST

START_TEST(test_s21_to_upper_4) {
  char source[] = "           ";
  char result[] = "           ";
  char *res_s21 = s21_to_upper(source);
  ck_assert_str_eq(result, res_s21);

  if (res_s21 != s21_NULL) free(res_s21);
}
END_TEST

START_TEST(test_s21_to_upper_5) {
  char source[] = "      POIN3     ";
  char result[] = "      POIN3     ";
  char *res_s21 = s21_to_upper(source);
  ck_assert_str_eq(result, res_s21);

  if (res_s21 != s21_NULL) free(res_s21);
}
END_TEST

START_TEST(test_s21_trim_1) {
  char source[40] = "          ";
  char sep[] = ",. ";
  char result[] = "";
  char *res_s21 = s21_trim(source, sep);
  ck_assert_str_eq(result, res_s21);
  if (res_s21 != s21_NULL) free(res_s21);
}
END_TEST

START_TEST(test_s21_trim_2) {
  char source[50] = "      1111d1111111Point vvv    ";
  char sep[] = ",.1 ";
  char result[] = "d1111111Point vvv";
  char *res_s21 = s21_trim(source, sep);
  ck_assert_str_eq(result, res_s21);
  if (res_s21 != s21_NULL) free(res_s21);
}
END_TEST

START_TEST(test_s21_trim_3) {
  char source[40] = "      Point vvv    ";
  char sep[] = ",. ";
  char result[] = "Point vvv";
  char *res_s21 = s21_trim(source, sep);
  ck_assert_str_eq(result, res_s21);
  if (res_s21 != s21_NULL) free(res_s21);
}
END_TEST

START_TEST(test_s21_trim_4) {
  char source[40] = "      Point vvv    ";
  char sep[] = ",. ";
  char result[] = "Point vvv";
  char *res_s21 = s21_trim(source, sep);
  ck_assert_str_eq(result, res_s21);
  if (res_s21 != s21_NULL) free(res_s21);
}
END_TEST

START_TEST(test_s21_trim_5) {
  char source[40] = "      Point vvv    ";
  char sep[] = ",. ";
  char result[] = "Point vvv";
  char *res_s21 = s21_trim(source, sep);
  ck_assert_str_eq(result, res_s21);
  if (res_s21 != s21_NULL) free(res_s21);
}
END_TEST

Suite *string_all_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_string");

  tc_core = tcase_create("s21_string_case");

  tcase_add_test(tc_core, test_my_insert_1);
  tcase_add_test(tc_core, test_my_insert_2);
  tcase_add_test(tc_core, test_my_insert_3);
  tcase_add_test(tc_core, test_my_insert_4);
  tcase_add_test(tc_core, test_my_insert_5);

  tcase_add_test(tc_core, test_my_memchr_1);
  tcase_add_test(tc_core, test_my_memchr_2);
  tcase_add_test(tc_core, test_my_memchr_3);
  tcase_add_test(tc_core, test_my_memchr_4);
  tcase_add_test(tc_core, test_my_memchr_5);

  tcase_add_test(tc_core, test_my_memcmp_3);
  tcase_add_test(tc_core, test_my_memcmp_2);
  tcase_add_test(tc_core, test_my_memset_1);
  tcase_add_test(tc_core, test_my_memcmp_4);
  tcase_add_test(tc_core, test_my_memcmp_5);
  tcase_add_test(tc_core, test_my_memcmp_6);

  tcase_add_test(tc_core, test_my_memcpy_1);
  tcase_add_test(tc_core, test_my_memcpy_2);
  tcase_add_test(tc_core, test_my_memcpy_3);
  tcase_add_test(tc_core, test_my_memcpy_4);
  tcase_add_test(tc_core, test_my_memcpy_5);

  tcase_add_test(tc_core, test_my_memset_2);
  tcase_add_test(tc_core, test_my_memset_3);
  tcase_add_test(tc_core, test_my_memset_1);
  tcase_add_test(tc_core, test_my_memset_4);
  tcase_add_test(tc_core, test_my_memset_5);

  tcase_add_test(tc_core, test_my_strchr_1);
  tcase_add_test(tc_core, test_my_strchr_2);
  tcase_add_test(tc_core, test_my_strchr_3);
  tcase_add_test(tc_core, test_my_strchr_4);
  tcase_add_test(tc_core, test_my_strchr_5);

  tcase_add_test(tc_core, test_s21_strcspn_1);
  tcase_add_test(tc_core, test_s21_strcspn_2);
  tcase_add_test(tc_core, test_s21_strcspn_3);
  tcase_add_test(tc_core, test_s21_strcspn_4);
  tcase_add_test(tc_core, test_s21_strcspn_5);

  tcase_add_test(tc_core, test_my_strerror_2);
  tcase_add_test(tc_core, test_my_strerror_3);
  tcase_add_test(tc_core, test_my_strerror_1);
  tcase_add_test(tc_core, test_my_strerror_4);
  tcase_add_test(tc_core, test_my_strerror_5);
  tcase_add_test(tc_core, test_my_strerror_6);

  tcase_add_test(tc_core, test_s21_strlen_1);
  tcase_add_test(tc_core, test_s21_strlen_2);
  tcase_add_test(tc_core, test_s21_strlen_3);
  tcase_add_test(tc_core, test_s21_strlen_4);
  tcase_add_test(tc_core, test_s21_strlen_5);

  tcase_add_test(tc_core, test_my_strncat_1);
  tcase_add_test(tc_core, test_my_strncat_2);
  tcase_add_test(tc_core, test_my_strncat_3);
  tcase_add_test(tc_core, test_my_strncat_4);

  tcase_add_test(tc_core, test_my_strncmp_3);
  tcase_add_test(tc_core, test_my_strncmp_2);
  tcase_add_test(tc_core, test_my_strncmp_1);
  tcase_add_test(tc_core, test_my_strncmp_4);
  tcase_add_test(tc_core, test_my_strncmp_5);

  tcase_add_test(tc_core, test_my_strncpy_1);
  tcase_add_test(tc_core, test_my_strncpy_2);
  tcase_add_test(tc_core, test_my_strncpy_3);
  tcase_add_test(tc_core, test_my_strncpy_4);
  tcase_add_test(tc_core, test_my_strncpy_5);

  tcase_add_test(tc_core, test_s21_strpbrk_1);
  tcase_add_test(tc_core, test_s21_strpbrk_2);
  tcase_add_test(tc_core, test_s21_strpbrk_3);
  tcase_add_test(tc_core, test_s21_strpbrk_4);
  tcase_add_test(tc_core, test_s21_strpbrk_5);

  tcase_add_test(tc_core, test_s21_strrchr_1);
  tcase_add_test(tc_core, test_s21_strrchr_2);
  tcase_add_test(tc_core, test_s21_strrchr_3);
  tcase_add_test(tc_core, test_s21_strrchr_4);
  tcase_add_test(tc_core, test_s21_strrchr_5);

  tcase_add_test(tc_core, test_s21_strstr_1);
  tcase_add_test(tc_core, test_s21_strstr_2);
  tcase_add_test(tc_core, test_s21_strstr_3);
  tcase_add_test(tc_core, test_s21_strstr_4);
  tcase_add_test(tc_core, test_s21_strstr_5);

  tcase_add_test(tc_core, test_s21_strtok_1);
  tcase_add_test(tc_core, test_s21_strtok_2);
  tcase_add_test(tc_core, test_s21_strtok_3);
  tcase_add_test(tc_core, test_s21_strtok_4);
  tcase_add_test(tc_core, test_s21_strtok_5);

  tcase_add_test(tc_core, test_my_to_lower_1);
  tcase_add_test(tc_core, test_my_to_lower_2);
  tcase_add_test(tc_core, test_my_to_lower_3);
  tcase_add_test(tc_core, test_my_to_lower_4);
  tcase_add_test(tc_core, test_my_to_lower_5);

  tcase_add_test(tc_core, test_s21_to_upper_1);
  tcase_add_test(tc_core, test_s21_to_upper_2);
  tcase_add_test(tc_core, test_s21_to_upper_3);
  tcase_add_test(tc_core, test_s21_to_upper_4);
  tcase_add_test(tc_core, test_s21_to_upper_5);

  tcase_add_test(tc_core, test_s21_trim_1);
  tcase_add_test(tc_core, test_s21_trim_2);
  tcase_add_test(tc_core, test_s21_trim_3);
  tcase_add_test(tc_core, test_s21_trim_4);
  tcase_add_test(tc_core, test_s21_trim_5);

  suite_add_tcase(s, tc_core);

  return s;
}
