#include "Integer.h"
#include <string>
#include <stdlib.h>
#include <iostream>

Integer::Integer(int value) {
	_val = value;
}
int Integer::val() {
	return _val;
}
void Integer::set_val(const int& value) {
	_val = value;
}
json_object* Integer::parse(const char* ch, int length) {
	_index = 0;
	char* temp = new char[length+1];
	while (_index < length) {
		if (48 <= ch[_index] && ch[_index] <= 57) {
			temp[_index] = ch[_index];
			_index++;
		}
		else {
			_index++;
			temp[_index] = '\0';
			break;
		}
	}
	int k = atoi(temp);
	json_object* tt = new Integer(k);
	return tt;
	
}
Integer::_type Integer::type() {
	return INT;
}
std::string Integer::to_string() {
	return std::to_string(_val);
}
