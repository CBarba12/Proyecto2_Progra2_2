//
// Created by Usuario on 3/6/2022.
//

#include "Ejecutivo.h"

Ejecutivo::Ejecutivo(double precio, const string &color, const string &codigo, bool fino) : Zapato(precio, color,
                                                                                                   codigo),
                                                                                            fino(fino) {}

Ejecutivo::~Ejecutivo() {

}

bool Ejecutivo::getCaracteristica() {
    return fino;
}

void Ejecutivo::setCaracteristica(bool fino) {
    Ejecutivo::fino = fino;
}

string Ejecutivo::toString() {
    stringstream s;
    s << "precio: " << getPrecio() << " color: " << getColor() << " codigo: " << getCodigo();
    s << "Caracteristica: " << getCaracteristica() << endl;
    return s.str();
}



