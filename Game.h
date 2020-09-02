#pragma once
#include "Player.h"
class Game : protected Player
{
public:

	Game() {};
	~Game() {};
	void show();
    void logic(); 
    void move(); 
	
protected:
	
	float velocity1 = 0;
	float velocityX = 0;
	float velocityY = 0;
	float velocityBx = 0;
	float velocityBy = 0;
};

