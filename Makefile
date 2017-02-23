SFML_LIB = -lsfml-graphics -lsfml-window -lsfml-system
SFML_PATH = ./SFML-2.4.2
CXX = g++ -std=c++11

all: test
	export LD_LIBRARY_PATH=$(SFML_PATH)/lib && ./$<

%.o: %.cpp
	$(CXX) -c $< -I$(SFML_PATH)/include

test: test.o
	$(CXX) $< -o $@ -L$(SFML_PATH)/lib $(SFML_LIB)

clean:
	rm *.o test
