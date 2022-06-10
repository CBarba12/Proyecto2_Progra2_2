//
// Created by Usuario on 2/6/2022.
//

#include "Cliente.h"


Cliente::Cliente(const string &nombre, const string &cedula, double pagoSub, const string &ciudad, const string &pais,
                 Observable *ptr) : nombre(nombre), cedula(cedula), pagoSub(pagoSub), ciudad(ciudad), pais(pais),
                                    ptr(ptr) {}


Cliente::~Cliente() {

}

const string &Cliente::getNombre() const {
    return nombre;
}

void Cliente::setNombre(const string &nombre) {
    Cliente::nombre = nombre;
}

const string &Cliente::getCedula() const {
    return cedula;
}

void Cliente::setCedula(const string &cedula) {
    Cliente::cedula = cedula;
}

double Cliente::getPagoSub() const {
    return pagoSub;
}

void Cliente::setPagoSub(double pagoSub) {
    Cliente::pagoSub = pagoSub;
}

const string &Cliente::getCiudad() const {
    return ciudad;
}

void Cliente::setCiudad(const string &ciudad) {
    Cliente::ciudad = ciudad;
}

const string &Cliente::getPais() const {
    return pais;
}

void Cliente::setPais(const string &pais) {
    Cliente::pais = pais;
}

void Cliente::update() {
    cout<<"Se ha ingresado un nuevo traje a la tienda en linea!!!!"<<endl;
}

Observable *Cliente::getPtr() const {
    return ptr;
}

void Cliente::setPtr(Observable *ptr) {
    Cliente::ptr = ptr;
}

void Cliente::RemoveMeFromTheList() {
    ptr->Detach(this);
//        std::cout << "Observer \"" << number_ << "\" removed from the list.\n";
}



