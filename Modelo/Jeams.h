//
// Created by Usuario on 2/6/2022.
//

#ifndef PROYECTO2_PROGRA2_JEAMS_H
#define PROYECTO2_PROGRA2_JEAMS_H

#include "Pantalon.h"
class Jeams: public Pantalon {
    private:
        bool ajustado;
    public:
    Jeams(double precio = 0.0, const string &color ="Negro", const string &codigo ="002" , bool ajustado = false);
    bool getCaracteristica() override;
    void setCaracteristica(bool) override;
    virtual ~Jeams();
    string toString() override;
};


#endif //PROYECTO2_PROGRA2_JEAMS_H
