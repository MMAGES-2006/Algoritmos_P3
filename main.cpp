#include <iostream>
#include <vector>
#include <string>
#include <string>
#include "Carro.h"
#include "Estacionamiento.h"

using namespace std;

int main()
{
  const string Rojo  = "\033[31m";
  const string Verde = "\033[32m";
  const string Regresar = "\033[0m";

  Estacionamiento par("UpParking");
  

  cout << "                          ¡Bienvenido a UPparking!" << endl;
  cout << "==========================================================================" << endl; 
  cout << "Desea usar el estacionamiento?" << endl;
  cout << "(Para Si, escriba 1. Para No, escriba 0)" << endl;
  int usar;
  cin >> usar;
  
  if (usar == 0)
  {
    cout << "¡Gracias! Vuelva pronto ;)" << endl;
  }
  else if (usar == 1)
  {

    menu:
    int opcion;
    cout << endl;
    cout << "==============================================================" << endl; 
    cout << "| 1 Para ver el estado del estacionamiento                   |" << endl;
    cout << "| 2 Para ingresar un nuevo vehiculo (tamanio,marca,color).   |" << endl;
    cout << "| 3 Para retirar un vehiculo                                 |" << endl;
    cout << "| 4 Para buscar un vehiculo en especifico por medio de su ID |" << endl;
    cout << "| " << Rojo << "4 Para salir caminando. " << Regresar << "                                   |" << endl;
    cout << "=============================================================="<< endl;  

    do
    {
      int opcion;
      cin >> opcion;
      cout << endl;

      char tam;
      string label, col;
      int id;
      Carro nn(tam, label, col, id);

      switch (opcion)
      {
      case 1:
        cout << endl;
        par.disponibilidad();
        
        
        break;

      case 2:
        cout << "Podria proporcionarnos los siguientes datos de su vehiculo?" << endl;
        cout << "Tamanio: ";
        cin >> nn.tamanio;
        cout << endl << "Marca: ";
        cin >> nn.marca;
        cout << endl << "Color: ";
        cin >> nn.color;

        par.meterVehiculo(nn);

        cout << "Vehiculo ingresado con exito :)" << endl;
        cout << "Que le gustaria hacer ahora?" << endl;

        goto menu;
        

        break;

      case 3:
        
        break;

      case 4:
        
        break;

      case 5:

        cout << Verde << "Gracias por venir :)" << Regresar << endl;
        return 0;

        break;
      
      }

    }while(true);

    return 0;
  }
  
  
  





      

}