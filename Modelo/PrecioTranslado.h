//
// Created by Usuario on 4/6/2022.
//

#ifndef PROYECTO2_PROGRA2_PRECIOTRANSLADO_H
#define PROYECTO2_PROGRA2_PRECIOTRANSLADO_H

#include "Utiles.h"
class PrecioTranslado {
public:
    static string retornarPais(const string& codigo);
    static string retornarCiudad(const string& codigo);
    static double retornarCostoTraslado(const string& codigo);
};


#endif //PROYECTO2_PROGRA2_PRECIOTRANSLADO_H
