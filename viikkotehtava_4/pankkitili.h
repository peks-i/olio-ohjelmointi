#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>

using namespace std;

class Pankkitili
{
public:
    // Pankkitili();
    Pankkitili(string omistaja);
    ~Pankkitili();
    virtual bool deposit(double);
    virtual bool withdraw(double);
    double getSaldo() const;

protected:
    string omistaja;
    double saldo = 0;
};

#endif // PANKKITILI_H
