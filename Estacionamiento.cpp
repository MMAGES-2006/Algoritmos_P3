#include <iostream>
#include <string>
#include <vector>

#include "Carro.h"
#include "Estacionamiento.h"

using namespace std;


void Estacionamiento::getCarro(int id)
{
}

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

        if(Carros.size() < maxP)
        {
            
            dispo = maxP - Carros.size();
            cout << "Estos son los espacios disponibles para carros pequenios:" << dispo << endl;
            for(int j = 0; j < Carros.size(); j++)
            {


            }
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
