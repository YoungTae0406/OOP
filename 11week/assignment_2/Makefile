.SUFFIXES: .cpp .o

OBJECTS = Integer.o Complex.o Float.o test.o
TEST_FILE = test.o $(OBJECTS)
CXX = g++
CPPFALGS = -c
TEST = result
$(TEST) : $(TEST_FILE)
			  $(CXX) -o $(TEST) $(TEST_FILE)
clean :
	rm -rf $(TEST) $(TEST_FILE)

Integer.o : Integer.cpp
Complex.o : Complex.cpp
Float.o : Float.cpp
test.o : test.cpp

