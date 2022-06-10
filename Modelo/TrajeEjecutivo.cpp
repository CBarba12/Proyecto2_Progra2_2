//
// Created by Usuario on 4/6/2022.
//

#include "TrajeEjecutivo.h"

TrajeEjecutivo::TrajeEjecutivo(const string &tipo, const string &codigo) : Traje(tipo, codigo) {
    c1 = creaCamisa();
    p1 = creaPantalon();
    z1 = creaCalzado();
}

TrajeEjecutivo::~TrajeEjecutivo() {
    /*
    delete c1;
    delete p1;
    delete z1;
     */
}

Camisa *TrajeEjecutivo::creaCamisa() {
    return new MangaLarga();
}

Pantalon *TrajeEjecutivo::creaPantalon() {
   return new DeVestir();
}

Zapato *TrajeEjecutivo::creaCalzado() {
    return new Ejecutivo();
}

string TrajeEjecutivo::toString() {
   stringstream s;
   s<<"Traje Ejecutivo!!"<<endl;
   s<<"Precio total del traje ejecutivo: "<< this->getPrecio() <<endl;
   return s.str();
}

Camisa *TrajeEjecutivo::getCamisa() const {
    return c1;
}

Pantalon *TrajeEjecutivo::getPantalon() const {
    return p1;
}

Zapato *TrajeEjecutivo::getZapato() const {
    return z1;
}

void TrajeEjecutivo::actualizarPrecios() {
    this->getCamisa()->setPrecio(PreciosTienda::retornarPrecioCamisa(c1->getCodigo(),getTipo(), c1->getCaracteristica()));
    this->getPantalon()->setPrecio(PreciosTienda::retornarPrecioPantalon(p1->getCodigo(),getTipo(),p1->getCaracteristica()));
    this->getZapato()->setPrecio(PreciosTienda::retornarPrecioZapatos(z1->getCodigo(),getTipo(),z1->getCaracteristica()));
    this->setPrecio(this->getCamisa()->getPrecio() + this->getPantalon()->getPrecio() + this->getZapato()->getPrecio());
}








