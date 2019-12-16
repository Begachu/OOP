#include <iostream>
#include <ctime>
//#include "getch.h"
#include "puyoGame.h"
#include "space.h"
#include "block.h"
using namespace std;

puyoGame::puyoGame(){
	score = 0;
	borad = new space*[BORAD::W];
	for(int x=0; x< BORAD::W; x++)
	{
		borad[x] = new space[BORAD::H];
	}
	//borad[2][0].setBlock();
	//print();
	game();
}
puyoGame::~puyoGame(){
	std::cout << "your score :"<< score <<std::endl;

}
void puyoGame::game(){
	int x = 0;
	if(allStop()) x = makeBlock();
	int m = 0;
	char input;
	print();
	do{
		input = std::getchar();
	}while(input!='a'&&input!='s'&&input!='d');
	if(input=='a') m = move(2);
	else if(input=='s') m = move(0);
	else m = move(1);
	if(!m&&!x) game();
}
int puyoGame::makeBlock(){
	srand((unsigned int)time(0));
	int shape = rand() % 3;
	int x= 0;
	switch(shape){
		case 0:
			x+=borad[2][1].setBlock();
			x+=borad[2][0].setBlock();
			x+=borad[1][1].setBlock();
			break;
		case 1:
			x+=borad[2][0].setBlock();
			x+=borad[2][1].setBlock();
			x+=borad[2][2].setBlock();
			break;
		case 2:
			x+=borad[2][1].setBlock();
			x+=borad[2][0].setBlock();
			x+=borad[2][2].setBlock();
			x+=borad[1][1].setBlock();
			x+=borad[3][1].setBlock();
	}
	return x;
}
int puyoGame::allStop(){
	for(int x=BORAD::H-1; x>=0; x--)
	{
		for(int y=BORAD::W-1; y>=0; y--)
		{
			if(borad[y][x].getBlock()!=nullptr&&borad[y][x].getBlock()->getState()!=0)
			{
				return 0;
			}
		}
	}
	return 1;
}
int puyoGame::move(int allow){
switch(allow){
	case 0: 	//down
	for(int x=BORAD::H-1; x>0; x--)
	{
		for(int y=BORAD::W-1; y>0; y--)
		{
			block* temp = borad[y][x-1].getBlock();
			if(borad[y][x].getBlock()==nullptr&&temp!=nullptr)
			{
				if(temp->getState()==1)
				borad[y][x-1].moveBlock(borad[y][x]);
			}
		}
	}
	break;
	case 1: 	//right
	for(int y=BORAD::W-1; y>0; y--)
	{
		for(int x=BORAD::H-1; x>0; x--)
		{
			block* temp = borad[y-1][x-1].getBlock();
			if(borad[y][x].getBlock()==nullptr&&temp!=nullptr)
			{
				if(temp->getState()==1)
				borad[y-1][x-1].moveBlock(borad[y][x]); 
			}
		}
	}
	break;
	case 2: 	//left
	for(int y=0; y<BORAD::W-1; y++)
	{
		for(int x=BORAD::H-1; x>0; x--)
		{
			block* temp = borad[y+1][x-1].getBlock();
			if(borad[y][x].getBlock()==nullptr&&temp!=nullptr)
			{
				if(temp->getState()==1)
				borad[y+1][x-1].moveBlock(borad[y][x]); 
			}
		}
	}
}
return 0;
}
int puyoGame::setStop(){
	
	return 0;
}
void puyoGame::print(){
	//std::cout << "test print" <<std::endl;
	system("clear");
	std::cout << "score : 0"<< std::endl;
	for(int x=0; x< BORAD::H; x++)
	{
		char* str = new char[5];
		for(int y=0; y< BORAD::W; y++)
		{
			if(borad[y][x].getBlock()!=nullptr)
			{
				str[y] = borad[y][x].getBlock()->getColor()+48;
				//std::cout << "test : "<< borad[y][x].getBlock()->getColor() <<std::endl; 
			}
			else
			{
				str[y] = '-';
			}
		}
		std::cout << str[0] << "\t" << str[1] << "\t" << str[2] << "\t" << str[3]
				<< "\t" << str[4] << std::endl;
	}
}
