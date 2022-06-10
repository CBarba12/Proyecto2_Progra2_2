//
// Created by Usuario on 3/6/2022.
//

#include "Pantaloneta.h"

Pantaloneta::Pantaloneta(double precio, const string &color, const string &codigo, bool estampado) : Pantalon(precio,
                                                                                                              color,
                                                                                                              codigo),
                                                                                                     estampado(
                                                                                                             estampado) {}

Pantaloneta::~Pantaloneta() {

}

bool Pantaloneta::getCaracteristica() {
    return estampado;
}

void Pantaloneta::setCaracteristica(bool) {
    Pantaloneta::estampado = estampado;
}

string Pantaloneta::toString() {
    stringstream s;
    s << "precio: " << getPrecio() << " color: " << getColor() << " codigo: " << getCodigo();
    return s.str();
}


