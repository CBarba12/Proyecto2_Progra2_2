//
// Created by Usuario on 3/6/2022.
//

#include "DeVestir.h"

DeVestir::DeVestir(double precio, const string &color, const string &codigo, bool casimir) : Pantalon(precio, color,
                                                                                                      codigo),
                                                                                             casimir(casimir) {}

DeVestir::~DeVestir() {

}
bool DeVestir::getCaracteristica() {
    return casimir;
}

void DeVestir::setCaracteristica(bool casimir) {
    DeVestir::casimir = casimir;
}

string DeVestir::toString() {
    stringstream s;
    s << "precio: " << getPrecio() << " color: " << getColor() << " codigo: " << getCodigo();
    s << "Caracteristica: " << getCaracteristica() << endl;
    return s.str();
}


