.SUFFIXES: .cpp .o
OBJECTS = Integer.o Complex.o Float.o test.o
CPPFLAGS = -c
CXX = g++
TEST = test
$(TEST) : $(OBJECTS)
			  $(CXX) -o $(TEST) $(OBJECTS)
clean :
	rm -rf $(TEST) $(OBJECTS)

Integer.o : Integer.cpp
Complex.o : Complex.cpp
Float.o : Float.cpp
test.o : test.cpp

