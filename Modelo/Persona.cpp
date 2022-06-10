//
// Created by Usuario on 2/6/2022.
//

#include "Persona.h"

Persona::Persona(const string &nombre, const string &cedula, double pagoSub, const string &ciudad, const string &pais,
                 Observable *ptr, const string &nacionalidad) : Cliente(nombre, cedula, pagoSub, ciudad, pais, ptr),
                                                                nacionalidad(nacionalidad) {}

Persona::~Persona() {

}
const string &Persona::getNacionalidad() const {
    return nacionalidad;
}

void Persona::setNacionalidad(const string &nacionalidad) {
    Persona::nacionalidad = nacionalidad;
}


string Persona::toString() {
    stringstream s;
       s << " nombre: " << getNombre() <<", "<< " cedula: " << getCedula()<<", "<<"Nacionalidad: "<<getNacionalidad()
         <<", " << " pagoSub: " << getPagoSub()<<", " << " ciudad: " << getCiudad()<<", " << " pais: " << getPais();
     return s.str();
}

