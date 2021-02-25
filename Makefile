compile:
	g++ -std=c++20 Item.cpp -c
	g++ -std=c++20 Iterator.cpp -c
	g++ -std=c++20 List.cpp -c

all: compile
	g++ -std=c++20 main.cpp *.o && ./a.exe