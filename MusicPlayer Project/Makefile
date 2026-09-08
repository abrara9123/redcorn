CXX = g++
CXXFLAGS = -Wall -std=c++20 -lsfml-audio -lsfml-system

run: main
	./main

main: main.cpp loadSongs.hpp loadSongs.cpp soundEngine.hpp soundEngine.cpp soundObject.hpp soundObject.cpp
	$(CXX) $(CXXFLAGS) main.cpp loadSongs.cpp soundEngine.cpp soundObject.cpp -o main

clean:
	rm -f ./main.out

