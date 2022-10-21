all: main
CXXFLAGS = -Wall

main: main.o functions.o
	g++ $(CXXFLAGS) -o main main.o functions.o 

main.o: main.cpp functions.h 
	g++ $(CXXFLAGS) -c main.cpp

functions.o: functions.cpp functions.h
	g++ $(CXXFLAGS) -c functions.cpp

clean:
	rm -f main.o functions.o