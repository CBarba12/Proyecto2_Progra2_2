//
// Created by Usuario on 4/6/2022.
//

#ifndef PROYECTO2_PROGRA2_TRAJE_H
#define PROYECTO2_PROGRA2_TRAJE_H

#include "Utiles.h"
#include "Camisa.h"
#include "Pantalon.h"
#include "Zapato.h"
class Traje {
    private:
        double precio;
        string tipo;
        string codigo;
    public:
        Traje(const string &tipo ="", const string &codigo ="");
        virtual ~Traje();

        virtual Camisa* creaCamisa() = 0;
        virtual Camisa *getCamisa() const = 0;

        virtual Pantalon* creaPantalon() = 0;
        virtual Pantalon *getPantalon() const = 0;

        virtual Zapato* creaCalzado() = 0;
        virtual Zapato *getZapato() const = 0;

        virtual string toString()= 0;

        virtual void actualizarPrecios() = 0;

        virtual double getPrecio() const;
        virtual void setPrecio(double precio);

        virtual const string &getTipo() const;
        virtual void setTipo(const string &tipo);

        virtual const string &getCodigo() const;
        virtual void setCodigo(const string &codigo);
};


#endif //PROYECTO2_PROGRA2_TRAJE_H
