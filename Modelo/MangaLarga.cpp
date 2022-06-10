//
// Created by Usuario on 2/6/2022.
//

#include "MangaLarga.h"
MangaLarga::MangaLarga(double precio, const string &color, const string &codigo, bool lisa) : Camisa(precio, color,
                                                                                                     codigo),
                                                                                              lisa(lisa) {}
MangaLarga::~MangaLarga() {

}

bool MangaLarga::getCaracteristica() {
    return lisa;
}
void MangaLarga::setCaracteristica(bool lisa) {
     this->lisa = lisa;
}

string MangaLarga::toString() {
    stringstream s;
    s << "precio: " << getPrecio() << " color: " << getColor() << " codigo: " << getCodigo();
    s << "Caracteristica: " << getCaracteristica() << endl;
    return s.str();
}





