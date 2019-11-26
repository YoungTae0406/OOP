#include "json_object.h"
#include "String.h"
#include "Integer.h"
#include "json_dict.h"
#include "json_list.h"
#include <string>

int json_object::_index = 0;

json_object* json_object::parse(const char* ch, int len) {
	int tokenIndex = 0;
	_index = 0;
	//printf("%c", ch[_index]);
	while (_index < len) {
		switch (ch[_index]) {
		case '\"': case'\'': {
			std::string str(ch);
			String k(str);
			json_object* kk = k.parse(ch, len, ' ');

			return kk;
			break;
		}
				
		case '[': {
			std::string str(ch);
			json_list k;
			json_object* kk = k.parse(ch, len);
			return kk;
			break;
		}
		case '{': {
			json_dict k;
			json_object* kk = k.parse(ch, len);
			return kk;

			break;
		}

		case'0': case'1': case'2': case'3': case '4': case'5': case'6':
		case'7': case'8': case'9': {
			int aa = atoi(ch);
			Integer k(aa);
			json_object* temp = k.parse(ch, len);
			return temp;
			break;
		}

		}
	}
}
json_object* json_object::parse(const std::string& str) {
	int str_length = str.length();
	const char *temp = str.c_str();
	return json_object::parse(temp, str_length);

}

