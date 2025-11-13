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
    int max = 28;
    int dispo;

    void meterVehiculo(Carro car);
    void sacarVehiculo(int sel);
    void disponibilidad();

    Estacionamiento(string nombre);
    Estacionamiento(string nombre, vector<Carro*> Carros);

    
};
#endif