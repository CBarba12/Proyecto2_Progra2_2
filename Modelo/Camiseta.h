//
// Created by Usuario on 2/6/2022.
//

#ifndef PROYECTO2_PROGRA2_CAMISETA_H
#define PROYECTO2_PROGRA2_CAMISETA_H

#include "Camisa.h"
class Camiseta: public Camisa{
    private:
        bool cuelloV;
    public:
    Camiseta(double precio = 0.0, const string &color ="Amarilla", const string &codigo ="002", bool cuelloV = false);
    virtual ~Camiseta();
     bool getCaracteristica() override;
    void setCaracteristica(bool) override ;
    string toString() override;
};


#endif //PROYECTO2_PROGRA2_CAMISETA_H
