g = g++
pars = -c -std=c++11 -Wall -Werror

file1 = src/main.cpp
file2 = src/board.cpp


object1 = build/src/main.o
object2 = build/src/board.o
objects = $(object1) $(object2)

object1_test = build/test/main.o
object2_test = build/test/board.o
object3_test = build/test/test.o
objects_test = $(object1_test) $(object2_test) $(object3_test)
 
cbinary = bin/chessviz-test
binary = bin/chessviz


.PHONY: clean test all

all: $(binary)

$(object1): $(file1)
	$(g) $(pars) $^ -o $@
 
$(object2): $(file2)
	$(g) $(pars) $^ -o $@

$(binary): $(objects)
	$(g) $^ -o $(binary)


$(object1_test): src/board.cpp src/board.h
	$(g) $(pars) src/board.cpp -o $@

$(object2_test): test/main.cpp thirdparty/ctest.h
	$(g) $(pars) -I thirdparty -I src  -c test/main.cpp -o $@

$(object2_test): test/test.cpp thirdparty/ctest.h src/board.h
	$(g) $(pars) -I thirdparty -I src -c test/test.cpp -o $@

$(cbinary): $(objects_test)
	$(g) $(pars) $(objects_test) -o $(cbinary)



test: 
	$(binary)

ctest: $(cbinary)
	$(cbinary)


no-rm: $(binary)

clean:
	rm build/src/*.o
	rm build/test/*.o
