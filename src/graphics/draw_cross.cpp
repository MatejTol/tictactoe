#include <SFML/Graphics.hpp>

#include "draw_line.hpp"
#include "../config.hpp"

void draw_cross(sf::RenderWindow& window, sf::Vector2f position)
{
    draw_line(
        window, 
        position + sf::Vector2f(-cfg::cross_radius, -cfg::cross_radius), 
        position + sf::Vector2f(+cfg::cross_radius, +cfg::cross_radius)
    );
    
    draw_line(
        window,
        position + sf::Vector2f(+cfg::cross_radius, -cfg::cross_radius),
        position + sf::Vector2f(-cfg::cross_radius, +cfg::cross_radius)
    );
    
}


