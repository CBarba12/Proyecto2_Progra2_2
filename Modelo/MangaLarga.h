//
// Created by Usuario on 2/6/2022.
//

#ifndef PROYECTO2_PROGRA2_MANGALARGA_H
#define PROYECTO2_PROGRA2_MANGALARGA_H

#include "Camisa.h"
class MangaLarga:public Camisa {
    private:
        bool lisa;
    public:
    MangaLarga(double precio = 0.0, const string &color = "Negra", const string &codigo ="001", bool lisa = false);
    virtual ~MangaLarga();
    bool getCaracteristica() override;
    void setCaracteristica(bool) override ;
    string toString() override;
};


#endif //PROYECTO2_PROGRA2_MANGALARGA_H
