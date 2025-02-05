#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"
using namespace std;

int main()
{
    Asiakas eka("Miro", 1000);
    eka.showSaldo();
    cout << endl;

    Asiakas toka("Petteri", 1000);
    toka.showSaldo();
    cout << endl;

    eka.talletus(350);
    eka.luotonNosto(500);
    cout << endl;

    eka.showSaldo();
    cout << endl;

    toka.talletus(125);
    toka.luotonNosto(800);
    cout << endl;

    eka.showSaldo();
    cout << endl;
    toka.showSaldo();
    cout << endl;

    eka.tiliSiirto(200,toka);
    cout << endl;
    toka.showSaldo();
    return 0;
}
