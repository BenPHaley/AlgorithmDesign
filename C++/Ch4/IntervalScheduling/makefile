CPP = g++
CPPFLAGS = -std=c++11

all: main

main: main.o resource.o event.o heap.o comparators.o
	$(CPP) -o main main.o resource.o event.o heap.o comparators.o

main.o: main.cpp resource.h
	$(CPP) $(CPPFLAGS) -c main.cpp

resource.o: resource.cpp resource.h
	$(CPP) $(CPPFLAGS) -c  resource.cpp

event.o: event.cpp event.h heap.h
	$(CPP) $(CPPFLAGS) -c event.cpp

heap.o: heap.cpp event.h heap.h comparators.h
	$(CPP) $(CPPFLAGS) -c heap.cpp

comparators.o: comparators.cpp comparators.h event.h
	$(CPP) $(CPPFLAGS) -c comparators.cpp

clean:
	$(RM) main *.o *~

