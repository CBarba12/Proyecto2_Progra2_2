//
// Created by Usuario on 4/6/2022.
//

#ifndef PROYECTO2_PROGRA2_TRAJEEJECUTIVO_H
#define PROYECTO2_PROGRA2_TRAJEEJECUTIVO_H

#include "Traje.h"
#include "MangaLarga.h"
#include "Ejecutivo.h"
#include "DeVestir.h"
#include "PreciosTienda.h"
class TrajeEjecutivo: public Traje{
    private:
        Camisa* c1;
        Pantalon* p1;
        Zapato* z1;
    public:
        TrajeEjecutivo(const string &tipo, const string &codigo);
        ~TrajeEjecutivo() override;

        Camisa* creaCamisa() override;
        Camisa *getCamisa() const override;

        Pantalon* creaPantalon() override;
        Pantalon *getPantalon() const override;

        Zapato* creaCalzado()  override;
        Zapato *getZapato() const override;

        void actualizarPrecios() override;

        string toString() override;
};


#endif //PROYECTO2_PROGRA2_TRAJEEJECUTIVO_H
