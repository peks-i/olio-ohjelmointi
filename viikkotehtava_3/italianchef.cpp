#include "italianchef.h"
#include <algorithm>

ItalianChef::ItalianChef() {}

ItalianChef::ItalianChef(string name)
{
    cout << "ItalianChef konstruktori, nimi: " << name << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef dekonstruktori" << endl;
}

bool ItalianChef::askSecret(string salaSana, int f, int w)
{
    if (salaSana == passWord) {
        cout << "Salasana meni oikein!" << endl;
        flour = f;
        water = w;
        makePizza();
        return true;
    }
    else {
        cout << "Väärä salasana!" << endl;
        return false;
    }
}

int ItalianChef::makePizza()
{
    int pizza = std::min(water / 5, flour / 5);
    cout << "ItalianChefilla on vetta: " << water << " ja jauhoja: " << flour << endl;
    cout <<  "ItalianChef tekee " << pizza << " pizzaa." << endl;
    return pizza;
}

