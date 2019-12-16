#ifndef __BLOCK_H__
#define __BLOCK_H__

namespace COLOR
{
	enum
	{
		GRAY=0, RED=1, BLUE=2, GREEN=3
	};
}
namespace STATE
{
	enum
	{
		STOP=0, MOVE=1, DEAD=2
	};
}

class block
{
	private:
		int color;
		int state;
	public:
		block();
		~block();
		int getColor();
		int setState(int);
		int getState();
};

#endif
