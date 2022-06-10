//
// Created by Usuario on 3/6/2022.
//

#include "Tenni.h"

Tenni::Tenni(double precio, const string &color, const string &codigo, bool adidas) : Zapato(precio, color, codigo),
                                                                                      adidas(adidas) {}

Tenni::~Tenni() {

}

bool Tenni::getCaracteristica() {
    return adidas;
}

void Tenni::setCaracteristica(bool adidas) {
    Tenni::adidas = adidas;
}

string Tenni::toString() {
    stringstream s;
    s << "precio: " << getPrecio() << " color: " << getColor() << " codigo: " << getCodigo();
    return s.str();
}




