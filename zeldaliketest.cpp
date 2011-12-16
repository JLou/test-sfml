#include <iostream>
#include <SFML/Graphics.hpp>
#include "MenuScreen.h"

int main()
{
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "SFML Window");
	sf::Clock Clock;
	MenuScreen Ms;

	// Exécution de la boucle principale
    while (App.IsOpened())
    {
        // Traitement des évènements
        sf::Event Event;
        while (App.GetEvent(Event))
        {
            // Fenêtre fermée : on quitte
            if (Event.Type == sf::Event::Closed)
                App.Close();
        }
		sf::Randomizer::SetSeed(sf::Randomizer::Random(0,10000));


        // Efface l'écran (remplissage avec du noir)
		App.Clear();
		//App.Clear(sf::Color(sf::Randomizer::Random(0,255),sf::Randomizer::Random(0,255),sf::Randomizer::Random(0,255),255));

		Ms.Draw(Clock, App);
        
		// Affichage du contenu de la fenêtre à l'écran
        App.Display();
	}
    return EXIT_SUCCESS;
}