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
shared_mut::shared_mut(const shared_mut& shared){
	_mgr=shared._mgr;
	increase();
}
void shared_mut::release(){
	_mgr->count = count()-1;
	if(count()==0){
		_mgr->~mgr();
		_mgr = nullptr;
	}
	_mgr = new mgr();
}
Object* shared_mut::get() const{
	if(_mgr==nullptr){
		return nullptr;
	}
	return _mgr->ptr;
}
int shared_mut::count(){
	return _mgr->count;
}
void shared_mut::increase(){
	_mgr->count = count()+1;
}
shared_mut::~shared_mut() {
    release();
}
shared_mut shared_mut::operator+(const shared_mut &shared){
	Object* o1 = get();
	Object* o2 = shared.get();
	int x = o1->get() + o2->get();
	Object* o3 = new Object(x);
	shared_mut s = shared_mut(o3);
	return s;
}
shared_mut shared_mut::operator-(const shared_mut &shared){
	Object* o1 = get();
    Object* o2 = shared.get();
    int x = o1->get() - o2->get();
    Object* o3 = new Object(x);
    shared_mut s = shared_mut(o3);
	return s;
}
shared_mut shared_mut::operator*(const shared_mut &shared){
	Object* o1 = get();
    Object* o2 = shared.get();
    int x = o1->get() * o2->get();
    Object* o3 = new Object(x);
    shared_mut s = shared_mut(o3);
	return s;
}
shared_mut shared_mut::operator/(const shared_mut &shared){
	Object* o1 = get();
    Object* o2 = shared.get();
    int x = o1->get() / o2->get();
    Object* o3 = new Object(x);
    shared_mut s = shared_mut(o3);
    return s;
}
Object* shared_mut::operator->() {
    return _mgr->ptr;
}
shared_mut& shared_mut::operator=(const shared_mut &r){
	release();
	_mgr->ptr = r.get();
	increase();
}
} // end of namespace ptr
