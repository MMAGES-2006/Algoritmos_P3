#ifndef Carro_h
#define Carro_h
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

class Carro
{
private:
    
    
public:
    string marca;
    char tamanio;
    string color;
    int id;

    void setID();
    void mostrar();

    Carro(char tamanio, string marca, string color, int id);

    ~Carro();

};
#endif