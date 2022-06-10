//
// Created by Usuario on 4/6/2022.
//

#include "TrajeTrabajo.h"

TrajeTrabajo::TrajeTrabajo(const string &tipo, const string &codigo) : Traje(tipo, codigo) {
    c1 = creaCamisa();
    p1 = creaPantalon();
    z1 = creaCalzado();
}

TrajeTrabajo::~TrajeTrabajo() {
    /*
      delete c1;
      delete p1;
      delete z1;
       */
}
Camisa* TrajeTrabajo::getCamisa() const {
    return c1;
}

Pantalon* TrajeTrabajo::getPantalon() const {
    return p1;
}

Zapato* TrajeTrabajo::getZapato() const {
    return z1;
}

Camisa* TrajeTrabajo::creaCamisa() {
    return new ConCuadros();
}

Pantalon* TrajeTrabajo::creaPantalon() {
    return new Jeams();
}

Zapato* TrajeTrabajo::creaCalzado() {
    return new Bota();
}

string TrajeTrabajo::toString() {
    stringstream s;
    s<<"Traje Trabajo!!"<<endl;
    s<<"Precio total del traje de trabajo: "<< this->getPrecio() <<endl;
    return s.str();
}

void TrajeTrabajo::actualizarPrecios() {
    this->getCamisa()->setPrecio(PreciosTienda::retornarPrecioCamisa(c1->getCodigo(),getTipo(), c1->getCaracteristica()));
    this->getPantalon()->setPrecio(PreciosTienda::retornarPrecioPantalon(p1->getCodigo(),getTipo(),p1->getCaracteristica()));
    this->getZapato()->setPrecio(PreciosTienda::retornarPrecioZapatos(z1->getCodigo(),getTipo(),z1->getCaracteristica()));
    this->setPrecio(this->getCamisa()->getPrecio() + this->getPantalon()->getPrecio() + this->getZapato()->getPrecio());
}




