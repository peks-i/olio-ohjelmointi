#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game(int);
    ~Game();
    void play();

private:
void printGameResult();
int playerGuess;
int randomNumber;
int numOfGuesses;
int maxNumber;
};

#endif // GAME_H
