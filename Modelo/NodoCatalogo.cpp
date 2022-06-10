//
// Created by Usuario on 5/6/2022.
//

#include "NodoCatalogo.h"

NodoCatalogo::NodoCatalogo(Traje *ptr, NodoCatalogo *siguiente) : ptr(ptr), siguiente(siguiente) {}

NodoCatalogo::~NodoCatalogo() {

}

Traje *NodoCatalogo::getPtr() const {
    return ptr;
}

void NodoCatalogo::setPtr(Traje *ptr) {
    NodoCatalogo::ptr = ptr;
}

NodoCatalogo *NodoCatalogo::getSiguiente() const {
    return siguiente;
}

void NodoCatalogo::setSiguiente(NodoCatalogo *siguiente) {
    NodoCatalogo::siguiente = siguiente;
}
