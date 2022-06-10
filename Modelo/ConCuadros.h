//
// Created by Usuario on 2/6/2022.
//

#ifndef PROYECTO2_PROGRA2_CONCUADROS_H
#define PROYECTO2_PROGRA2_CONCUADROS_H

#include "Camisa.h"
class ConCuadros: public Camisa{
    private:
        bool grande;
    public:
    ConCuadros(double precio = 0.0, const string &color = "Cafe", const string &codigo ="003", bool grande = false);
    virtual ~ConCuadros();
    bool getCaracteristica() override;
    void setCaracteristica(bool) override ;
    string toString() override;
};


#endif //PROYECTO2_PROGRA2_CONCUADROS_H
