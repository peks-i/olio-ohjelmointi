#include "asiakas.h"

// Asiakas::Asiakas() {}

Asiakas::Asiakas(string omistaja, double luottoR) : kayttotili(omistaja), luottotili(omistaja, luottoR)
{
    nimi = omistaja;
    cout << "Asiakas konstruktori, nimi: " << nimi << ", luottoraja: " << luottoR << endl;
}

Asiakas::~Asiakas()
{
    // cout << "Asiakas dekonstruktori." << endl;
}

void Asiakas::showSaldo()
{
    cout << nimi << "n pankkitili: " << kayttotili.getSaldo() << endl;
    cout << nimi << "n luottotili: " << luottotili.getLuottoTilinSaldo() << endl;
}

bool Asiakas::talletus(double summa)
{
    bool onnistuiko = kayttotili.deposit(summa);
    if (onnistuiko == false) {
        cout << "Talletus ei mennyt lapi." << endl;
        return false;
    }
    else {
        cout << "Talletus onnistui!" << endl;
        return true;
    }
}

bool Asiakas::nosto(double summa)
{
    bool onnistuiko = kayttotili.withdraw(summa);
    if (onnistuiko == false) {
        cout << "Nosto ei mennyt lapi." << endl;
        return false;
    }
    else {
        cout << "Nosto onnistui!" << endl;
        return true;
    }
}

bool Asiakas::luotonMaksu(double summa)
{
    bool onnistuiko = luottotili.deposit(summa);
    if (onnistuiko == false) {
        cout << "Luottotilille talletus ei mennyt lapi." << endl;
        return false;
    }
    else {
        cout << "Luottotilille talletus meni lapi!" << endl;
        return true;
    }
}

bool Asiakas::luotonNosto(double summa)
{
    bool onnistuiko = luottotili.withdraw(summa);
    if (onnistuiko == false){
        cout << "Luottotililta nostaminen ei mennyt lapi." << endl;
        return false;
    }
    else {
        cout << "Luottotililta nostaminen meni lapi!" << endl;
        return true;
    }
}

bool Asiakas::tiliSiirto(double summa, Asiakas &saaja)
{
    bool onnistuiko = kayttotili.withdraw(summa);
    if (onnistuiko == false) {
        cout << "Nosto ei mennyt lapi." << endl;
        return false;
    }
    else {
        cout << "Siirto onnistui." << endl;
        saaja.talletus(summa);
        return true;
    }
}

string Asiakas::getNimi() const
{
    return nimi;
}

