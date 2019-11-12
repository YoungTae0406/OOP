.SUFFIXES :.cpp .o
OBJECTS = OOP_silseub10.o OOP_silseub10_bike.o OOP_silseub10_car.o

CXX = g++
CPPFLAGS = -c

TARGET = test

$(TARGET) : $(OBJECTS)
	$(CXX) -o $(TARGET) $(OBJECTS)

clean :
	rm -rf $(OBJECTS) $(TARGET)
OOP_silseub10.o : OOP_silseub10.cpp
OOP_silseub10_bike.o : OOP_silseub10_bike.cpp
OOP_silseub10_car.o : OOP_silseub10_car.cpp
