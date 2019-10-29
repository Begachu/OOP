using namespace std;
#include <iostream>
class A {
public:
	void print() {
		cout <<"This Class is A" << endl;
	}
};

class B : public A {
public:
	void print(){
		cout << "This Class is B" << endl;
	}
};

int main(){
	A * a = new B();
	B * b = new B();

	a->print();
	b->print();
	return 0;
}
