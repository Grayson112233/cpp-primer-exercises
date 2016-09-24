all: main

main: main.o sales_item.o
	g++ main.o sales_item.o -o main

main.o: main.cpp
	g++ -c main.cpp

sales_item.o: sales_item.cpp
	g++ -c sales_item.cpp