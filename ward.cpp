#include <SFML/Graphics.hpp>
#define FOR(i,rango) for(int i=0;i<rango;i++)
int main()
{
    sf::RenderWindow window(sf::VideoMode(640,480), "SFML works!");
    sf::Color color(255, 0, 0);
    sf::CircleShape Circle(100.f);//radio :v , cubito xdxdxdxc
    Circle.setFillColor(color);
    sf::CircleShape Circlex2(100.f);
    Circlex2.setFillColor(color);
    sf::CircleShape Circlex3(100.f);
    Circlex3.setFillColor(color);
    short dir = 1;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        Circle.move(sf::Vector2f(0.01f, 0.01f)); //Vector2f=2 flotantes :V
        Circlex2.move(sf::Vector2f(0.02f, 0.0f)); // 
        Circlex3.move(sf::Vector2f(0.0f, 0.02f));
        if(color.a <= 0) dir = 1;
        if(color.a >= 255) dir = -1;
        if(color.b <= 0) dir = 1;
        if(color.b >= 255) dir = -1;
        color.a += dir;
        color.r -= dir;
        color.b += dir;
        Circle.setFillColor(color);
        Circlex2.setFillColor(color);
        Circlex3.setFillColor(color);
        window.clear();
        window.draw(Circle);
        window.draw(Circlex2);
        window.draw(Circlex3);
        window.display();
    }

    return 0;
}