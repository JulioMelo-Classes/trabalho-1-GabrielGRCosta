COMPILER = g++
FLAGS = -Wall -std=c++11 -I include -g
PROGRAM_NAME = bin/prog
CPP_FILES = $(wildcard src/*.cpp)
OBJ_FILES = $(CPP_FILES:src/%.cpp=bin/%.o)

all: $(OBJ_FILES)
	$(COMPILER) $(FLAGS) -o $(PROGRAM_NAME) $^

$(OBJ_FILES): bin/%.o: src/%.cpp
	$(COMPILER) $(FLAGS) -c  $< -o $@

clean:
<<<<<<< HEAD
	rm -f bin/*.o
	rm -f $(PROGRAM_NAME)
	
=======
	rm -rf *.o
	rm $(PROGRAM_NAME)
>>>>>>> 8185f67ed0fb741f843191c4317d421f576246b7
