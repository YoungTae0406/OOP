//
// Created by 김혁진 on 14/10/2019.
//

#include "shared_mut.h"

namespace ptr {
shared_mut::shared_mut() {
    _mgr = new mgr();
}

shared_mut::shared_mut(Object* _obj) {
    _mgr = new mgr(_obj);
}

shared_mut::~shared_mut() {
    release();
}
Object* shared_mut::get() const {
	if (_mgr->ptr == nullptr) {
		return nullptr;
	}
	else {
		return _mgr->ptr;
	}
}

void shared_mut::release() {
	if (_mgr->count == 0) {
		_mgr->ptr = nullptr;
	}
	else {
		_mgr->count -= 1;
	}
}
int shared_mut::count() {
	return _mgr->count;
}
void shared_mut::increase() {
	_mgr->count++;
}

shared_mut shared_mut::operator+(const shared_mut &shared) {
	shared_mut l = *this;
	l._mgr->ptr->get() += shared->get();
	shared_mut nnew = l;
	return nnew;
}
shared_mut shared_mut::operator-(const shared_mut &shared) {
	shared_mut l = *this;
	l._mgr->ptr->get() -= shared->get();
	shared_mut nnew = l;
	return nnew;
}
shared_mut shared_mut::operator*(const shared_mut &shared) {
	shared_mut l = *this;
	l._mgr->ptr->get() *= shared->get();
	shared_mut nnew = l;
	return nnew;
}
shared_mut shared_mut::operator/(const shared_mut &shared) {
	shared_mut l = *this;
	l._mgr->ptr->get() /= shared->get();
	shared_mut nnew = l;
	return nnew;
}
shared_mut shared_mut::operator=(const shared_mut &r) {
	shared_mut l = *this;
	l.release();
	l = r;
	r.increase();
}
Object* shared_mut::operator->() {
	shared_mut l = *this;
	return l._mgr->ptr;
}
shared_mut shared_mut::operator+(unique_immut &unique) {
	shared_mut l = *this;
	l._mgr->ptr->get() += unique->get();
	shared_mut nnew = l;
	return nnew;
}
shared_mut shared_mut::operator-(unique_immut &unique) {
	shared_mut l = *this;
	l._mgr->ptr->get() += unique->get();
	shared_mut nnew = l;
	return nnew;
}
shared_mut shared_mut::operator*(unique_immut &unique) {
	shared_mut l = *this;
	l._mgr->ptr->get() += unique->get();
	shared_mut nnew = l;
	return nnew;
}
shared_mut shared_mut::operator/(unique_immut &unique) {
	shared_mut l = *this;
	l._mgr->ptr->get() += unique->get();
	shared_mut nnew = l;
	return nnew;
}
shared_mut shared_mut::operator=(unique_immut &r) {
	shared_mut l = *this;
	l.release();
	l = r;
	r.increase();
}

} // end of namespace ptr
