//
// Created by Usuario on 2/6/2022.
//

#include "Camisa.h"

Camisa::Camisa(double precio, const string &color, const string &codigo) : precio(precio), color(color),
                                                                           codigo(codigo) {}

Camisa::~Camisa() {
}

double Camisa::getPrecio() const {
    return precio;
}

void Camisa::setPrecio(double precio) {
    Camisa::precio = precio;
}

const string &Camisa::getColor() const {
    return color;
}

void Camisa::setColor(const string &color) {
    Camisa::color = color;
}

const string &Camisa::getCodigo() const {
    return codigo;
}

void Camisa::setCodigo(const string &codigo) {
    Camisa::codigo = codigo;
}

