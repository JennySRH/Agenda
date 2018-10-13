CC := g++
FLAGS := -std=c++11 -w

main: Date.o Meeting.o main.o
	$(CC) $(FLAGS) Date.o Meeting.o main.o -o $@

Date.o: Date.hpp Date.cpp
	$(CC) $(FLAGS) -c Date.cpp

Meeting.o: Meeting.hpp Meeting.cpp
	$(CC) $(FLAGS) -c Meeting.cpp

main.o: main.cpp
	$(CC) $(FLAGS) -c main.cpp

clean:
	@rm -f *.o
	@rm -f *.gch
	@rm -f main