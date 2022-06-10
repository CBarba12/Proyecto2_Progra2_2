//
// Created by Usuario on 2/6/2022.
//

#ifndef PROYECTO2_PROGRA2_CLIENTE_H
#define PROYECTO2_PROGRA2_CLIENTE_H

#include <ostream>
#include "Utiles.h"
#include "Observer.h"
#include "Observable.h"
class Cliente:public Observer  {
    private:
        string nombre;
        string cedula;
        double pagoSub;
        string ciudad;
        string pais;
        Observable * ptr;
    public:
    Cliente(const string &nombre, const string &cedula, double pagoSub, const string &ciudad, const string &pais,
            Observable *ptr = nullptr);
    Observable *getPtr() const;
    void setPtr(Observable *ptr);
    virtual ~Cliente();
    const string &getNombre() const;
    void setNombre(const string &nombre);
    const string &getCedula() const;
    void setCedula(const string &cedula);
    double getPagoSub() const;
    void setPagoSub(double pagoSub);
    const string &getCiudad() const;
    void setCiudad(const string &ciudad);
    const string &getPais() const;
    void setPais(const string &pais);
    void RemoveMeFromTheList();
    virtual string toString() =0;
    void update() override;
};


#endif //PROYECTO2_PROGRA2_CLIENTE_H
