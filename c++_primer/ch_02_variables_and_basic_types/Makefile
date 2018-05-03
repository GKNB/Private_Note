OBJ= main.o
FLAG= -std=c++11 -Wall -g
try: $(OBJ)
	g++ -o try $(OBJ) $(FLAG)

main.o: main.c
	g++ -c main.c $(FLAG)

.PHONY: clean

clean:
	rm *.o try
