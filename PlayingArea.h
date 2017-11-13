#pragma once
class PlayingArea
{
public:

	PlayingArea LeftWall();
	PlayingArea RightWall();
	PlayingArea BottomWall();
	PlayingArea TopWall();
	float mX; float mY;
	float snakePos(float x,float y);
	PlayingArea DrawWalls();

};