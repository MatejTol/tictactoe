#include <SFML/Graphics.hpp>

#include "../config.hpp"
#include "draw_line.hpp"

void draw_grid(sf::RenderWindow& window)
{
    float stepsize_x = cfg::window_size.x / (cfg::grid_size.x);
    float stepsize_y = cfg::window_size.y / (cfg::grid_size.y);

    for (int i=0; i < cfg::grid_size.x + 1; i++)
    {
        sf::Vector2f point1;
        sf::Vector2f point2;

        point1.x = i*stepsize_x; 
        point2.x = i*stepsize_x;

        point1.y = 0.0;
        point2.y = cfg::window_size.y;

        draw_line(window, point1, point2);
    }

    for (int i=0; i < cfg::grid_size.y + 1; i++)
    {
        sf::Vector2f point1;
        sf::Vector2f point2;

        point1.x = 0.0;
        point2.x = cfg::window_size.x;

        point1.y = i*stepsize_y;
        point2.y = i*stepsize_y;

        draw_line(window, point1, point2);
    }
}