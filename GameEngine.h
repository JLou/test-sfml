#include "AbstractEngine.h"
#include <stack>

class GameEngine : public AbstractEngine
{
public:
	void Update(sf::Clock);
private:
	std::stack<AbstractEngine> _screens;	
};