//
// Created by Usuario on 4/6/2022.
//

#include "PreciosTienda.h"

double PreciosTienda::retornarPrecioCamisa(const string& codigo, string tamano, bool caracteristica) {
    if(codigo == "003"){
        if(!caracteristica){
            if(tamano == "Grande"){
                return 250.00;
            } else if(tamano == "Mediana"){
                return 200.00;
            } else if(tamano == "Pequena"){
                return 150.00;
            } else if(tamano == "Nino") {
                return 100.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        } else if(caracteristica){
            if(tamano == "Grande"){
                return 300.00;
            } else if(tamano == "Mediana"){
                return 250.00;
            } else if(tamano == "Pequena"){
                return 175.00;
            } else if(tamano == "Nino") {
                return 150.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        }
    } else if(codigo == "002"){
        if(!caracteristica){
            if(tamano == "Grande"){
                return 150.00;
            } else if(tamano == "Mediana"){
                return 100.00;
            } else if(tamano == "Pequena"){
                return 75.00;
            } else if(tamano == "Nino") {
                return 50.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        } else if(caracteristica){
            if(tamano == "Grande"){
                return 200.00;
            } else if(tamano == "Mediana"){
                return 150.00;
            } else if(tamano == "Pequena"){
                return 125.00;
            } else if(tamano == "Nino") {
                return 75.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        }
    } else if(codigo == "001"){
        if(!caracteristica){
            if(tamano == "Grande"){
                return 325.00;
            } else if(tamano == "Mediana"){
                return 280.00;
            } else if(tamano == "Pequena"){
                return 150.00;
            } else if(tamano == "Nino") {
                return 125.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        } else {
            if (tamano == "Grande") {
                return 375.00;
            } else if (tamano == "Mediana") {
                return 315.00;
            } else if (tamano == "Pequena") {
                return 175.00;
            } else if (tamano == "Nino") {
                return 165.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        }
    } else {
        cout << "Codigo no valido" << endl;
    }
    return 0.0;
}

double PreciosTienda::retornarPrecioPantalon(const string& codigo, string tamano, bool caracteristica) {
    if(codigo == "002"){
        if(!caracteristica){
            if(tamano == "Grande"){
                return 150.00;
            } else if(tamano == "Mediana"){
                return 100.00;
            } else if(tamano == "Pequena"){
                return 50.00;
            } else if(tamano == "Nino") {
                return 25.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        } else if(caracteristica){
            if(tamano == "Grande"){
                return 200.00;
            } else if(tamano == "Mediana"){
                return 150.00;
            } else if(tamano == "Pequena"){
                return 75.00;
            } else if(tamano == "Nino") {
                return 90.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        }
    } else if(codigo == "003"){
        if(!caracteristica){
            if(tamano == "Grande"){
                return 110.00;
            } else if(tamano == "Mediana"){
                return 85.00;
            } else if(tamano == "Pequena"){
                return 50.00;
            } else if(tamano == "Nino") {
                return 45.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        } else if(caracteristica){
            if(tamano == "Grande"){
                return 150.00;
            } else if(tamano == "Mediana"){
                return 130.00;
            } else if(tamano == "Pequena"){
                return 80.00;
            } else if(tamano == "Nino") {
                return 75.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        }
    } else if(codigo == "001"){
        if(!caracteristica){
            if(tamano == "Grande"){
                return 300.00;
            } else if(tamano == "Mediana"){
                return 250.00;
            } else if(tamano == "Pequena"){
                return 125.00;
            } else if(tamano == "Nino") {
                return 100.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        } else if(caracteristica){
            if(tamano == "Grande"){
                return 500.00;
            } else if(tamano == "Mediana"){
                return 450.00;
            } else if(tamano == "Pequena"){
                return 260.00;
            } else if(tamano == "Nino") {
                return 200.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        }
    } else {
        cout << "Codigo no valido" << endl;
    }
}

double PreciosTienda::retornarPrecioZapatos(const string& codigo, string tamano, bool caracteristica) {
    if(codigo == "003"){
        if(!caracteristica){
            if(tamano == "Grande"){
                return 220.00;
            } else if(tamano == "Mediana"){
                return 200.00;
            } else if(tamano == "Pequena"){
                return 150.00;
            } else if(tamano == "Nino") {
                return 75.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        } else if(caracteristica){
            if(tamano == "Grande"){
                return 250.00;
            } else if(tamano == "Mediana"){
                return 225.00;
            } else if(tamano == "Pequena"){
                return 175.00;
            } else if(tamano == "Nino") {
                return 90.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        }
    } else if(codigo == "002"){
        if(!caracteristica){
            if(tamano == "Grande"){
                return 225.00;
            } else if(tamano == "Mediana"){
                return 200.00;
            } else if(tamano == "Pequena"){
                return 150.00;
            } else if(tamano == "Nino") {
                return 75.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        } else if(caracteristica){
            if(tamano == "Grande"){
                return 335.00;
            } else if(tamano == "Mediana"){
                return 300.00;
            } else if(tamano == "Pequena"){
                return 200.00;
            } else if(tamano == "Nino") {
                return 150.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        }
    } else if(codigo == "001"){
        if(!caracteristica){
            if(tamano == "Grande"){
                return 400.00;
            } else if(tamano == "Mediana"){
                return 350.00;
            } else if(tamano == "Pequena"){
                return 250.00;
            } else if(tamano == "Nino") {
                return 175.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        } else if(caracteristica){
            if(tamano == "Grande"){
                return 450.00;
            } else if(tamano == "Mediana"){
                return 400.00;
            } else if(tamano == "Pequena"){
                return 325.00;
            } else if(tamano == "Nino") {
                return 200.00;
            } else {
                cout << "Tamano no valido" << endl;
            }
        }
    } else {
        cout << "Codigo no valido" << endl;
    }
}