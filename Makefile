OS = $(shell uname)
CC = -Wall -Werror -Wextra -std=c11
FLAGS = -lcheck -lpthread -fprofile-arcs

ifeq ($(OS),Darwin)
	FLAGS += -ftest-coverage
	OPEN_CMD = open
	OPEN_APP = $(OPEN_CMD)
	APP = 3D_Project/3DViewer.app
else
	FLAGS += -lm -lrt -lsubunit -ftest-coverage
	OPEN_CMD = xdg-open
	OPEN_APP = ./
	APP = 3D_Project/3DViewer
endif


all: clean install open

install:
	cd 3D_Project && qmake && make

uninstall:
	cd 3D_Project && rm -rf Makefile ../$(APP) frontend.pro.user .qmake.stash .qtc_clangd .tmp

open:
	$(OPEN_APP) $(APP)

dvi:
	$(OPEN_CMD) README.md

dist: clean install
	cd .. && tar -czvf src/3D_Project/3DViewer.tar.gz src


test: clean
	gcc $(CC) tests/s21_tests.c backend/*.c $(FLAGS) -lgcov -coverage -o test
	./test

gcov_report: clean test
	gcc $(CC) tests/tests.c backend/*.c $(FLAGS) -o test
	./test
	lcov -t "./test"  -o report.info --no-external -c -d .
	genhtml -o report report.info
	$(OPEN_CMD) ./report/index.html

	rm -rf *.gcno *gcda *.gco

rebuild: clean install open

clean: uninstall
	rm -rf *.o *.a test
	rm -rf *.gcno *gcda *.gcov gcov
	rm -rf report report.info
	rm -rf 3DViewer.tar.gz
	rm -rf 3D_Project/*.o
