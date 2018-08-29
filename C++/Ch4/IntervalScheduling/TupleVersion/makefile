CPP = g++
CPPFLAGS = -std=c++11

all: main

main: main.o resource.o event.o heap.o
	$(CPP) -o main main.o resource.o event.o heap.o

main.o: main.cpp resource.h
	$(CPP) $(CPPFLAGS) -c main.cpp

resource.o: resource.cpp resource.h
	$(CPP) $(CPPFLAGS) -c  resource.cpp

event.o: event.cpp event.h heap.h
	$(CPP) $(CPPFLAGS) -c event.cpp

heap.o: heap.cpp event.h heap.h
	$(CPP) $(CPPFLAGS) -c heap.cpp

clean:
	$(RM) main *.o *~

