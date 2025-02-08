#include "notifikaattori.h"

Notifikaattori::Notifikaattori() {}

void Notifikaattori::lisaa(Seuraaja *uusiSeur)
{
    uusiSeur->next = seuraajat;
    seuraajat = uusiSeur;
}

void Notifikaattori::poista(Seuraaja *poistSeur)
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr) {
        if (alku->next == poistSeur){
           alku->next = poistSeur->next;
           return;
        }
        alku = alku->next;
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr) {
        cout << "Seuraaja " << alku->getNimi() << endl;
        alku = alku->next;
    }
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr) {
        alku->paivitys(viesti);
        alku = alku->next;
    }
}
