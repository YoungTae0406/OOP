//
// Created by 김혁진 on 14/10/2019.
//

#include "unique_immut.h"

namespace ptr {
unique_immut::unique_immut() {
    _mgr = new mgr();
}

unique_immut::unique_immut(Object *obj) {
    _mgr = new mgr(obj);
}

unique_immut::unique_immut(const unique_immut &immut) {
    if (immut._mgr) {
        int val = immut._mgr->ptr->get();
        _mgr = new mgr(val);
    }
}

unique_immut::~unique_immut() {
    release();
}
Object* unique_immut::get() const {
	if (_mgr.ptr == nullptr) {
		return nullptr;
	}
	else {
		return _mgr.ptr;
	}
}
void unique_immut::release() {
	if (_mgr.ptr != nullptr) {
		delete(_mgr);
	}
}
unique_immut unique_immut::operator+(unique_immut &unique) {
	unique_immut l = *this;
	l._mgr->ptr->get() += unique->get();
	unique_immut ne(l);
	l.release();
	return ne;
}
unique_immut unique_immut::operator-(unique_immut &unique) {
	unique_immut l = *this;
	l._mgr->ptr->get() -= unique->get();
	unique_immut ne(l);
	l.release();
	return ne;
}
unique_immut unique_immut::operator*(unique_immut &unique) {
	unique_immut l = *this;
	l._mgr->ptr->get() *= unique->get();
	unique_immut ne(l);
	l.release();
	return ne;
}
unique_immut unique_immut::operator/(unique_immut &unique) {
	unique_immut l = *this;
	l._mgr->ptr->get() /= unique->get();
	unique_immut ne(l);
	l.release();
	return ne;
}
Object* unique_immut::operator->() {
	unique_immut l = *this;
	return l._mgr->ptr;
}
unique_immut&operator=(unique_immut& r) {
	unique_immut l = *this;
	if (l == r) {
		return l;
	}
	else {
		l.release();
		unique_immut ne(l);
		return ne;
	}
}

} // end of namespace ptr
