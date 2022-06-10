//
// Created by Usuario on 2/6/2022.
//

#ifndef PROYECTO2_PROGRA2_OBSERVER_H
#define PROYECTO2_PROGRA2_OBSERVER_H


class Observer{ // Interfaz de los Observadores
public :
    virtual ~Observer();
    virtual void update() = 0;
};


#endif //PROYECTO2_PROGRA2_OBSERVER_H
