#include <SFML/Graphics.hpp>

#include "user_interface/events.hpp"
#include "graphics/draw_grid.hpp"
#include "graphics/draw_cross.hpp"
#include "graphics/draw_circle.hpp"

#include "config.hpp"

#include "board/square.hpp"


Input input;

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({cfg::window_size.x, cfg::window_size.y}), "Let's play tictactoe!");
    window.setFramerateLimit(60);

    Square square_ex(2, 1);
    square_ex.setCircle();

    while (window.isOpen())
    {
        processEvents(window, input);
               

        window.clear();
        draw_grid(window);
        draw_cross(window, sf::Vector2f(250, 380));
        draw_circle(window, sf::Vector2f(400, 800));
        
        square_ex.drawContent(window);

        window.display();
    }
}
