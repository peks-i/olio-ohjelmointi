#include "luottotili.h"

// Luottotili::Luottotili() {}

Luottotili::Luottotili(string omistaja, double luottoR) : Pankkitili(omistaja)
{
    luottoRaja = luottoR;
    luottoTilinSaldo = luottoR;
    // cout << "Luottotili konstruktori, nimi: " << omistaja << " luottoraja: " << luottoR << endl;
}

Luottotili::~Luottotili(){
    // cout << "Luottotili dekonstruktori." << endl;
}

bool Luottotili::deposit(double sum)
{
    if (sum < 0) {
        //cout << "Talletus ei onnistunut." << endl;
        return false;
    }
    else if (sum > luottoRaja - luottoTilinSaldo) {
        //cout << "Talletus ei onnistunut." << endl;              // estää, ettei luottotilille voi tallettaa yli luottorajan menevää summaa
        return false;
    }
    else {
        //cout << "Talletus onnistui." << endl;
        luottoTilinSaldo += sum;
        return true;
    }
}

double Luottotili::getLuottoTilinSaldo() const
{
    return luottoTilinSaldo;
}

bool Luottotili::withdraw(double sum)
{
    if (sum < 0) {
        //cout << "Nosto ei onnistunut." << endl;
        return false;
    }
    else if (sum > luottoRaja) {
        //cout << "Nosto ei onnistunut." << endl;
        return false;
    }
    else {
        //cout << "Nosto onnistui." << endl;
        saldo = sum;
        luottoTilinSaldo -= sum;
        return true;
    }
}

