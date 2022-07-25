TARGET = result

all: 
	gcc add-nbo.cc -o add-nbo
	./add-nbo thousand.bin five-hundred.bin

