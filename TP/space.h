#ifndef __SPACE_H__
#define __SPACE_H__

#include "block.h"
class space
{
	private:
		block* puyo;
	public:
		space();
		int setBlock();
		int setBlock(block*);
		block* getBlock();
		int delBlock();
		int moveBlock(space&);
};


#endif
