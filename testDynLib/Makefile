all: compile clean

compile: libs
	g++ -L./lib -Wall -o dynLibTest main.cpp -lMath

libs:
	g++ -c -o libMath.o libMath.cpp
	gcc -shared -o lib/libMath.so libMath.o

clean:
	rm libMath.o