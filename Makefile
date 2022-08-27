CC := g++
SRC := main.cpp functions.cpp
SRC_TEST := tests.cpp functions.cpp
DIR := C:\Users\USER\Documents\Self-made-functions

.PHONY: all clean

main: $(SRC)
	$(CC) $^ -o $(DIR)\$@

run: $(DIR)\tests.exe
	$(DIR)\tests.exe

test: $(SRC_TEST)
	$(CC) $^ -o $(DIR)\$@

clean:
	rm -rf *.exe
