//
// Created by Usuario on 4/6/2022.
//

#include "TrajeDeportivo.h"

TrajeDeportivo::TrajeDeportivo(const string &tipo, const string &codigo) : Traje(tipo, codigo) {
    c1 = creaCamisa();
    p1 = creaPantalon();
    z1 = creaCalzado();
}

TrajeDeportivo::~TrajeDeportivo() {

}

Camisa* TrajeDeportivo::getCamisa() const {
    return c1;
}




Pantalon* TrajeDeportivo::getPantalon() const {
    return p1;
}



Zapato* TrajeDeportivo::getZapato() const {
    return z1;
}




Camisa* TrajeDeportivo::creaCamisa() {
    return new Camiseta();
}

Pantalon* TrajeDeportivo::creaPantalon() {
    return new Pantaloneta();
}

Zapato* TrajeDeportivo::creaCalzado() {
    return new Tenni();
}

string TrajeDeportivo::toString() {
    stringstream s;
    s<<"Traje Deportivo!!"<<endl;
    s<<"Precio total del traje deportivo: "<< this->getPrecio() <<endl;
    return s.str();
}

void TrajeDeportivo::actualizarPrecios() {
    this->getCamisa()->setPrecio(PreciosTienda::retornarPrecioCamisa(c1->getCodigo(),getTipo(), c1->getCaracteristica()));
    this->getPantalon()->setPrecio(PreciosTienda::retornarPrecioPantalon(p1->getCodigo(),getTipo(),p1->getCaracteristica()));
    this->getZapato()->setPrecio(PreciosTienda::retornarPrecioZapatos(z1->getCodigo(),getTipo(),z1->getCaracteristica()));
    this->setPrecio(this->getCamisa()->getPrecio() + this->getPantalon()->getPrecio() + this->getZapato()->getPrecio());
}


