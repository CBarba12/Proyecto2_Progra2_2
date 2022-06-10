//
// Created by Usuario on 3/6/2022.
//

#include "Bota.h"

Bota::Bota(double precio, const string &color, const string &codigo, bool alta) : Zapato(precio, color, codigo),
                                                                                  alta(alta) {}

Bota::~Bota() {

}

bool Bota::getCaracteristica() {
    return alta;
}

void Bota::setCaracteristica(bool alta) {
    Bota::alta = alta;
}


string Bota::toString() {
    stringstream s;
    s << "precio: " << getPrecio() << " color: " << getColor() << " codigo: " << getCodigo();
    return s.str();
}
