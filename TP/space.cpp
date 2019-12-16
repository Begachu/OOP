#include <iostream>
#include "space.h"
#include "block.h"
using namespace std;

space::space(){
	puyo = nullptr;
}
int space::setBlock(){
	if(puyo!=nullptr) return 1;
	puyo = new block();
	return 0;
}
int space::setBlock(block& b){
	if(puyo!=nullptr) return 1;
	puyo = &b;
	return 0;
}
int space::delBlock(){
	if(puyo==nullptr) return 1;
	delete puyo;
	puyo = nullptr;
	return 0;
}
block* space::getBlock(){
	return puyo;
}
int space::moveBlock(space& s){
	if(puyo==nullptr) return 1;
	s.setBlock(*puyo);
	puyo = nullptr;
	return 0;
}
