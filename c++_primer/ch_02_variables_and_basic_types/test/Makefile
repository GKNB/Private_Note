FLAG	= -std=c++11 -g -Wall

main01.o: main01.C
	g++ -c -o main01.o main01.C $(FLAG)

main02.o: main02.C
	g++ -c -o main02.o main02.C $(FLAG)

try01: main01.o
	g++ -o try01 main01.o $(FLAG)

try02: main02.o
	g++ -o try02 main02.o $(FLAG)

adda.o: adda.C declare03.h
	g++ -c -o adda.o adda.C

main03.o: declare03.h
	g++ -c -o main03.o main03.C

try03: declare03.h adda.o main03.o
	g++ -o try03 main03.o adda.o

main04.o: main04.C
	g++ -c -o main04.o main04.C $(FLAG)

main05.o: main05.C
	g++ -c -o main05.o main05.C $(FLAG)

try04: main04.o
	g++ -o try04 main04.o $(FLAG)

try05: main05.o
	g++ -o try05 main05.o $(FLAG)

