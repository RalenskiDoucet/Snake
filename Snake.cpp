#include "Snake.h"

float Snake::mPos(float X, float Y)
{
	mX = X;
	mY = Y;
}

bool Snake::isAlive(int Life)
{ 
	Health = Life;
	if (Health = 0)
	{

	}
	return false;
	if (Health > 0)
	{

	}
	return true;
}

bool Snake::isDead(int life)
{
	Health = life;
	if (Health = 0)
	{

	}
	return true;
	if (Health > 0)
	{

	}
	return false;
}

float Snake::Length(int length)
{
	Snake Cobra;
	snakeSize = length;
	return length;
}

Snake Snake::Grow(int NewLength)
{
	Snake Cobra;
	NewLength=snakeSize + 1;
	return Cobra.Grow;
}
