all: constellation.cpp library.cpp driver.cpp
	g++ -o constellation.o library.o driver.o a.out

clear:
	rm -r a.out