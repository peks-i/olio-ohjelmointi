#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef eka("Valimaki");
    eka.makeSalad(50);
    eka.makeSoup(70);

    ItalianChef toka("Mario");
    toka.makeSalad(200);
    toka.makeSoup(800);
    toka.askSecret("pizza",30,45);
    return 0;
}
