g = g++
pars = -std=c++11 -Wall -Werror

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


.PHONY: clean test

all: $(binary) clean

$(object1): $(file1)
	$(g) $(pars) $^ -o $@
 
$(object2): $(file2)
	$(g) $(pars) $^ -o $@

$(binary): $(objects)
	$(g) $^ -o $(binary)


$(object1_test): src/board.cpp
	$(g) -I thirdparty -I src $(pars) -MMD -c $^ -o $@

$(object2_test): test/main.cpp
	$(g) -I thirdparty -I src $(pars) -MMD -c $^ -o $@

$(object2_test): test/test.cpp
	$(g) -I thirdparty -I src $(pars) -MMD -c $^ -o $@

$(cbinary): $(objects_test)
	$(g) $^ -o $(cbinary)



test: 
	$(binary)

ctest: $(cbinary)
	$(cbinary)


no-rm: $(binary)

clean:
	rm build/src/*.o
