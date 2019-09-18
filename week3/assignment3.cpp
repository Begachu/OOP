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
my computer is 64 bit. so

long type = 8 byte
int type = 4 byte
char type = 1 byte
address type = 8 byte

all data in main method are stored in stack
so i = (char name) + (char * copy) + (int * c) + (int i) + (int a)
		+(long b) * 172
	 = 1 + 8 + 8 + 4 + 4 + 8*172 = 1409
but to search faster, there is blank space next to char type.
so we have to add 3. (because search gap is 4 byte or 8 byte)
therefore, i = 1409 + 3 = 1412.
*/
