#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int maxNumber) {
    srand(std::time(0));
    this->maxNumber = maxNumber;
    randomNumber = 0;
    cout << "Pelin konstruktori." << endl;
    cout << "Peli alustettu maksimiarvolla: " << maxNumber << endl;
}

Game::~Game() {
    cout << "Pelin dekonstruktori." << endl;
}

void Game::printGameResult(){
    cout << "Oikea vastaus oli: " << randomNumber << endl;
    cout << "Arvauksia: " << numOfGuesses << endl;
}




void Game::play() {
    randomNumber = (rand() % maxNumber) + 1;
    while (true) {
    cout << "Arvaa luku: ";
    cin >> playerGuess;
    numOfGuesses++;
        if (playerGuess == randomNumber) {
        cout << "Oikein!" << endl;
        printGameResult();
        break;
        }
        else if (playerGuess > randomNumber) {
        cout << "Koita pienempaa numeroa" << endl;
        }
        else {
        cout << "Koita suurempaa numeroa" << endl;
        }
}
}
