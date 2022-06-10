//
// Created by Usuario on 3/6/2022.
//

#ifndef PROYECTO2_PROGRA2_DEVESTIR_H
#define PROYECTO2_PROGRA2_DEVESTIR_H

#include "Pantalon.h"
class DeVestir:public Pantalon {
    private:
        bool casimir;
    public:
    DeVestir(double precio = 0.0, const string &color ="Negro", const string &codigo ="001", bool casimir = false);
    virtual ~DeVestir();
    bool getCaracteristica() override;
    void setCaracteristica(bool) override;
    string toString() override;
};


#endif //PROYECTO2_PROGRA2_DEVESTIR_H
