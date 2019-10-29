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
void unique_immut::release(){
	if(_mgr!=nullptr){
		_mgr->~mgr();
		_mgr = nullptr;
	}
}
Object* unique_immut::get() const{
	if(_mgr==nullptr)
		return nullptr;
	return _mgr->ptr;
}

unique_immut::~unique_immut() {
    release();
}
unique_immut unique_immut::operator+(unique_immut &unique){
	Object* o1 = get();
	Object* o2 = unique.get();
	int x = o1->get() + o2->get();
	release();
	unique.release();
	Object* o3 = new Object(x);
	return unique_immut(o3);
}
unique_immut unique_immut::operator-(unique_immut &unique){
	Object* o1 = get();
    Object* o2 = unique.get();
    int x = o1->get() - o2->get();
    release();
    unique.release();
    Object* o3 = new Object(x);
    return unique_immut(o3);
}
unique_immut unique_immut::operator*(unique_immut &unique){
	Object* o1 = get();
    Object* o2 = unique.get();
    int x = o1->get() * o2->get();
    release();
    unique.release();
    Object* o3 = new Object(x);
    return unique_immut(o3);
}
unique_immut unique_immut::operator/(unique_immut &unique){
	Object* o1 = get();
    Object* o2 = unique.get();
    int x = o1->get() / o2->get(); 
    release();
    unique.release();
    Object* o3 = new Object(x);
    return unique_immut(o3);
}
unique_immut& unique_immut::operator=(unique_immut &r){
	release();
	if(r.get()!=_mgr->ptr)
		_mgr->ptr = r.get();
	return *this;
}
Object* unique_immut::operator->(){
	return _mgr->ptr;
}

} // end of namespace ptr
