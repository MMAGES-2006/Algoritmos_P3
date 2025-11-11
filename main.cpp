#include <iostream>
#include <vector>
#include <string>
#include <string>

#include "Carro.h"

using namespace std;

int main()
{
    int ingresarAuto;
    cout << "                          Bienvenido a UPparking" << endl;
    cout <<"===========================================================================" << endl;

    cout << "Bienvenidos a UParking!" << endl;
    cout << "Para usar el estacionamiento, escribe 1. Si no deseas hacerlo, escribe 0: " << endl;

    cin >> ingresarAuto;
    if (ingresarAuto == 0)
      {
        cout << "Gracias! Vuelva pronto." << endl;

      }
    else if (ingresarAuto == 1)
      {
        cout << "Cuentanos los detalles del automovil a ingresar."<< endl;
        cout << "Su tamanio es grande o pequenio?" << endl;
        //cin 
        cout << "Cual es la marca de su auto?" << endl;
        //cin
        cout << "De que color es su automovil?" << endl;
        //cin
        cout << "Por ultimo, de que anio es el vehiculo?" << endl;

        //if ( == 'g' ||  == 'G')
        //{

        //}
      }

}