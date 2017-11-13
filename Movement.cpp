#include "Movement.h"

float Movement::mPos(float x, float y)
{
	mX = x;
	mY = y;
}

float Movement::Up()
{
	mY + 1;
	return mY;
}

float Movement::Down()
{
	mY - 1;
return mY;
}

float Movement::Left()
{
	mX - 1;
	return mX;
}

float Movement::Right()
{
	mX+1;
	return mX;
}
