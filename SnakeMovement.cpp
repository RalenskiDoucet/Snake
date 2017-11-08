#include "SnakeMovement.h"

float MSnake::Pos(float x, float y)
{
	mX = x;
	mY = y;
	return mX , mY;
}

float MSnake::Move(float x, float y)
{
	float movement;
	mX = x; mY = y;
	mX + movement;
	mY + movement;
	return mX, mY;
}
