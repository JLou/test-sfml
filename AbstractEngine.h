#include <SFML/System.hpp>

class AbstractEngine 
{
public:
	AbstractEngine();
	~AbstractEngine();
	virtual void Load();
	virtual void Unload();
	virtual void Update(sf::Clock Clock);
};