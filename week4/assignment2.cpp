#include <iostream>

	int main(){
	int i = 0;			//반복 횟수
	int s_num = 172;	//학번
	int result = 983;	//현재의 g값
	int mod = 1091;		//mod계산 값
	

	int value = 1090-31;
	while(result!=value){
		result = (result+17)%mod;
		i++;
	}
	std::cout << i << std::endl;
	
	result = 1090;
	i = 0;
	while(result!=s_num){
		result = (result*983)%mod;
		i++;
	}
	std::cout << i <<std::endl;
}
