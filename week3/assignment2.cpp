#include <iostream>

int main(){
	char * a = "ABC";
	char b[] = "ABC";

	a[0] = 'b';
	std::cout << a << std::endl;
	std::cout << b << std::endl;
}
//a라는 포인터가 현재 가리키는 것은 상수로,
//a가 가르키는 값을 'b'라는 임의의 값으로 변경할 수 없다.
