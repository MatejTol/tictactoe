#include <SFML/Graphics.hpp>

#include "user_interface/events.hpp"
#include "graphics/draw_grid.hpp"

Input input;

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        processEvents(window, input);

        window.clear();
        draw_grid(window, 2, 2);
        window.display();
    }
}
