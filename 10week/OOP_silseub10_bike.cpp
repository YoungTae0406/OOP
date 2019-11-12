#include "OOP_silseub10.cpp"

class bike : public vehicle {
public:
	bike();
	bike(int a, int b) : vehicle(a, b){}
	bike(int a, int b, char* c) :  vehicle(a, b){
		bike_name = c;
	}
	bike(int a, int b, char* c, int d) : vehicle(a, b){
		bike_name = c;
		bike_number = d;
	}
	bike(int a, int b, char* c, int d, bool e) : vehicle(a, b, e){
		bike_name = c;
		bike_number = d;
	}

	int get_bike_number(){
		return bike_number;
	}
	char* get_bike_name(){
		return bike_name;
	}
	const char* get_class_name(){
		return "bike";
	}
	void set_bike_name(char* c ){
		bike_name = c;
	}
	void set_bike_number(int d){
		bike_number = d;
	}

private:
	char* bike_name;
	int bike_number;



};
