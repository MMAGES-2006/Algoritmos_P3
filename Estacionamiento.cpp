#include <iostream>
#include <string>
#include <vector>

#include "Carro.h"
#include "Estacionamiento.h"

using namespace std;
void Estacionamiento::meterVehiculo(Carro car)
{
    Carro *nc = new Carro(car);

    this->Carros.push_back(nc);

}
void Estacionamiento::sacarVehiculo()
{
}
void Estacionamiento::disponibilidad()
{
}

Estacionamiento::Estacionamiento(string nombre)
{
    this-> nombre = nombre;
}

Estacionamiento::Estacionamiento(string nombre, vector<Carro *> Carros)
{
    this-> nombre = nombre;
    this-> Carros = Carros;
}
