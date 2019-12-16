
#include <iostream>
#include <ctime>
#include "getch.h"
#include "space.h"
#include "puyoGame.h"
using namespace std;

int main(){
	srand((unsigned int)time(0));
	std::cout<< "Puyo Puyo Game!!!\n\n>>Press Enter<<" <<std::endl;
	char input;
	do{
		input=getch();
	}while(input!='\n');
	do{
		system("clear");
		puyoGame* game = new puyoGame();
		delete game;
		std::cout << "Restart? [Y/N]" <<std::endl;
		do{
			input=getch();
		}while(input!='Y'&&input!='y'&&input!='N'&&input!='n');
	}while(input=='Y'||input=='y');
	std::cout<<"exit"<<std::endl;
	return 0;
}
