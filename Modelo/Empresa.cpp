//
// Created by Usuario on 2/6/2022.
//

#include "Empresa.h"

Empresa::Empresa(const string &nombre, const string &cedula, double pagoSub, const string &ciudad, const string &pais,
                 Observable *ptr, bool clienteFrecuente) : Cliente(nombre, cedula, pagoSub, ciudad, pais, ptr),
                                                           clienteFrecuente(clienteFrecuente) {}

Empresa::~Empresa() {

}

bool Empresa::isClienteFrecuente() const {
    return clienteFrecuente;
}

void Empresa::setClienteFrecuente(bool clienteFrecuente) {
    Empresa::clienteFrecuente = clienteFrecuente;
}

string Empresa::toString() {
    stringstream s;
    s << " nombre: " << getNombre() << " cedula: " << getCedula()<<"Es clienteFrecuente: "<<isClienteFrecuente()
      << " pagoSub: " << getPagoSub() << " ciudad: " << getCiudad() << " pais: " << getPais();
    return s.str();
}
