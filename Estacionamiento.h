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
   vector<Carro*> CarrosP;
   vector<Carro*> CarrosG;

public:
    string nombre;
    int maxP = 28;
    int maxG = 8;
    int dispoP;
    int dispoG;

    void mostrarCarrosP();
    void mostrarCarrosG();
    void dispoCarrosP(char tamanio);
    void dispoCarrosG(char tamanio);
    void getCarro(int id);
    void meterVehiculoP(Carro car);
    void meterVehiculoG(Carro car);
    void sacarVehiculoP(int sel);
    void sacarVehiculoG(int sel);
    void disponibilidad();

    Estacionamiento(string nombre);
    Estacionamiento(string nombre, vector<Carro*> CarrosP, vector<Carro*> CarrosG);

    
};
#endif