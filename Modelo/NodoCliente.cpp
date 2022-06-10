//
// Created by Usuario on 7/6/2022.
//

#include "NodoCliente.h"

NodoCliente::NodoCliente(Cliente* ptr, NodoCliente* siguiente) : ptr(ptr), siguiente(siguiente) {}

NodoCliente::~NodoCliente() {

}

Cliente* NodoCliente::getPtr() const {
    return ptr;
}

void NodoCliente::setPtr(Cliente* ptr) {
    NodoCliente::ptr = ptr;
}

NodoCliente* NodoCliente::getSiguiente() const {
    return siguiente;
}

void NodoCliente::setSiguiente(NodoCliente* siguiente) {
    NodoCliente::siguiente = siguiente;
}