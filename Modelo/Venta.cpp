//
// Created by Usuario on 7/6/2022.
//

#include "Venta.h"


Venta::Venta(Cliente *c, Traje *t, const string &fecha, const string &codigoT, bool esVirtual) : c(c), t(t), fecha(fecha),codigoTraslado(codigoT),esVirtual(esVirtual){
   // esVirtual = false;  significa que es presencial
}

Venta::~Venta() {
    delete c;
    delete t;
}

Cliente *Venta::getC() const {
    return c;
}

void Venta::setC(Cliente *c) {
    Venta::c = c;
}

Traje *Venta::getT() const {
    return t;
}

void Venta::setT(Traje *t) {
    Venta::t = t;
}

int Venta::getNumeroDeVenta() const {
    return numeroDeVenta;
}

void Venta::setNumeroDeVenta(int numeroDeVenta) {
    Venta::numeroDeVenta = numeroDeVenta;
}

const string &Venta::getFecha() const {
    return fecha;
}

void Venta::setFecha(const string &fecha) {
    Venta::fecha = fecha;
}

double Venta::PrecioBaseConIVA() {
    double Iva = t->getPrecio() *IVA;
    return t->getPrecio()+Iva;
}

double Venta::PrecioConGananciaPresencial() {
    double ganancia = t->getPrecio() * Ganancia;
    return PrecioBaseConIVA() + ganancia ;
}

double Venta::PrecioSinGanaciaVirtual() {
   return this->PrecioBaseConIVA() + PrecioTranslado::retornarCostoTraslado(codigoTraslado);
}

double Venta::PrecioConGananciaVirtual() {
    double ganancia = t->getPrecio() * Ganancia;
    return PrecioSinGanaciaVirtual() + ganancia;
}

string Venta::toString() {
    stringstream s;
    s<<"--------------------- FACTURA-----------"<<endl
        <<"Nombre del cliente: "<<c->getNombre()<<", Cedula: "<<c->getCedula()<<endl
        <<"Fecha de la venta realizada: "<<getFecha()<<endl
        <<"Numero de venta: "<<getNumeroDeVenta()<<endl;
    if(!esVirtual){
//        s<<"Precio del traje sin IVA: "<<t->getPrecio()<<endl;
        s<<"Precio total de la venta presencial: "<<PrecioConGananciaPresencial()<<endl;
    }
    else{
//        s<<"Precio del traje sin IVA: "<<t->getPrecio()<<endl;
        s<<"Precio total de la venta virtual: "<<PrecioConGananciaVirtual()<<endl;
    }
    return s.str();
}
