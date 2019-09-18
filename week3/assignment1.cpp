#include <iostream>

int bss;
static int data = 1;
int code(){
return 0;
}

int main(){
	int * heap = new int[5];
	int stack;

	std::cout << "code\t" << (void*) code << std::endl;
	//std::cout << "Rodata\t" << (void*) rodata  << std::endl;
	std::cout << "Rodata\t" << (void*) "ABC"  << std::endl;
	std::cout << "data\t" << &data << std::endl;
	std::cout << "BSS\t" << &bss << std::endl;
	std::cout << "HEAP\t" << heap << std::endl;
	std::cout << "Stack\t" << &stack << std::endl;
}

