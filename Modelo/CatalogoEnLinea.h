//
// Created by Usuario on 5/6/2022.
//

#ifndef PROYECTO2_PROGRA2_CATALOGOENLINEA_H
#define PROYECTO2_PROGRA2_CATALOGOENLINEA_H

#include "Observable.h"
#include "NodoCatalogo.h"
#include "Cliente.h"
#include "list"
class CatalogoEnLinea:public Observable {
    private:
        NodoCatalogo* ppio;
        list<Observer*> listaDeObservadores;
    public:
        CatalogoEnLinea();
        ~CatalogoEnLinea() override;
        NodoCatalogo* getPpio();
        bool isEmpty();
        bool eliminaPorCod(string);
        bool busca(string);
        bool verificaCod(string);
        Traje* buscaPorCodigo(string);

        //Metodos de la lista de Clientes que tendra el catalogo en linea
        void Attach(Observer *observer) override;
        void Detach(Observer *observer) override;
        void Notify() override;
        bool insertarAlFinal(Traje*);
        string toString();
};

#endif //PROYECTO2_PROGRA2_CATALOGOENLINEA_H
