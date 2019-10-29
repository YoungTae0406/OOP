.SUFFIXES: .cpp .o

OBJECTS = main.o smart_ptr/object.o smart_ptr/smart_obj.o smart_ptr/shared_mut.o smart_ptr/unique_immut.o

CXX = g++
SMT_PTR = smart_ptr

TARGET = test

$(TARGET) : $(OBJECTS)
	$(MAKE) -C $(SMT_PTR)
	$(CXX) -o $(TARGET) $(OBJECTS)

clean :
	rm -rf $(OBJECTS) $(TARGET)

main.o : main.cpp
