//
// Created by Usuario on 7/6/2022.
//

#ifndef PROYECTO2_PROGRA2_LISTACLIENTE_H
#define PROYECTO2_PROGRA2_LISTACLIENTE_H

#include "NodoCliente.h"
class ListaCliente {
    private:
        NodoCliente* ppio;
    public:
        ListaCliente();
        ~ListaCliente();
        NodoCliente* getPpio();
        bool isEmpty();
        bool eliminaPorCod(string);
        bool busca(string);
        bool verificaCod(string);
        Cliente* buscaPorCodigo(string);
        bool insertarAlFinal(Cliente*);
        string toString();
};


#endif //PROYECTO2_PROGRA2_LISTACLIENTE_H
