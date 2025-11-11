#include <iostream>
#include <string>

using namespace std;

class Carro
{
private:
    string marca;
    char tamaño;
    string color;
    int año;
    
public:
    Carro(char tamaño, string marca, string color, int año);

    ~Carro();

    void meterCarro();

};

Carro::Carro(char tamaño, string marca, string color, int año)
{

}

Carro::~Carro()
{
}


int main()
{
    cout << "Holaaa :(" << endl;



}