#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <iostream>

using namespace std;

class Seuraaja
{
public:
    Seuraaja(string n);
    ~Seuraaja();
    void paivitys(string);
    Seuraaja *next = nullptr;
    string getNimi() const;

private:
    string nimi;
};

#endif // SEURAAJA_H
