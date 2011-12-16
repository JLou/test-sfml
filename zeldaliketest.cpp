#include <iostream>
#include <SFML/Graphics.hpp>
#include "MenuScreen.h"

int main()
{
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "SFML Window");
	sf::Clock Clock;
	MenuScreen Ms;

	// Ex�cution de la boucle principale
    while (App.IsOpened())
    {
        // Traitement des �v�nements
        sf::Event Event;
        while (App.GetEvent(Event))
        {
            // Fen�tre ferm�e : on quitte
            if (Event.Type == sf::Event::Closed)
                App.Close();
        }
		sf::Randomizer::SetSeed(sf::Randomizer::Random(0,10000));


        // Efface l'�cran (remplissage avec du noir)
		App.Clear();
		//App.Clear(sf::Color(sf::Randomizer::Random(0,255),sf::Randomizer::Random(0,255),sf::Randomizer::Random(0,255),255));

		Ms.Draw(Clock, App);
        
		// Affichage du contenu de la fen�tre � l'�cran
        App.Display();
	}
    return EXIT_SUCCESS;
}