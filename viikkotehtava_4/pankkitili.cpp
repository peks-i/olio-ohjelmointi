#include "pankkitili.h"

// Pankkitili::Pankkitili() {}

Pankkitili::Pankkitili(string omistaja)
{
    // cout << "Pankkitili konstruktori, nimi: " << omistaja << endl;
}

Pankkitili::~Pankkitili()
{
    // cout << "Pankkitili dekonstruktori." << endl;
}

bool Pankkitili::deposit(double sum)
{
    if (sum < 0) {
        //cout << "Talletus ei onnistunut." << endl;
        return false;
    }
    else {
        //cout << "Talletus onnistui." << endl;
        saldo += sum;
        return true;
    }
}

bool Pankkitili::withdraw(double sum)
{
    if (sum < 0) {
        //cout << "Nosto ei onnistunut." << endl;
        return false;
    }
    else if (sum > saldo) {
        //cout << "Nosto ei onnistunut, tililla liian vahan rahaa." << endl;
        return false;
    }
    else {
        //cout << "Nosto onnistui." << endl;
        saldo -= sum;
        return true;
    }
}

double Pankkitili::getSaldo() const
{
    return saldo;
}

