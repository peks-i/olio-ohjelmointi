#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "pankkitili.h"

class Luottotili : public Pankkitili
{
public:
    // Luottotili();
    Luottotili(string omistaja, double luottoR);
    ~Luottotili();
    virtual bool withdraw(double) override;
    virtual bool deposit(double) override;
    double getLuottoTilinSaldo() const;

protected:
    double luottoRaja = 0;
    double luottoTilinSaldo = 0;
};

#endif // LUOTTOTILI_H
