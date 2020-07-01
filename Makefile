bin/bottlesofbeer : src/bottlesofbeer.c Makefile
	mkdir -p bin/
	cc -o bin/bottlesofbeer src/bottlesofbeer.c