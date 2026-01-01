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
