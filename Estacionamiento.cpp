#include <iostream>
#include <string>
#include <vector>

#include "Carro.h"
#include "Estacionamiento.h"

using namespace std;

void Estacionamiento::mostrarCarrosP()
{
    for (int i = 0; i < CarrosP.size(); i++)
    {
        CarrosP[i]->  mostrar();
        cout << endl; 
    }
}

void Estacionamiento::mostrarCarrosG()
{
    for (int i = 0; i < CarrosG.size(); i++)
    {
        CarrosG[i]->  mostrar();
        cout << endl; 
    }
}

void Estacionamiento::dispoCarrosP(char tamanio)
{
    if(CarrosP.size() == 20)
    {
        if(CarrosG.size() < 8)
        {
            cout << "Si hay espacio, continue : )" << endl;

        }
        else
        {
            cout << "No hay espacio" << endl;

        }      
    }
}


void Estacionamiento::meterVehiculoP(Carro car)
{
    Carro *nc = new Carro(car);

    this->CarrosP.push_back(nc);

}

void Estacionamiento::meterVehiculoG(Carro car)
{
    Carro *nc = new Carro(car);

    this->CarrosG.push_back(nc);

}

void Estacionamiento::sacarVehiculoP(int sel)
{
    CarrosP.erase(find(CarrosP.begin(), CarrosP.end(), sel));
    cout << "Vehiculo retirado con exito :)" << endl;

}

void Estacionamiento::sacarVehiculoG(int sel)
{
    CarrosG.erase(find(CarrosG.begin(), CarrosG.end(), sel));
    cout << "Vehiculo retirado con exito :)" << endl;

}

void Estacionamiento::disponibilidad()
{
    if(CarrosP.size() < 20 && CarrosG.size() < 8)
    {
        dispoP = 20 - CarrosP.size();
        dispoG = 8 - CarrosG.size();

        cout << "Estos son los espacios disponibles para carros pequenios: " << dispoP << endl;
        cout << "Estos son los espacios disponibles para carros grandes: " << dispoG << endl;

    }
    else if(CarrosP.size() < 20 )
    {

    }

/*
    for(int i = 0; i < CarrosP.size(); i++)
    {
        for(int j = 0; j < Carr)
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
        */
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
