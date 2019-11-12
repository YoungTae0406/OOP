#include "OOP_silseub10.cpp"

class car : public vehicle {
public:
	car();
	car(int a, int b) : vehicle(a, b) {
	
	}
	car(int a, int b, char* c) : vehicle(a, b){
		set_car_name(c);
	}
	car(int a, int b, char* c, bool d) : vehicle(a, b, d) {
		set_car_name(c);
	}

	char* get_car_name() {
		return car_name;
	}
	const char* get_class_name(){
		return "Car";
	}
	void set_car_name(char* c){
		car_name = c;
	}

private:
	char* car_name;

};
