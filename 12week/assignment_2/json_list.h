#pragma once
//
// Created by ������ on 2019/11/19.
//

#ifndef JSON_LIST_H
#define JSON_LIST_H

#include "json_object.h"
#include <vector>

class json_list : public json_object {
private:
	std::vector<json_object*> v;
public:
	json_list();
	json_object* parse(const char *, int length);
	json_object* operator[](int key) const;
	_type type();
	std::string to_string();
};

#endif // JSON_LIST_H
