OBJECTS=person.o Node.o List.o hash.o
LDFLAGS=
CXXFLAGS=

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)

main.o: main.cpp person.h Node.h List.h hash.h 

person.o: person.cpp person.h

Node.o: Node.cpp person.h Node.h

List.o: List.cpp person.h Node.h List.h

hash.o: hash.cpp person.h Node.h List.h hash.h

tests.o: tests.cpp person.h Node.h List.h hash.h 


clean:
	rm -f *.o $(OBJECTS)
