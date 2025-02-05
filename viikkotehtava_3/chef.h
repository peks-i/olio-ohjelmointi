#ifndef CHEF_H
#define CHEF_H
#include <iostream>

using namespace std;

class Chef
{
public:
    Chef();                 // defaultti konstruktori
    Chef(string name);
    ~Chef();
    int makeSalad(int);
    int makeSoup(int);

    string getChefName() const;

protected:
    string chefName;
};

#endif // CHEF_H
