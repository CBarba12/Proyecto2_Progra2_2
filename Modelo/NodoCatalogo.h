//
// Created by Usuario on 5/6/2022.
//

#ifndef PROYECTO2_PROGRA2_NODOCATALOGO_H
#define PROYECTO2_PROGRA2_NODOCATALOGO_H

#include "Traje.h"
class NodoCatalogo {
    private:
        Traje* ptr;
        NodoCatalogo* siguiente;
    public:
    NodoCatalogo(Traje *ptr, NodoCatalogo *siguiente);
    virtual ~NodoCatalogo();
    Traje *getPtr() const;
    void setPtr(Traje *ptr);
    NodoCatalogo *getSiguiente() const;
    void setSiguiente(NodoCatalogo *siguiente);
};


#endif //PROYECTO2_PROGRA2_NODOCATALOGO_H
