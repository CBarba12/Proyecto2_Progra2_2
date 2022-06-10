//
// Created by Usuario on 7/6/2022.
//

#ifndef PROYECTO2_PROGRA2_NODOCLIENTE_H
#define PROYECTO2_PROGRA2_NODOCLIENTE_H

#include "Cliente.h"
class NodoCliente {
    private:
        Cliente* ptr;
        NodoCliente* siguiente;
    public:
        NodoCliente(Cliente *ptr, NodoCliente *siguiente);
        virtual ~NodoCliente();
        Cliente *getPtr() const;
        void setPtr(Cliente *ptr);
        NodoCliente *getSiguiente() const;
        void setSiguiente(NodoCliente *siguiente);
};


#endif //PROYECTO2_PROGRA2_NODOCLIENTE_H
