#include <iostream>
#include <string>
#include <vector>

#include "Carro.h"
#include "Estacionamiento.h"

using namespace std;


void Estacionamiento::getCarro(int id)
{
}

void Estacionamiento::meterVehiculoP(Carro car)
{
    Carro *nc = new Carro(car);

    this->CarrosP.push_back(nc);

}

void Estacionamiento::meterVehiculoG(Carro car)
{
    Carro *nc = new Carro(car);

    this->CarrosP.push_back(nc);
}

void Estacionamiento::sacarVehiculo(int sel)
{
}

void Estacionamiento::disponibilidad()
{
    for(int i = 0; i < CarrosP.size(); i++)
    {
        cout << "Estos son los carros que hay actualmente en el estacionamiento: " << endl;
        CarrosP[i] -> mostrar();
        cout << endl;

        if(CarrosP.size() < maxP)
        {
            
            dispo = maxP - CarrosP.size();
            cout << "Estos son los espacios disponibles para carros pequenios:" << dispo << endl;
            for(int j = 0; j < CarrosP.size(); j++)
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

Estacionamiento::Estacionamiento(string nombre, vector<Carro *> CarrosP, vector<Carro *> CarrosG)
{
    this-> nombre = nombre;
    this-> CarrosP = CarrosP;
    this-> CarrosG = CarrosG;
}
