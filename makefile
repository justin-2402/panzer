files = $(wildcard *.cpp) $(wildcard */*.cpp)
pName = main
cxx = g++


all: $(files)
	g++ -Wall -Wextra -Wpedantic -Wshadow $(files) -o $(pName) && ./$(pName)

clean:
	rm -f $(pName)