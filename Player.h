#pragma once
#include "SFML/Graphics.hpp"
#include <vector>
#include <string>
class Player
{
public:
	Player() {};
	~Player() {};
	void set();
	void push();
	

	

	
protected:

	sf::RectangleShape m_shape;
	sf::RectangleShape m_shape1;
	sf::CircleShape m_ball;
	sf::CircleShape m_object1;
	sf::CircleShape m_object2;
	sf::CircleShape m_object3;
	std::vector<sf::CircleShape>Shapes;
	
	
	
	
	

};

