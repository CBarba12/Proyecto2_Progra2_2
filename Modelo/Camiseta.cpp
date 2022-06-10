//
// Created by Usuario on 2/6/2022.
//

#include "Camiseta.h"

Camiseta::Camiseta(double precio, const string &color, const string &codigo, bool cuelloV) : Camisa(precio, color,
                                                                                                    codigo),
                                                                                             cuelloV(cuelloV) {}

Camiseta::~Camiseta() {

}

bool Camiseta::getCaracteristica() {
    return cuelloV;
}

void Camiseta::setCaracteristica(bool cuelloV) {
    Camiseta::cuelloV = cuelloV;
}
string Camiseta::toString() {
    stringstream s;
    s << "precio: " << getPrecio() << " color: " << getColor() << " codigo: " << getCodigo();
    s<<"\nBooleano: "<<getCaracteristica()<<endl;
    return s.str();
}


