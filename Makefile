g = g++
pars = -c -Wall -Werror
file1 = src/main.cpp
file2 = src/board.cpp
files = $(file1) $(file2)
binary = bin/chessviz
object1 = build/src/main.o
object2 = build/src/board.o
objects = $(object1) $(object2)

.PHONY: clean test

all: $(binary)

$(object1): $(file1)
	$(g) $(pars) $^ -o $@
 
$(object2): $(file2)
	$(g) $(pars) $^ -o $@

$(binary): $(objects)
	$(g) $^ -o $(binary)

test: 
	./bin/chessviz

no-rm: $(binary)

clean:
	rm build/*.o
