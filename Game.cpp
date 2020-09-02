#include "Game.h"

void Game::show()
{

	set();
	sf::RenderWindow win(sf::VideoMode(1200, 600), "SFML works!");
	while (win.isOpen())
	{
		push();
		
		sf::Event event;
		while (win.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				win.close();
		}
		win.clear();
		win.draw(m_shape);
		for (auto& obj : Shapes)
		{
			win.draw(obj);
		}
		win.display();
	
		logic();
		move();
	}
}

void Game::logic()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		velocityBy = -2.09f;
	}
	m_ball.move(sf::Vector2f{ velocityBx, velocityBy });
	//////////////////////////////////////////////////////// player start

	auto pos = m_ball.getPosition();

	if (pos.x >= 1170)
	{
		velocityBx = -velocityBx;
	}
	else if (pos.y >= 570)
	{
		system("pause");
	}
	else if (pos.x <= 0)
	{
		velocityBx = std::abs(velocityBx);

	}
	else if (pos.y <= 0)
	{
		velocityBy = std::abs(velocityBy);
	}

	//////////////////////////////////////////////////////// boundaries

	if (m_shape.getGlobalBounds().intersects(m_ball.getGlobalBounds()))
	{
		velocityBy = -velocityBy; velocityBx = -velocityBx;
	}


	///////////////////////////////////////////////////////////////////
	    if (m_ball.getGlobalBounds().intersects(m_object1.getGlobalBounds()))
	    {
			velocityBy = -velocityBy; 
		}
		if (m_ball.getGlobalBounds().intersects(m_object2.getGlobalBounds()))
		{
			velocityBy = -velocityBy; 
		}
		if (m_ball.getGlobalBounds().intersects(m_object3.getGlobalBounds()))
		{
			velocityBy = -velocityBy; 
		}
		/////////////////////////////////////////////////////// 


	}


	void Game::move()
	{
		auto pos1 = m_shape.getPosition();
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			velocityX = -2.10f;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			velocityX = 2.10f;

		}

		m_shape.move(sf::Vector2f{ velocityX, 0 });
	}
	
