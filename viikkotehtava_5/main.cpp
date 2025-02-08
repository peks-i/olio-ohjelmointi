#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Notifikaattori n;

    Seuraaja a("A");
    Seuraaja b("B");
    Seuraaja c("C");

    cout << endl;

    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);
    n.tulosta();

    cout << endl;

    n.postita("Viesti 1.");
    cout <<endl;
    n.poista(&b);
    cout << endl;
    n.postita("Viesti 2.");
    cout << endl;
    return 0;
}
