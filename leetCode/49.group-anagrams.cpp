#include <SFML/Graphics.hpp>
#include <stdlib.h> // for rand()
#include <time.h>   // for time()

int main() {
    // Initialization
    sf::RenderWindow window(sf::VideoMode(800, 600), "My First Program");
    srand(time(0)); // Seed for random number generation

    // Infinite loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Randomize circle properties
        int radius = 10 + rand() % 50; // Radius between 10 and 50
        int left = 1 + (rand() % (800 - radius * 2)); // Random x position
        int top = 1 + (rand() % (600 - radius * 2)); // Random y position
        sf::Color color(rand() % 256, rand() % 256, rand() % 256); // Random color

        sf::CircleShape circle(radius);
        circle.setPosition(left, top);
        circle.setFillColor(color);

        window.clear();
        window.draw(circle);
        window.display();

        sf::sleep(sf::milliseconds(100)); // Delay for a while
    }
    return 0;
}