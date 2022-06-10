//
// Created by Usuario on 4/6/2022.
//

#ifndef PROYECTO2_PROGRA2_PRECIOSTIENDA_H
#define PROYECTO2_PROGRA2_PRECIOSTIENDA_H

#include "Utiles.h"
class PreciosTienda {
    public:
        static double retornarPrecioCamisa(const string& codigo, string tamano, bool caracteristica);
        static double retornarPrecioPantalon(const string& codigo, string tamano, bool caracteristica);
        static double retornarPrecioZapatos(const string& codigo, string tamano, bool caracteristica);
};


#endif //PROYECTO2_PROGRA2_PRECIOSTIENDA_H
