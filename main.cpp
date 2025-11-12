#include <iostream>
#include <vector>
#include <string>
#include <string>

#include "Carro.h"
#include "Estacionamiento.h"

using namespace std;

int main()
{
  Estacionamiento par("UpParking");

  cout << "                          Bienvenido a UPparking" << endl;
  cout <<"===========================================================================" << endl;
  cout << "Bienvenidos a UParking!" << endl;
  cout << "Para usar el estacionamiento, escribe 1. Si no deseas hacerlo, escribe 0: " << endl;

  char tam;
  string label, col;
  Carro nn(tam, label, col);
  
  do
  {
    int ingresarAuto;
    cin >> ingresarAuto;
    if (ingresarAuto == 0)
    {
      cout << "Gracias! Vuelva pronto." << endl;

      return 0;
    }
    else if (ingresarAuto == 1)
    {
      cout << "Ahora prosiga a ingresar los datos de su vehiculo: "<< endl;
      cout << "Tamanio, Grande o Pequeño: ";
      cin >> nn.tamanio;
      cout << endl << "Marca: ";
      cin >> nn.marca;
      cout << endl << "Color: ";
      cin >> nn.color;

      par.meterVehiculo(nn);
      
    }

  }while(true);
  
      

}