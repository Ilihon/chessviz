g = gcc
pars = -c -Wall -Werror

file1 = src/main.cpp
file2 = src/board.cpp

file1_test = test/main.cpp
thirdparty = thirdparty/ctest.h

object1 = build/src/main.o
object2 = build/src/board.o
objects = $(object1) $(object2)

object1_test = build/test/main.o
object2_test = build/test/board.o
objects_test = $(object1_test) $(object2_test)
 
cbinary = bin/chessviz-test
binary = bin/chessviz


.PHONY: clean test

all: $(binary) clean

$(object1): $(file1)
	$(g) $(pars) $^ -o $@
 
$(object2): $(file2)
	$(g) $(pars) $^ -o $@

$(binary): $(objects)
	$(g) $^ -o $(binary)



$(object1_test): $(file1_test) $(thirdparty) src/board.h
	$(g) $(pars) -I thirdparty -I src -c test/main.cpp -o $@

$(object2_test): $(file2) src/board.h
	$(g) $(pars) $(file2) -o $@

$(cbinary): $(objects_test)
	$(g) $^ -o $(cbinary)



test: 
	$(binary)

ctest: $(cbinary)
	$(cbinary)


no-rm: $(binary)

clean:
	rm build/src/*.o
