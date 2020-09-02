#include "Player.h"
#include <iostream>







void Player::set()
{
	
	
	m_shape.setSize(sf::Vector2f(140, 15));
	m_shape.setPosition(560, 550);
	m_shape.setFillColor(sf::Color::Red);
	
	
	////////////////////////////////////////////////////////////////////////////////////////////
	

////////////////////////////////////////////////////////////////////////////////////////////////////
	m_ball.setRadius(12.f);
	m_ball.setFillColor(sf::Color::Red);
	m_ball.setPosition(605, 500);
	/////////////////////////////////////////////////////////////////////////////////////////
	m_object1.setRadius(30.f);
	m_object2.setRadius(30.f);
	m_object3.setRadius(30.f);
	///////////////////////////////////////////////////////////////////////////////////
	m_object1.setFillColor(sf::Color::Green);
	m_object2.setFillColor(sf::Color::Green);
	m_object3.setFillColor(sf::Color::Green);
	//////////////////////////////////////////////////////////////////////////////
	m_object1.setPosition(600, 200);
	m_object2.setPosition(400, 200);
	m_object3.setPosition(800, 200);
	////////////////////////////////////////////////////////////////////////
	
	

}



void Player::push()
{
	Shapes.push_back(m_ball);
	Shapes.push_back(m_object1);
	Shapes.push_back(m_object2);
	Shapes.push_back(m_object3);


}






	
	







