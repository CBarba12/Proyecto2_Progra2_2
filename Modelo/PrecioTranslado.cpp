//
// Created by Usuario on 4/6/2022.
//

#include "PrecioTranslado.h"

string PrecioTranslado::retornarPais(const string& codigo) {
    if(codigo == "0001"){
        return "EE-UU";
    } else if(codigo == "0002"){
        return "Francia";
    } else if(codigo == "0003"){
        return "Italia";
    } else if(codigo == "0004"){
        return "Brasil";
    } else if(codigo == "0005"){
        return "Argentina";
    } else if(codigo == "0006"){
        return "Canada";
    } else if(codigo == "0007"){
        return "Inglaterra";
    } else if(codigo == "0008"){
        return "EE-UU";
    } else if(codigo == "0009"){
        return "CostaRica";
    } else {
        cout << "Codigo no valido" << endl;
    }
    return "";
}



string PrecioTranslado::retornarCiudad(const string& codigo) {
    if(codigo == "0001"){
        return "NewYork";
    } else if(codigo == "0002"){
        return "Paris";
    } else if(codigo == "0003"){
        return "Milan";
    } else if(codigo == "0004"){
        return "Brasilia";
    } else if(codigo == "0005"){
        return "BuenosAires";
    } else if(codigo == "0006"){
        return "Ontario";
    } else if(codigo == "0007"){
        return "Londres";
    } else if(codigo == "0008"){
        return "California";
    } else if(codigo == "0009"){
        return "Cualquiera";
    } else {
        cout << "Codigo no valido" << endl;
    }
    return "";
}

double PrecioTranslado::retornarCostoTraslado(const string& codigo) {
    if(codigo == "0001"){
        return 100.00;
    } else if(codigo == "0002"){
        return 200.00;
    } else if(codigo == "0003"){
        return 250.00;
    } else if(codigo == "0004"){
        return 150.00;
    } else if(codigo == "0005"){
        return 175.00;
    } else if(codigo == "0006"){
        return 160.00;
    } else if(codigo == "0007"){
        return 200.00;
    } else if(codigo == "0008"){
        return 150.00;
    } else if(codigo == "0009"){
        return 50.00;
    } else {
        cout << "Codigo no valido" << endl;
    }
    return 0.0;
}