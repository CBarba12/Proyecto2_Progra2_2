//
// Created by Usuario on 2/6/2022.
//

#ifndef PROYECTO2_PROGRA2_PERSONA_H
#define PROYECTO2_PROGRA2_PERSONA_H

#include "Cliente.h"
class Persona: public Cliente{
    private:
        string nacionalidad;
    public:
    Persona(const string &nombre, const string &cedula, double pagoSub, const string &ciudad, const string &pais,
            Observable *ptr, const string &nacionalidad);

    virtual ~Persona();
    const string &getNacionalidad() const;
    void setNacionalidad(const string &nacionalidad);
    string toString() override;
};


#endif //PROYECTO2_PROGRA2_PERSONA_H
