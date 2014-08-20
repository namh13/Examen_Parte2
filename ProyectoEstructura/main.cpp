#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(584, 410), "Solitario xD");
    ////////Fondo/////////
    sf::Texture texture;
    texture.loadFromFile("texture3.png");
    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(0, 0);

    ////////Cartas////////
    stack<string> mi_pila;

    string carta1 = "back5.png";
    string carta2 = "ten3.png";
    string carta3 = "nine2.png";
    string carta4 = "eight2.png";
    string carta5 = "seven3.png";
    string carta6 = "six2.png";
    string carta7 = "five2.png";
    string carta8 = "four3.png";
    string carta9 = "three2.png";
    string carta10 = "two3.png";
    string carta11 = "ace3.png";

    mi_pila.push(carta1);
    mi_pila.push(carta2);
    mi_pila.push(carta3);
    mi_pila.push(carta4);
    mi_pila.push(carta5);
    mi_pila.push(carta6);
    mi_pila.push(carta7);
    mi_pila.push(carta8);
    mi_pila.push(carta9);
    mi_pila.push(carta10);
    mi_pila.push(carta11);
    sf::Texture texture1;
    texture1.loadFromFile(mi_pila.top());
    sf::Sprite sprite1(texture1);
    sprite1.setPosition(10,35);

    stack<string> mi_pila2;

    string cartaA = "back7.png";
    string cartaB = "ten2.png";
    string cartaC = "nine3.png";
    string cartaD = "eight3.png";
    string cartaE = "seven2.png";
    string cartaF = "six3.png";
    string cartaG = "five3.png";
    string cartaH = "four2.png";
    string cartaI = "three3.png";
    string cartaJ = "two2.png";
    string cartaK = "ace2.png";

    mi_pila2.push(cartaA);
    mi_pila2.push(cartaB);
    mi_pila2.push(cartaC);
    mi_pila2.push(cartaD);
    mi_pila2.push(cartaE);
    mi_pila2.push(cartaF);
    mi_pila2.push(cartaG);
    mi_pila2.push(cartaH);
    mi_pila2.push(cartaI);
    mi_pila2.push(cartaJ);
    mi_pila2.push(cartaK);

    sf::Texture texture2;
    texture2.loadFromFile(mi_pila2.top());
    sf::Sprite sprite2(texture2);
    sprite2.setPosition(10,190);

    stack<string> mi_pila3;

    string cartaA1 = "back7.png";
    string cartaB2 = "ten2.png";
    string cartaC3 = "nine3.png";
    string cartaD4 = "eight3.png";
    string cartaE5 = "seven2.png";
    string cartaF6 = "six3.png";
    string cartaG7 = "five3.png";
    string cartaH8 = "four2.png";
    string cartaI9 = "three3.png";
    string cartaJ10 = "two2.png";
    string cartaK11 = "ace2.png";

    mi_pila3.push(cartaA1);
    mi_pila3.push(cartaB2);
    mi_pila3.push(cartaC3);
    mi_pila3.push(cartaD4);
    mi_pila3.push(cartaE5);
    mi_pila3.push(cartaF6);
    mi_pila3.push(cartaG7);
    mi_pila3.push(cartaH8);
    mi_pila3.push(cartaI9);
    mi_pila3.push(cartaJ10);
    mi_pila3.push(cartaK11);

    sf::Texture texture3;
    texture3.loadFromFile(mi_pila3.top());
    sf::Sprite sprite3(texture3);
    sprite3.setPosition(110,35);

    stack<string> mi_pila4;

    string carta1a = "back5.png";
    string carta2a = "ten3.png";
    string carta3a = "nine2.png";
    string carta4a = "eight2.png";
    string carta5a = "seven3.png";
    string carta6a = "six2.png";
    string carta7a = "five2.png";
    string carta8a = "four3.png";
    string carta9a = "three2.png";
    string carta10a = "two3.png";
    string carta11a = "ace3.png";

    mi_pila4.push(carta1a);
    mi_pila4.push(carta2a);
    mi_pila4.push(carta3a);
    mi_pila4.push(carta4a);
    mi_pila4.push(carta5a);
    mi_pila4.push(carta6a);
    mi_pila4.push(carta7a);
    mi_pila4.push(carta8a);
    mi_pila4.push(carta9a);
    mi_pila4.push(carta10a);
    mi_pila4.push(carta11a);
    sf::Texture texture4;
    texture4.loadFromFile(mi_pila4.top());
    sf::Sprite sprite4(texture4);
    sprite4.setPosition(110,190);

    stack<string> mi_pila5;

    string carta15 = "back11.png";
    string carta25 = "back10.png";
    string carta35 = "back9.png";
    string carta45 = "back8.png";
    string carta55 = "back7.png";
    string carta65 = "back6.png";
    string carta75 = "back5.png";
    string carta85 = "back4.png";
    string carta95 = "back3.png";
    string carta105 = "back2.png";
    string carta115 = "back1.png";

    mi_pila5.push(carta15);
    mi_pila5.push(carta25);
    mi_pila5.push(carta35);
    mi_pila5.push(carta45);
    mi_pila5.push(carta55);
    mi_pila5.push(carta65);
    mi_pila5.push(carta75);
    mi_pila5.push(carta85);
    mi_pila5.push(carta95);
    mi_pila5.push(carta105);
    mi_pila5.push(carta115);
    sf::Texture texture5;
    texture5.loadFromFile(mi_pila5.top());
    sf::Sprite sprite5(texture5);
    sprite5.setPosition(210,190);

    stack<string> mi_pila6;

    string carta16 = "king4.png";
    string carta26 = "king3.png";
    string carta36 = "king2.png";
    string carta46 = "king1.png";
    string carta56 = "queen3.png";
    string carta66 = "queen2.png";
    string carta76 = "queen1.png";
    string carta86 = "jack2.png";
    string carta96 = "jack1.png";
    string carta106 = "joker2.png";
    string carta116 = "joker1.png";

    mi_pila6.push(carta16);
    mi_pila6.push(carta26);
    mi_pila6.push(carta36);
    mi_pila6.push(carta46);
    mi_pila6.push(carta56);
    mi_pila6.push(carta66);
    mi_pila6.push(carta76);
    mi_pila6.push(carta86);
    mi_pila6.push(carta96);
    mi_pila6.push(carta106);
    mi_pila6.push(carta116);
    sf::Texture texture6;
    texture6.loadFromFile(mi_pila6.top());
    sf::Sprite sprite6(texture6);
    sprite6.setPosition(210,35);


    //////////Sonido/////////
    // https://www.youtube.com/watch?v=z6lAP5GU_78

    sf::SoundBuffer soundBuffer;
    sf::Sound sound;
    if(!soundBuffer.loadFromFile("TalkDirty.wav"))
    cout << "Can't Find Sound" << endl;
    sound.setBuffer(soundBuffer);
    sound.setPitch(1.0f);



    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        if (event.type == sf::Event::MouseButtonReleased)
        {
            if(mi_pila.size()>1)
            {
                if(event.mouseButton.button == sf::Mouse::Left)
                    {
                        mi_pila2.push(mi_pila.top());
                        texture2.loadFromFile(mi_pila2.top());
                        sf::Sprite sprite2(texture2);
                        mi_pila.pop();
                        texture1.loadFromFile(mi_pila.top());
                        sf::Sprite sprite1(texture1);
                    }
            }
            if(mi_pila4.size()>1)
            {
                if(event.mouseButton.button == sf::Mouse::Left)
                    {
                        mi_pila3.push(mi_pila4.top());
                        texture3.loadFromFile(mi_pila3.top());
                        sf::Sprite sprite3(texture3);
                        mi_pila4.pop();
                        texture4.loadFromFile(mi_pila4.top());
                        sf::Sprite sprite4(texture4);
                    }
            }
            if(mi_pila3.size()>1)
            {
                if(event.mouseButton.button == sf::Mouse::Right)
                    {
                        mi_pila4.push(mi_pila3.top());
                        texture4.loadFromFile(mi_pila4.top());
                        sf::Sprite sprite4(texture4);
                        mi_pila3.pop();
                        texture3.loadFromFile(mi_pila3.top());
                        sf::Sprite sprite3(texture3);
                    }
            }
            if(mi_pila2.size()>1)
            {
                if(event.mouseButton.button == sf::Mouse::Right)
                    {
                        mi_pila.push(mi_pila2.top());
                        texture1.loadFromFile(mi_pila.top());
                        sf::Sprite sprite1(texture1);
                        mi_pila2.pop();
                        texture2.loadFromFile(mi_pila2.top());
                        sf::Sprite sprite2(texture2);
                    }
            }
            if(mi_pila5.size()>1)
            {
                if(event.mouseButton.button == sf::Mouse::Left)
                    {
                        mi_pila6.push(mi_pila5.top());
                        texture6.loadFromFile(mi_pila6.top());
                        sf::Sprite sprite6(texture6);
                        mi_pila5.pop();
                        texture5.loadFromFile(mi_pila5.top());
                        sf::Sprite sprite5(texture5);
                    }
            }
            if(mi_pila6.size()>1)
            {
                if(event.mouseButton.button == sf::Mouse::Right)
                    {
                        mi_pila5.push(mi_pila6.top());
                        texture5.loadFromFile(mi_pila5.top());
                        sf::Sprite sprite5(texture5);
                        mi_pila6.pop();
                        texture6.loadFromFile(mi_pila6.top());
                        sf::Sprite sprite6(texture6);
                    }
            }
        }
            if(event.key.code == sf::Keyboard::P)
             sound.play();

        }
        window.clear();
        window.draw(sprite);
        window.draw(sprite1,sf::RenderStates::Default);
        window.draw(sprite2,sf::RenderStates::Default);
        window.draw(sprite3,sf::RenderStates::Default);
        window.draw(sprite4,sf::RenderStates::Default);
        window.draw(sprite5,sf::RenderStates::Default);
        window.draw(sprite6,sf::RenderStates::Default);
        window.display();
    }

    return 0;
}
