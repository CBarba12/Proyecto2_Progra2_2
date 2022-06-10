//
// Created by Usuario on 3/6/2022.
//

#ifndef PROYECTO2_PROGRA2_EJECUTIVO_H
#define PROYECTO2_PROGRA2_EJECUTIVO_H

#include "Zapato.h"
class Ejecutivo:public Zapato {
    private:
        bool fino;
    public:
    Ejecutivo(double precio = 0.0, const string &color ="Negro", const string &codigo ="001" ,bool fino = false);
    virtual ~Ejecutivo();
    bool getCaracteristica() override;
    void setCaracteristica(bool) override;
    string toString() override;
};


#endif //PROYECTO2_PROGRA2_EJECUTIVO_H
