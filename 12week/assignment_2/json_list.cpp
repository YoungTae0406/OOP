#include "json_list.h"
#include "Integer.h"

#include <vector>
//v라는 json_object*을 타입으로 가지는 벡터가 존재함

json_list::json_list() {
	std::vector<json_object*> v;
}
json_object* json_list::parse(const char* ch, int len) {
	_index = 1;
	char* temp = new char[len + 1];
	while (_index < len+1) {
		
		if (48 <= ch[_index] && ch[_index] <= 57) {
			int n = int(ch[_index]);
			Integer* m = new Integer(n);
			v.push_back(m);
			
		}
		


	}


}
json_object* json_list::operator[] (int key) const {

}
json_object::_type json_list::type() {
	return json_object::LIST;
}
std::string json_object::to_string() {

}
