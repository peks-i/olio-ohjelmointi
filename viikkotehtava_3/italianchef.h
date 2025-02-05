#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string name);
    ~ItalianChef();
    bool askSecret(string, int, int);
    void setChefName(const string &newChefName);

private:
    int makePizza();
    string passWord = "pizza";
    int flour;
    int water;
protected:
    string chefName;
};

#endif // ITALIANCHEF_H
