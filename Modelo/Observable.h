//
// Created by Usuario on 5/6/2022.
//

#ifndef PROYECTO2_PROGRA2_OBSERVABLE_H
#define PROYECTO2_PROGRA2_OBSERVABLE_H

#include "Observer.h"
//class Cliente;
//#include "Cliente.h"
class Observable{ // Interfaz del objeto a Observar
public:
    virtual ~Observable(){};
    virtual void Attach(Observer* observer) = 0; // anadir observadores
    virtual void Detach(Observer* observer) = 0; // Eliminar observador
    virtual void Notify() = 0; // Notificar sobre cambios
};


#endif //PROYECTO2_PROGRA2_OBSERVABLE_H
