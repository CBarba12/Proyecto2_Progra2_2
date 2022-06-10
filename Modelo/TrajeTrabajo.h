//
// Created by Usuario on 4/6/2022.
//

#ifndef PROYECTO2_PROGRA2_TRAJETRABAJO_H
#define PROYECTO2_PROGRA2_TRAJETRABAJO_H
#include "Traje.h"
#include "ConCuadros.h"
#include "Jeams.h"
#include "Bota.h"
#include "PreciosTienda.h"
class TrajeTrabajo : public Traje {
    private:
        Camisa* c1;
        Pantalon* p1;
        Zapato* z1;
    public:
    TrajeTrabajo(const string& tipo ="", const string& codigo ="");
    virtual ~TrajeTrabajo();

    Camisa* creaCamisa() override;
    Camisa *getCamisa() const override;

    Pantalon* creaPantalon() override;
    Pantalon *getPantalon() const override;

    Zapato* creaCalzado()  override;
    Zapato *getZapato() const override;

    void actualizarPrecios() override;

    string toString() override;
};


#endif //PROYECTO2_PROGRA2_TRAJETRABAJO_H
