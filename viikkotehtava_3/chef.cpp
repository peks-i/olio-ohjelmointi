#include "chef.h"

Chef::Chef() {}

Chef::Chef(string name) {
    chefName = name;
    cout << "Chef konstruktori, kokki: " << name << endl;
}

Chef::~Chef(){
    cout << "Chef dekonstruktori." << endl;
}

int Chef::makeSalad(int salaattiAines)
{
    cout << "Salaatti aineksia: " << salaattiAines << endl;
    int salaattiAnnos = salaattiAines / 5;
    cout << "Salaatti annoksia: " << salaattiAnnos << endl;
    return salaattiAnnos;
}

int Chef::makeSoup(int soppaAines)
{
    cout << "Soppa aineksia: " << soppaAines << endl;
    int soppaAnnos = soppaAines / 5;
    cout << "Soppa annoksia: " << soppaAnnos << endl;
    return soppaAnnos;
}

string Chef::getChefName() const
{
    return chefName;
}

