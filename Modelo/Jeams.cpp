//
// Created by Usuario on 2/6/2022.
//

#include "Jeams.h"


Jeams::Jeams(double precio, const string &color, const string &codigo, bool ajustado) : Pantalon(precio, color, codigo),
                                                                                        ajustado(ajustado) {}

Jeams::~Jeams() {

}

bool Jeams::getCaracteristica() {
    return ajustado;
}

void Jeams::setCaracteristica(bool ajustado) {
    Jeams::ajustado = ajustado;
}

string Jeams::toString() {
    stringstream s;
    s << "precio: " << getPrecio() << " color: " << getColor() << " codigo: " << getCodigo();
    return s.str();
}




