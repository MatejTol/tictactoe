#include <SFML/Graphics.hpp>

#include "../config.hpp"

void draw_circle(sf::RenderWindow& window, sf::Vector2f position)
{
    sf::CircleShape shape(50.f);

    shape.setFillColor(sf::Color(150, 50, 250));

    shape.setOutlineThickness(10.f);
    shape.setOutlineColor(sf::Color(250, 150, 100));

    shape.setPosition(position);

    window.draw(shape);
}

void draw_circle(sf::RenderWindow& window, int column, int row)
{   
    //compute square size
    float stepsize_x = cfg::window_size.x / (cfg::grid_size.x);
    float stepsize_y = cfg::window_size.y / (cfg::grid_size.y);

    sf::Vector2f position;

    //find the right square
    position.x = column * stepsize_x;
    position.y = row * stepsize_y;

    //add discrepancy size of circle and square size
    position.x += (stepsize_x/2 - cfg::circle_radius);
    position.y += (stepsize_y/2 - cfg::circle_radius);

    draw_circle(window, position);
}


