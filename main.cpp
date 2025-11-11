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
    int ingresarAuto;

    cout << "Bienvenidos a UParking!" << endl;
    cout << "Para usar el estacionamiento, escribe 1. Si no deseas hacerlo, escribe 0: " << endl;

    cin >> ingresarAuto;
    if (ingresarAuto == 0)
      {
        cout << "Gracias! Vuelva pronto." << endl;

        return 0;
      }
    else if (ingresarAuto == 1)
      {
        cout << "Cuentanos los detalles del automovil a ingresar."<< endl;
        cout << "Su tama�o es grande o peque�o?" << endl;
        //cin 
        cout << "Cual es la marca de su auto?" << endl;
        //cin
        cout << "De que color es su automovil?" << endl;
        //cin
        cout << "Por ultimo, de que a�o es el vehiculo?" << endl;





        if ( == 'g' ||  == 'G')
        {

        }
       

      }
}