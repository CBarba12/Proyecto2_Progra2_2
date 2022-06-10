//
// Created by Usuario on 3/6/2022.
//

#ifndef PROYECTO2_PROGRA2_BOTA_H
#define PROYECTO2_PROGRA2_BOTA_H

#include "Zapato.h"
class Bota: public Zapato{
    private:
        bool alta;
    public:
    Bota(double precio = 0.0, const string &color ="Negro", const string &codigo ="003" ,bool alta = false);
    virtual ~Bota();
    bool isAlta() const;
    void setAlta(bool alta);
    bool getCaracteristica() override;
    void setCaracteristica(bool) override;
    string toString() override;
};


#endif //PROYECTO2_PROGRA2_BOTA_H
