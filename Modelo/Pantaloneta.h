//
// Created by Usuario on 3/6/2022.
//

#ifndef PROYECTO2_PROGRA2_PANTALONETA_H
#define PROYECTO2_PROGRA2_PANTALONETA_H

#include "Pantalon.h"
class Pantaloneta:public Pantalon {
    private:
        bool estampado;
    public:
    Pantaloneta(double precio = 0.0, const string &color ="Negro", const string &codigo ="003" ,bool estampado = false);
    virtual ~Pantaloneta();
    bool getCaracteristica() override;
    void setCaracteristica(bool) override;
    string toString() override;
};


#endif //PROYECTO2_PROGRA2_PANTALONETA_H
