all:
	g++ -Wall main.cpp -o main
test: 
	./main
clean:
	rm main
