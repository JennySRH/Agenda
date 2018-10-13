CC := g++
FLAGS := -std=c++11 -w

main: User.o Date.o Meeting.o main.o
	$(CC) $(FLAGS) Date.o Meeting.o main.o -o $@

User.o: User.hpp User.cpp Meeting.hpp Meeting.cpp
	$(CC) $(FLAGS) -c User.cpp

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