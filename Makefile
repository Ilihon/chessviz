g = g++
pars = -c -Wall -Werror

file1 = src/main.cpp
file2 = src/board.cpp
files = $(file1) $(file2)

object1 = build/src/main.o
object2 = build/src/board.o
objects = $(object1) $(object2)

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

test: 
	$(binary)

ctest:
	$(cbinary)


no-rm: $(binary)

clean:
	rm build/src/*.o
