//
// Created by Usuario on 2/6/2022.
//

#include "Pantalon.h"


Pantalon::Pantalon(double precio, const string& color, const string& codigo) : precio(precio), color(color),
                                                                               codigo(codigo) {}

Pantalon::~Pantalon() {
}

double Pantalon::getPrecio() const {
    return precio;
}

void Pantalon::setPrecio(double precio) {
    Pantalon::precio = precio;
}

const string& Pantalon::getColor() const {
    return color;
}

void Pantalon::setColor(const string& color) {
    Pantalon::color = color;
}

const string& Pantalon::getCodigo() const {
    return codigo;
}

void Pantalon::setCodigo(const string& codigo) {
    Pantalon::codigo = codigo;
}
