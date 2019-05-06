.PHONY: all clean cleantest start test no-rm testlib

g = g++
pars = -c -Wall -Werror

file1 = src/main.cpp
file2 = src/board.cpp

GTEST_DIR = thirdparty/googletest

object1 = build/src/main.o
object2 = build/src/board.o
objects = $(object1) $(object2)

binary = bin/chessviz



all: $(binary)

$(binary): $(objects)
	$(g) $^ -o $(binary)

$(object1): $(file1)
	$(g) $(pars) $^ -o $@
 
$(object2): $(file2)
	$(g) $(pars) $^ -o $@


test: testlib bin/chessviz-test


testlib:
	g++ -std=c++11 -isystem ${GTEST_DIR}/include -I${GTEST_DIR} \
    -pthread -c ${GTEST_DIR}/src/gtest-all.cc -o build/test/gtest-all.o
	ar -rv build/test/libgtest.a build/test/gtest-all.o

bin/chessviz-test: build/test/test.o $(object2)
	g++ -std=c++11 -isystem ${GTEST_DIR}/include -pthread $^ \
	build/test/libgtest.a -o $@

build/test/test.o: test/test.cpp
	$(g) -std=c++11  $(pars) $^ -I $(GTEST_DIR)/include -o $@



start: 
	$(binary)

no-rm: $(binary)

clean:
	rm build/src/*.o
cleantest:
	rm build/test/*.o
