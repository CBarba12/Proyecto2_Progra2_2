//
// Created by Usuario on 3/6/2022.
//

#include "Zapato.h"
Zapato::Zapato(double precio, const string& color, const string& codigo) : precio(precio), color(color),
                                                                           codigo(codigo) {}

Zapato::~Zapato() {
}

double Zapato::getPrecio() const {
    return precio;
}

void Zapato::setPrecio(double precio) {
    Zapato::precio = precio;
}

const string& Zapato::getColor() const {
    return color;
}

void Zapato::setColor(const string& color) {
    Zapato::color = color;
}

const string& Zapato::getCodigo() const {
    return codigo;
}

void Zapato::setCodigo(const string& codigo) {
    Zapato::codigo = codigo;
}
