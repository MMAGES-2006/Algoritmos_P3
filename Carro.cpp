#include <iostream>
#include <string>
#include "Carro.h"
#include "Estacionamiento.h"

using namespace std;

void Carro::setID()
{
}

void Carro::mostrar()
{
    cout << "Tamanio: " << tamanio;
    cout << "Marca: " << marca;
    cout << "Color: " << color;
    cout << "ID: " << id;

}

Carro::Carro(char tamanio, string marca, string color, int id)
{
    this-> tamanio = tamanio;
    this-> marca = marca;
    this-> color = color;
    this-> id = id;

}

Carro::~Carro()
{
}
