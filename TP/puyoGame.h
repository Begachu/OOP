#ifndef __PUYO_H__
#define __PUYO_H__

#include "space.h"
#include "block.h"

namespace BORAD{
	enum{
		W=5, H=12
	};
}

class puyoGame
{
private:
	int score;
	space** borad;
	void game();
	int makeBlock();
	int move(int);
	int allStop();
public:
	puyoGame();
	~puyoGame();
	void print();
};

#endif
