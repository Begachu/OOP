#include <iostream>
#include <ctime>
#include "block.h"
using namespace std;

block::block(){
	//srand((unsigned int)time(0));
	color = rand() % 4;
	state = STATE::MOVE;
	std::cout << "create block! : " << this << endl;
}
block::~block(){
	std::cout << "delete block!" <<endl;
}
int block::getColor(){
	return color;
}
int block::setState(int s){
	if(s==STATE::STOP) state = STATE::STOP;
	else if(s==STATE::MOVE) state = STATE::MOVE;
	else if(s==STATE::DEAD) state = STATE::DEAD;
	else return 0;
	return 1;
}
int block::getState(){
	return state;
}
