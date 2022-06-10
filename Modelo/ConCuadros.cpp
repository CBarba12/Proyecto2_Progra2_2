//
// Created by Usuario on 2/6/2022.
//

#include "ConCuadros.h"

ConCuadros::ConCuadros(double precio, const string &color, const string &codigo, bool grande) : Camisa(precio, color,
                                                                                                       codigo),
                                                                                                grande(grande) {}

ConCuadros::~ConCuadros() {

}

bool ConCuadros::getCaracteristica() {
    return grande;
}

void ConCuadros::setCaracteristica(bool grande) {
    ConCuadros::grande = grande;
}
string ConCuadros::toString() {
    stringstream s;
    s << "precio: " << getPrecio() << " color: " << getColor() << " codigo: " << getCodigo();
    //Falta el booleano
    return s.str();
}


