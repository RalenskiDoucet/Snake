#pragma once
class Snake
{
public:
	float snakeLength = 3;
	int Health=1;
	bool isAlive(int Life);
	bool isDead(int life);
	Snake Length(int length);
	Snake Grow(int NewLength);
};