#include <iostream>
#include <string>
#include "Carro.h"

using namespace std;

Carro::Carro(char tamanio, string marca, string color)
{
    this-> tamanio = tamanio;
    this-> marca = marca;
    this-> color = color;

}

Carro::~Carro()
{
}
