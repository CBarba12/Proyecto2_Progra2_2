//
// Created by Usuario on 4/6/2022.
//

#include "Traje.h"

Traje::Traje(const string &tipo, const string &codigo) {
    this->tipo = tipo;
    this->codigo = codigo;
}

Traje::~Traje() {

}

double Traje::getPrecio() const {
    return precio;
}

void Traje::setPrecio(double precio) {
    Traje::precio = precio;
}

const string &Traje::getTipo() const {
    return tipo;
}

void Traje::setTipo(const string &tipo) {
    Traje::tipo = tipo;
}

const string &Traje::getCodigo() const {
    return codigo;
}

void Traje::setCodigo(const string &codigo) {
    Traje::codigo = codigo;
}


