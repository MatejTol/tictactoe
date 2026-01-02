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

    std::vector<std::vector<Square>> boegreSid;
    
    for (int column = 0; column < cfg::grid_size.x; column++)
    {   
        std::vector<Square> column_vector;
        boegreSid.push_back(column_vector);

        for (int row = 0; row < cfg::grid_size.y; row++)
        {   
            column_vector.push_back(Square(column, row));
            boegreSid[column][row] = Square(column, row);
        }
    }

    while (window.isOpen())
    {
        processEvents(window, input);
               

        window.clear();
        draw_grid(window);
        
        window.display();
    }
}
