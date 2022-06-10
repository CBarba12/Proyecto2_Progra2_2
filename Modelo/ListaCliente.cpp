//
// Created by Usuario on 7/6/2022.
//

#include "ListaCliente.h"
ListaCliente::ListaCliente() {
    ppio = nullptr;
}

ListaCliente::~ListaCliente() {

}

NodoCliente* ListaCliente::getPpio() {
    return ppio;
}

bool ListaCliente::isEmpty() {
    return (ppio == nullptr);
}

bool ListaCliente::insertarAlFinal(Cliente* ptr) {
    NodoCliente* p = ppio;
    if (this->isEmpty()) {
        ppio = new NodoCliente(ptr, ppio);
        return true;
    }
    else {
        NodoCliente* nuevo = new NodoCliente(ptr, nullptr);
        while (p->getSiguiente() != nullptr) {
            p = p->getSiguiente();
        }
        p->setSiguiente(nuevo);
        return true;
    }
    return false;
}


string ListaCliente::toString() {
    stringstream s;
    NodoCliente* p = ppio; // Para recorrer la lista se crea un p y lo igualamos a ppio
    s << "---------------------------LISTA DE CLIENTES-------------------" << endl;
    while (p != nullptr) {
        s << p->getPtr()->toString() << endl;
        p = p->getSiguiente();
    }
    return  s.str();
}
