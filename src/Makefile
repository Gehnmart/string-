.PHONY: clean gcov_report rebuild test
CC = gcc
CFLAGS := -std=c11 -Wall -Wextra -Werror -g

ifeq ($(shell uname -s),Linux) 
	LDFLAGS = -pthread -lcheck_pic -pthread -lrt -lm -lsubunit
else  
	LDFLAGS = -lcheck 
endif

TEST_STRING  = $(wildcard tests/test_string/*.c)
TEST_SSCANF  = $(wildcard tests/test_sscanf/*.c)
TEST_SPRINTF = $(wildcard tests/test_sprintf/*.c)

TEST_OBJ_STRING  = $(TEST_STRING:.c=.o)
TEST_OBJ_SSCANF  = $(TEST_SSCANF:.c=.o)
TEST_OBJ_SPRINTF = $(TEST_SPRINTF:.c=.o)

SOURCE_STRING = $(wildcard s21_string/*.c)
SOURCE_SSCANF = $(wildcard s21_sscanf/*.c)
SOURCE_SPRINTF = $(wildcard s21_sprintf/*.c)
STRING_OBJS =   $(SOURCE_STRING:.c=.o)
SSCANF_OBJS =   $(SOURCE_SSCANF:.c=.o)
SPRINTF_OBJS =   $(SOURCE_SPRINTF:.c=.o)

all: s21_string.a

rebuild: clean all

s21_string.a: $(STRING_OBJS) $(SSCANF_OBJS) $(SPRINTF_OBJS)
	ar rcs $@ $^


gcov_report: CFLAGS += -fprofile-arcs -ftest-coverage
gcov_report: LDFLAGS += -lgcov
gcov_report: clean s21_string.a test
	lcov --directory . --capture --output-file ./app.info
	genhtml ./app.info -o ./gcov_report
	open ./gcov_report/index.html


test: $(TEST_OBJ_STRING) $(TEST_OBJ_SSCANF) $(TEST_OBJ_SPRINTF) tests/test_sprintf_all.o s21_string.a
	$(CC) -std=c11 $(TEST_OBJ_STRING) $(TEST_OBJ_SPRINTF) $(TEST_OBJ_SSCANF) tests/test_sprintf_all.o $(LDFLAGS) s21_string.a -o $@
	./test

test%.o: test%.c
	$(CC) -std=c11 -c $< $(LDFLAGS) -o $@


clean:
	rm -f s21_string.a
	find . -name *.o -delete
	find . -name *.gcda -delete
	find . -name *.gcno -delete
	rm -fr gcov_report app.info
	rm -f test
