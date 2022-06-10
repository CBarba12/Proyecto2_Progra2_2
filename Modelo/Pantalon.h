//
// Created by Usuario on 2/6/2022.
//

#ifndef PROYECTO2_PROGRA2_PANTALON_H
#define PROYECTO2_PROGRA2_PANTALON_H

#include "Utiles.h"
class Pantalon {
protected:
    double precio;
    string color;
    string codigo;
public:
    Pantalon(double precio, const string &color, const string &codigo);
    virtual ~Pantalon();
    double getPrecio() const;
    void setPrecio(double precio);
    const string &getColor() const;
    void setColor(const string &color);
    const string &getCodigo() const;
    void setCodigo(const string &codigo);
    virtual bool getCaracteristica()= 0;
    virtual void setCaracteristica(bool)= 0;
    virtual string toString() = 0;
};


#endif //PROYECTO2_PROGRA2_PANTALON_H
