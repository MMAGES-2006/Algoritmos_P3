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
void Estacionamiento::sacarVehiculo(int sel)
{
}
void Estacionamiento::disponibilidad()
{
    for(int i = 0; i < Carros.size(); i++)
    {
        cout << "Estos son los carros que hay actualmente en el estacionamiento: " << endl;
        Carros[i] -> mostrar();
        cout << endl;

        if(Carros.size() < max)
        {
            dispo = max - Carros.size();
            cout << "Estos son los espacios disponibles para carros pequeños: " << dispo << endl;
        }
        else
        {
            cout << "Ya no hay espacios dispobles, lo sentimos :( " << endl;
        }

    }
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
