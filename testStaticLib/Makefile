all: compile clean

compile: libs
	g++ -o testLib main.cpp -L./lib -lMath

libs:
	g++ -c libMath.cpp
	ar crf lib/libMath.a libMath.o

clean:
	rm libMath.o
	rm lib/libMath.a