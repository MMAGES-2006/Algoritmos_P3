#ifndef Estacionamiento_h
#define Estacionamiento_h
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

#include "Carro.h"

using namespace std;

class Estacionamiento
{
private:
   vector<Carro*> Carros;

public:
    string nombre;

    void meterVehiculo(Carro car);
    void sacarVehiculo();
    void disponibilidad();

    Estacionamiento(string nombre);
    Estacionamiento(string nombre, vector<Carro*> Carros);

    
};
#endif