#include "String.h"
#include <string>
#include <iostream>

String::String(const std::string& str) {
	_val = str;
}

void String::set_val(const std::string& str) {
	_val = str;
}

json_object* String::parse(const char* ch, int len, char base) {
	__debugbreak;
	char* temp = new char[len+1];
	int _index = 0;
	while (_index < len+1) {
		if (ch[_index] == '\0') {
			break;
		}
		else {
			temp[_index] = ch[_index];
			_index++;
		}

	}
	std::string ae(temp);
	json_object* tt = new String(ae);
	return tt;

}
String::_type String::type() {
	return STRING;
}
std::string String::to_string() {
	return _val;
}
