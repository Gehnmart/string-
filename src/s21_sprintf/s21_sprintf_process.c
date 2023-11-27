#include "s21_sprintf_process.h"

#include <stdio.h>

#include "parse_sprintf.h"
#include "s21_sprintf_lib.h"

// process string %e

int process_e(char* p_dest, param_t param, long double value, bool capital,
              bool from_g) {
  char char_e = 'e';
  if (capital) char_e = 'E';

  int value_length = 1;
  param.width -= 4;

  if (value >= 1.0e+100 || value <= 1.0e-100) param.width -= 1;
  // if(value >= 1.0e+1000 || value <= 1.0e-1000) param.width_count -= 1;

  // pre-process
  if (param.precision == 0) param.precision = 6;
  if (from_g) param.precision -= 1;

  param.precision += value_length;
  param.width -= param.precision;
  if (param.precision != value_length) --param.width;

  // preserve place for '-' , '+' , ' ', '#'
  if (value < 0 || param.flags[none] || param.flags[plus]) --param.width;

  // process width align: right (spaces)
  while (!param.flags[zero] && !param.flags[sub] && param.width > 0) {
    *p_dest = ' ';
    p_dest += 1;
    --param.width;
  }

  // output '-' , '+' , ' '
  if (value < 0 || param.flags[none] || param.flags[plus]) {
    if (value < 0) {
      value = -value;
      *p_dest = '-';
    } else if (param.flags[plus])
      *p_dest = '+';
    else if (param.flags[none])
      *p_dest = ' ';

    p_dest += 1;
  }

  // process width align: right (zeros)
  while (param.flags[zero] && !param.flags[sub] && param.width > 0) {
    *p_dest = '0';
    p_dest += 1;
    --param.width;
  }

  long double dummy = 0;
  int count_e = 0;

  if (value != 0.0) {
    // process integer part
    dummy = floorl(value / powl(10.0, count_e));

    while (dummy > 10.0) {
      ++count_e;
      dummy = floorl(value / powl(10.0, count_e));
    }

    while (dummy < 1.0) {
      --count_e;
      dummy = floorl(value / powl(10.0, count_e));
    }

    // process '.'
    *(p_dest)++ = dummy + '0';
    if (param.precision > 1) *(p_dest)++ = '.';
    --param.precision;

    // process fractional part
    int count_e_sub = count_e;

    while (param.precision > 0) {
      --count_e_sub;
      long double temp = fmodl(value / powl(10.0, count_e_sub - 1), 10.0);

      if (temp >= 5 && temp < 9.999999) {
        *(p_dest)++ =
            fmodl(floorl(value / powl(10.0, count_e_sub)), 10.0) + '0';
      } else {
        *(p_dest)++ =
            fmodl(roundl(value / powl(10.0, count_e_sub)), 10.0) + '0';
      }
      --param.precision;

      if (!param.precision) {
        long double temp = fmodl(value / powl(10.0, count_e_sub - 1), 10.0);
        if (temp >= 5 && temp < 9.999999) {
          --p_dest;
          *p_dest += 1;
          if (*p_dest > '9') *p_dest -= 10;
          ++p_dest;
        }
      }
    }

    // if value is zero
  } else {
    // process '.'
    *(p_dest)++ = dummy + '0';
    if (param.precision > 1) *(p_dest)++ = '.';
    --param.precision;

    // process fractional part
    int count_e_sub = count_e;

    while (param.precision > 0) {
      --count_e_sub;
      *(p_dest)++ = fmodl(roundl(value / powl(10.0, count_e_sub)), 10.0) + '0';
      --param.precision;
    }
  }

  // process e + n
  *(p_dest)++ = char_e;
  int count_e_sub = count_e;

  if (count_e_sub >= 0) *(p_dest)++ = '+';
  if (count_e_sub < 0) *(p_dest)++ = '-';

  if (count_e_sub < 0) count_e_sub = -count_e_sub;

  if (count_e_sub < 10) {
    *(p_dest)++ = '0';
    *(p_dest)++ = count_e_sub + '0';
  } else if (count_e_sub < 100) {
    *(p_dest)++ = count_e_sub / 10 + '0';
    *(p_dest)++ = count_e_sub % 10 + '0';
  } else {
    *(p_dest)++ = count_e_sub / 100 + '0';
    *(p_dest)++ = (count_e_sub / 10) % 10 + '0';
    *(p_dest)++ = count_e_sub % 10 + '0';
  }

  // process width align: left (spaces)
  while (param.flags[sub] && param.width > 0) {
    *p_dest = ' ';
    p_dest += 1;
    --param.width;
  }

  *p_dest = '\0';

  return count_e;
}

// process string %f

int process_f(char* p_dest, param_t param, long double value) {
  int value_length = f_len(value);
  if (value_length == 0) value_length = 1;

  // pre-process
  if (param.precision == 0) param.precision = 6;
  param.precision += value_length;
  param.width -= param.precision;
  if (param.precision != value_length) --param.width;

  // preserve place for '-' , '+' , ' ', '#'
  if (value < 0 || param.flags[none] || param.flags[plus]) --param.width;
  // if (param.flags[hash]) --param.width;

  // process width align: right (spaces)
  if (!param.flags[zero] && !param.flags[sub]) {
    while (param.width > 0) {
      *p_dest = ' ';
      p_dest += 1;
      --param.width;
    }
  }

  // output '-' , '+' , ' '
  if (value < 0 || param.flags[none] || param.flags[plus]) {
    if (value < 0) {
      value = -value;
      *p_dest = '-';
    } else if (param.flags[plus])
      *p_dest = '+';
    else if (param.flags[none])
      *p_dest = ' ';

    p_dest += 1;
  }

  // process width align: right (zeros)
  while (param.flags[zero] && !param.flags[sub] && param.width > 0) {
    *p_dest = '0';
    p_dest += 1;
    --param.width;
  }

  long double dec_value = fabsl(value - roundl(value));
  long double int_value = roundl(value - dec_value);

  // process integer part

  char dest_sub[BUFF_SIZE];
  int i = 0;

  do {
    long double step = powl(10.0, i + 1);
    long double dummy = fmodl(int_value, step);
    // printf(" %Lf %Lf %Lf\n", int_value, step, dummy);

    dummy = dummy / step;
    if (dummy > 0.999999) {
      dummy = 0;
    } else {
      dummy = floorl(dummy * 10.0);
    }

    dest_sub[i] = (char)dummy + '0';
    i++;

    --param.precision;
    --value_length;
  } while (value_length);

  dest_sub[i] = '\0';

  int len = s21_strlen(dest_sub);
  for (int i = 0; i < len / 2; ++i) {
    char ch = dest_sub[i];
    dest_sub[i] = dest_sub[len - 1 - i];
    dest_sub[len - 1 - i] = ch;
  }

  i = 0;

  while (i < len) {
    *p_dest = dest_sub[i];
    p_dest += 1;
    i++;
  }

  // catch the '.'
  if (param.precision > 1 || param.flags[hash]) {
    *p_dest = '.';
    p_dest += 1;
  }

  // process decimal part
  while (param.precision) {
    long double digit = floorl(dec_value * 10);
    dec_value = dec_value * 10 - digit;

    *p_dest = digit + '0';

    if (param.precision == 1 && floorl(dec_value * 10) > 4) {
      *p_dest += 1;
      char* p_temp = p_dest;

      while (*p_temp > '9') {
        *p_temp -= 10.0;
        p_temp -= 1;
        if (*p_temp == '.') p_temp -= 1;
        *p_temp += 1;
      }
    }

    p_dest += 1;

    --param.precision;
  }

  // process width align: left (spaces)
  while (param.flags[sub] && param.width > 0) {
    *p_dest = ' ';
    p_dest += 1;
    --param.width;
  }

  *p_dest = '\0';

  return 0;
}

// process string %ls

int process_ls(char* p_dest, param_t param, wchar_t* value) {
  int value_length = strlenw(value);

  // process width

  param.width -= (param.precision != 0 && param.precision <= value_length)
                     ? param.precision
                     : value_length;

  while (!param.flags[sub] && param.width > 0) {
    *p_dest = ' ';
    p_dest += 1;
    --param.width;
  }

  while (*value) {
    //
    // process precision

    if (param.precision != 0) {
      if (param.precision == 0) {
        break;
      }
      --param.precision;
    }

    // plain output

    *p_dest = *value++;
    p_dest += 1;
  }
  //  str == "d: +00000000000348756923, x: 00000000000014c99bbb, u:
  //  00000000000348756923, o: 00000000002462315673, c: �                   , s:
  //  eirfgheuwrg 84569823, f: +384563245.384572327136993408203125000000 , e:
  //  +3.845632453845723271369934082031e+08             , f:
  //  +384563245.384572327136993408203125000000         , n: , percent: %",
  // str1 == "d: +00000000000348756923, x: 00000000000014c99bbb, u:
  // 00000000000348756923, o: 00000000002462315673, c: �                   , s:
  // eirfgheuwrg 84569823, f: +384563245.384572327136993408203125000000 , e:
  // +3.845632453845723270042046266400e+08             , f:
  // +384563245.384572327136993408203125000000         , n: , percent: %"
  // process width with left align

  while (param.flags[sub] && param.width > 0) {
    *p_dest = ' ';
    p_dest += 1;
    --param.width;
  }

  *p_dest = '\0';

  return 0;
}

// process string %s

int process_s(char* p_dest, param_t param, char* value) {
  int value_length = 6;
  if (value) value_length = s21_strlen(value);

  // process width

  param.width -= (param.precision != 0 && param.precision <= value_length)
                     ? param.precision
                     : value_length;

  while (!param.flags[sub] && param.width > 0) {
    if (param.flags[zero])
      *p_dest = '0';
    else
      *p_dest = ' ';
    p_dest += 1;
    --param.width;
  }

  if (!value) {
    s21_strcat(p_dest, "(null)");
    p_dest += 6;
  } else {
    while (*value) {
      // plain output

      *p_dest = *value++;
      p_dest += 1;
      if (param.precision == 1) break;
      param.precision--;
    }
  }

  // process width with left align
  while (param.flags[sub] && param.width > 0) {
    *p_dest = ' ';
    p_dest += 1;
    --param.width;
  }

  *p_dest = '\0';

  return 0;
}

// process char %c

int process_c(char* p_dest, param_t param, int value) {
  int error = 0;
  if (value) {
    // process width

    param.width -= 1;

    while (!param.flags[sub] && param.width > 0) {
      if (param.flags[zero])
        *p_dest = '0';
      else
        *p_dest = ' ';
      p_dest += 1;
      --param.width;
    }

    // plain output

    *p_dest = value;
    p_dest += 1;

    // process width with left align

    while (param.flags[sub] && param.width > 0) {
      if (param.flags[zero])
        *p_dest = '0';
      else
        *p_dest = ' ';
      p_dest += 1;
      --param.width;
    }
    *p_dest = '\0';

  } else
    error = 1;

  return error;
}

// process int
int process_int(char* num_str, char* str, param_t param, int length,
                int negative) {
  char aggregate[2] = " \0";
  char sign[2] = "\0\0";
  char flag_o_x[3] = "\0\0\0";
  int precision = 0;
  int count_agg = 0;

  if (param.precision != 0) precision = param.precision - length;
  if (precision < 0) precision = 0;
  if (param.width != 0) count_agg = param.width;
  count_agg = count_agg - length - precision;

  check_flags(param, sign, &count_agg, negative, flag_o_x, aggregate,
              &precision);
  if (count_agg < 0) count_agg = 0;
  if (param.flags[sub]) {
    s21_strcat(str, sign);
    s21_strcat(str, flag_o_x);
    for (int i = 0; i < precision; i++) s21_strcat(str, "0");
    s21_strcat(str, num_str);
    for (int i = 0; i < count_agg; i++) s21_strcat(str, aggregate);
  } else {
    if (param.flags[zero]) {
      s21_strcat(str, sign);
      s21_strcat(str, flag_o_x);
      for (int i = 0; i < count_agg; i++) s21_strcat(str, aggregate);
    } else {
      for (int i = 0; i < count_agg; i++) s21_strcat(str, aggregate);
      s21_strcat(str, sign);
      s21_strcat(str, flag_o_x);
    }

    for (int i = 0; i < precision; i++) s21_strcat(str, "0");
    s21_strcat(str, num_str);
  }
  int k = precision + count_agg + (int)s21_strlen(aggregate) +
          (int)s21_strlen(sign) + (int)s21_strlen(flag_o_x) +
          (int)s21_strlen(num_str);

  return k;
}