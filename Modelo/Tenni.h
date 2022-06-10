//
// Created by Usuario on 3/6/2022.
//

#ifndef PROYECTO2_PROGRA2_TENNI_H
#define PROYECTO2_PROGRA2_TENNI_H

#include "Zapato.h"
class Tenni: public Zapato{
    private:
        bool adidas;
    public:
    Tenni(double precio = 0.0, const string &color ="Negro", const string &codigo ="002", bool adidas = false);
    virtual ~Tenni();
    bool getCaracteristica() override;
    void setCaracteristica(bool) override;
    string toString() override;
};


#endif //PROYECTO2_PROGRA2_TENNI_H
