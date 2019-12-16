.SUFFIXS: .cpp .o
OBJECTS = block.o puyoGame.o space.o
TEST_FILE = main.o $(OBJECTS)
CXX = g++
TEST = puyoGame

$(TEST):$(TEST_FILE)
	$(CXX) -o $(TEST) $(TEST_FILE)

clean:
	rm -rf $(TEST) $(TEST_FILE)

main.o: main.cpp
block.o: block.cpp
puyoGame.o: puyoGame.cpp
space.o: space.cpp
