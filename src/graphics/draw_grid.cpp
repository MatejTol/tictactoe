#include <SFML/Graphics.hpp>

void draw_line(sf::RenderWindow& window, sf::Vector2f point1, sf::Vector2f point2)
{
    std::array line =
    {
        sf::Vertex{point1},
        sf::Vertex{point2}
    };

    window.draw(line.data(), line.size(), sf::PrimitiveType::Lines);
}

void draw_grid(sf::RenderWindow& window, int horizontals, int verticals)
{
    sf::Vector2f window_size;
    window_size.x = 1000;
    window_size.y = 1000;

    float stepsize_x = window_size.x / (verticals+1);
    float stepsize_y = window_size.y / (horizontals+1);

    for (int i=1; i < verticals + 1; i++)
    {
        sf::Vector2f point1;
        sf::Vector2f point2;

        point1.x = i*stepsize_x; 
        point2.x = i*stepsize_x;

        point1.y = 0.0;
        point2.y = window_size.y;

        draw_line(window, point1, point2);
    }

    for (int i=1; i < horizontals + 1; i++)
    {
        sf::Vector2f point1;
        sf::Vector2f point2;

        point1.x = 0.0;
        point2.x = window_size.x;

        point1.y = i*stepsize_y;
        point2.y = i*stepsize_y;

        draw_line(window, point1, point2);
    }
}