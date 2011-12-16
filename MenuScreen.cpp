#include "MenuScreen.h"
#include <SFML/System.hpp>

MenuScreen::MenuScreen()
{
	_buttons[0] = sf::String("TOTO");
	_buttons[0].SetY(0.f);
	_buttons[1] = sf::String("TOTO");
	_buttons[1].SetY(50.f);
	_buttons[2] = sf::String("TOTO");
	_buttons[2].SetY(100.f);
}

void MenuScreen::Update(sf::Clock Clock, sf::RenderWindow App)
{
	for(int i=0; i < 3; i++)
	{

	}
}

void MenuScreen::Draw(sf::Clock Clock, sf::RenderWindow& App)
{
	for(int i=0; i < 3; i++)
	{
		App.Draw(_buttons[i]);
	}
}