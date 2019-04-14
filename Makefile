g = g++
pars = -c -Wall -Werror
file1 = src/main.cpp
file2 = src/board.cpp
files = $(file1) $(file2)
binary = bin/main
object1 = build/main.o
object2 = build/board.o
objects = $(object1) $(object2)

all: NewDir $(binary) clean

NewDir:
	mkdir bin build -p

$(object1): $(file1)
	$(g) $(pars) $^ -o $@
 
$(object2): $(file2)
	$(g) $(pars) $^ -o $@

$(binary): $(objects)
	$(g) $^ -o $(binary)

test: all
	./bin/main

no-rm: $(binary)

clean:
	rm build/*.o
