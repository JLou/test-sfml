#include "AbstractScreen.h"

class MenuScreen : public AbstractScreen
{
public:
	MenuScreen();
	void Update(sf::Clock Clock, sf::RenderWindow App);
	void Draw(sf::Clock Clock, sf::RenderWindow& App);
private:
	//std::vector<sf::String> _buttons;	
	sf::String _buttons [3];
};