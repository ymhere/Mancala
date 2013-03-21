CC= g++
main: main.o showTable.o
	$(CC) -o main main.o showTable.o
main.o: main.cpp
	$(CC) -c main.cpp
showTable.o: showTable.cpp
	$(CC) -c showTable.cpp
