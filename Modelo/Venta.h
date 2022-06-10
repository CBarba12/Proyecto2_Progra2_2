//
// Created by Usuario on 7/6/2022.
//

#ifndef PROYECTO2_PROGRA2_VENTA_H
#define PROYECTO2_PROGRA2_VENTA_H

#include "Cliente.h"
#include "Traje.h"
#include "PrecioTranslado.h"
#define IVA 0.15
#define  Ganancia 0.80
class Venta {
    private:
        Cliente* c;
        Traje* t;
        string fecha;
        bool esVirtual;
        string codigoTraslado;
        int numeroDeVenta;
    public:
    Venta(Cliente *c, Traje *t, const string &fecha,const string& codigoT, bool esVirtual);
    virtual ~Venta();
    const string &getFecha() const;
    void setFecha(const string &fecha);
    Cliente *getC() const;
    void setC(Cliente *c);
    Traje *getT() const;
    void setT(Traje *t);
    int getNumeroDeVenta() const;
    void setNumeroDeVenta(int numeroDeVenta);
   double PrecioBaseConIVA();
   double PrecioConGananciaPresencial() ;
    double PrecioSinGanaciaVirtual();
    double PrecioConGananciaVirtual();
    string toString();
};


#endif //PROYECTO2_PROGRA2_VENTA_H
