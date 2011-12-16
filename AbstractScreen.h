#include <stack>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class AbstractScreen
{
public:
	void Update(sf::Clock Clock, sf::RenderWindow App);
	void Draw(sf::Clock Clock, sf::RenderWindow App);
private:
};