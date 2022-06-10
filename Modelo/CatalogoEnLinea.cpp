//
// Created by Usuario on 5/6/2022.
//

#include "CatalogoEnLinea.h"

CatalogoEnLinea::CatalogoEnLinea() {
     ppio = nullptr;
}

CatalogoEnLinea::~CatalogoEnLinea() {

}

NodoCatalogo *CatalogoEnLinea::getPpio() {
    return ppio;
}

bool CatalogoEnLinea::isEmpty() {
    return (ppio == nullptr);
}

bool CatalogoEnLinea::insertarAlFinal(Traje *ptr) {
    NodoCatalogo* p = ppio;
    if (this->isEmpty()) {
        ppio = new NodoCatalogo(ptr, ppio);
        this->Notify();
        return true;
    }
    else {
        NodoCatalogo* nuevo = new NodoCatalogo(ptr, nullptr);
        while (p->getSiguiente() != nullptr) {
            p = p->getSiguiente();
        }
        p->setSiguiente(nuevo);
        this->Notify();
        return true;
    }
    return false;
}

void CatalogoEnLinea::Notify() {
    auto iterator = listaDeObservadores.begin();
    while (iterator != listaDeObservadores.end()) {
        (*iterator)->update();
        ++iterator;
    }
    if(listaDeObservadores.empty()) cout<<"No hay subscripciones a las cuales notificar!!!"<<endl;
}
void CatalogoEnLinea::Detach(Observer *observer) {
    listaDeObservadores.remove(observer);
}

void CatalogoEnLinea::Attach(Observer *observer) {
    listaDeObservadores.push_back(observer);
}

string CatalogoEnLinea::toString() {
    stringstream s;
    NodoCatalogo* p = ppio; // Para recorrer la lista se crea un p y lo igualamos a ppio
    s << "---------------------------TRAJES EN STOCK-------------------" << endl;
    while (p != nullptr) {
        s << p->getPtr()->toString() << endl;
        p = p->getSiguiente();
    }
    return  s.str();
}






