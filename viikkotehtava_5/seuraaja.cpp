#include "seuraaja.h"

Seuraaja::Seuraaja(string n)
{
    nimi = n;
    cout << "Seuraaja konstruktori, nimi: " << nimi << endl;
}

Seuraaja::~Seuraaja()
{
    cout << "Seuraaja dekonstruktori." << endl;
}

void Seuraaja::paivitys(string viesti)
{
    cout << nimi << " sai viestin " << viesti << endl;
}



string Seuraaja::getNimi() const
{
    return nimi;
}
