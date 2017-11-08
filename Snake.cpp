#include "Snake.h"

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

Snake Snake::Length(int length)
{
	Snake Cobra;
	snakeLength = length;
	return Cobra.Length;
}

Snake Snake::Grow(int NewLength)
{
	Snake Cobra;
	NewLength=snakeLength + 1;
	return Cobra.Grow;
}
