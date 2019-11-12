class vehicle {
public:
	vehicle(){
		set_has_name(false);
	}
	vehicle(int a, int b){
		set_wheel_number(a);
		set_max_speed(b);
	}
	vehicle(int a, int b, bool c){
		set_wheel_number(a);
		set_max_speed(b);
		set_has_name(c);
	}
	int get_wheel_number(){
		return wheel_number;
	}
	int get_max_speed(){
		return max_speed;
	}
	bool get_has_name(){
		return has_name;
	}
	const char* get_class_name(){
		return "vehicle";
	}

	void set_wheel_number(int a){
		wheel_number = a;
	}
	void set_max_speed(int b){
		max_speed = b;
	}
	void set_has_name(bool c){
		has_name = c;
	}

protected:
	bool has_name;
	int wheel_number;
	int max_speed;
};
