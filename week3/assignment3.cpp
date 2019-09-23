#include <iostream>

int main(){
	char target[] = "Han Yugyoung";
	long b[172];
	int a = 17;
	int i = 1412;
	int *c = new int[802];
	const char * copy = "is no no";
	char name = 'a';
	std::cout << &name+i << std::endl;
}
/*
현재 작성한 컴퓨터는 64bit이므로 각 자료형에 할당되는 메모리는 다음과 같다.

int : 4 byte
pointer : 8 byte
double : 8 byte
char : 1 byte
long : 8 byte

해당 변수들은 main()이라는 함수 내에 선언되었으므로 stack에 저장된다.
이러한 점과 위의 자료형별 할당되는 메모리를 통해
name 주소부터 target 주소까지의 거리를 유추해볼 수 있다.

먼저 위와 같은 target의 상수를 표현하기 위해서는 최소 13byte의 메모리가 필요하다.
이때  메모리 주소의 할당은 메모리 공간 절약보다는 탐색 속도에 초점이 맞춰져있어
4의 배수 혹은 8의 배수로 주소를 할당하기 때문에 16byte-13byte=3byte의 빈공간이 앞에 발생한다.
따라서 계산 시 추가로 빈공간 3byte의 값을 더해야 알맞은 결과가 나온다.
또한 long형도 빠른 데이터 탐색 속도를 위해 16의 배수 단위로 이를 저장하기 때문에
long형의 배열 b에도 8byte의 빈공간이 발생하게 되므로 이 또한 포함시켜야한다.

i = char + const char * + int * + int + int + long*172 + 3 + 8
  = 1 + 8 + 8 + 4 + 4 + 8*172 + 3 + 8 = 1412
따라서 i = 1412 이다.
*/
