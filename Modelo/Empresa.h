//
// Created by Usuario on 2/6/2022.
//

#ifndef PROYECTO2_PROGRA2_EMPRESA_H
#define PROYECTO2_PROGRA2_EMPRESA_H

#include "Cliente.h"
class Empresa: public Cliente{
    private:
        bool clienteFrecuente;
    public:
    Empresa(const string &nombre, const string &cedula, double pagoSub, const string &ciudad, const string &pais,
            Observable *ptr, bool clienteFrecuente);
    virtual ~Empresa();
    bool isClienteFrecuente() const;
    void setClienteFrecuente(bool clienteFrecuente);
    string toString() override;
};


#endif //PROYECTO2_PROGRA2_EMPRESA_H
