//
// Created by Usuario on 4/6/2022.
//

#ifndef PROYECTO2_PROGRA2_TRAJEDEPORTIVO_H
#define PROYECTO2_PROGRA2_TRAJEDEPORTIVO_H

#include "Traje.h"
#include "Camiseta.h"
#include "Pantaloneta.h"
#include "Tenni.h"
#include "PreciosTienda.h"
class TrajeDeportivo : public Traje {
    private:
        Camisa* c1;
        Pantalon* p1;
        Zapato* z1;
    public:
    TrajeDeportivo(const string& tipo, const string& codigo);
    virtual ~TrajeDeportivo();

    Camisa* creaCamisa() override;
    Camisa *getCamisa() const override;

    Pantalon* creaPantalon() override;
    Pantalon *getPantalon() const override;

    Zapato* creaCalzado()  override;
    Zapato *getZapato() const override;

    void actualizarPrecios() override;

    string toString() override;
};

#endif //PROYECTO2_PROGRA2_TRAJEDEPORTIVO_H
