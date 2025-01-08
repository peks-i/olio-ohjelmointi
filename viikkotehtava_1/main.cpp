#include <iostream>
#include <cstdlib>

using namespace std;

int arvaustenLkm = 0;
int game(int maxnum);

int main() {
game(40);
cout << "Arvauksia: " << arvaustenLkm << endl;
}

int game(int maxnum) {
    srand(time(0));                              // satunnainen seedi tietokoneen ajan perusteella
    int randomNumb = (rand() % maxnum) + 1;      // näin saa luvun 1-40 väliltä
    int arvaus = 0;
    while (arvaus != randomNumb) {
        arvaustenLkm++;
        cout << "Arvaa luku." << endl;
        cin >> arvaus;
        if (arvaus == randomNumb) {
        cout << "Oikein!" << endl;
        }
        else if (arvaus < randomNumb) {
        cout << "Arvauksesi oli pienempi, kuin satunnainen luku." << endl;
        }
        else {
        cout << "Arvauksesi oli suurempi, kuin satunnainen luku." << endl;
        }
    }
    return arvaustenLkm;
}
