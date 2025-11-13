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
  

  cout << "                          ¡Bienvenido a UPparking!" << endl;
  cout << "¿Desea usar el estacionamiento?" << endl;
  cout << "(Para Si, escriba 1. Para No, escriba 0)" << endl;
  int usar;
  cin >> usar;
  
  if (usar == 0)
  {
    cout << "¡Gracias! Vuelva pronto ;)" << endl;
  }
  else if (usar == 1)
  {

    
    int opcion;
    cout << endl;
    cout << "==============================================================" << endl; 
    cout << "| 1 Para ver el estado del estacionamiento                   |" << endl;
    cout << "| 2 Para encontrar un vehiculo por medio de su ID.           |" << endl;
    cout << "| 3 Para ingresar un nuevo vehiculo (tamanio,marca,color).   |" << endl;
    cout << "| 4 Para salir caminando.                                    |" << endl;
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
        

        break;

      case 3:
        cout << "Podria proporcionarnos los siguientes datos de su vehiculo?" << endl;
        cout << "Tamanio: ";
        cin >> nn.tamanio;
        cout << endl << "Marca: ";
        cin >> nn.marca;
        cout << endl << "Color: ";
        cin >> nn.color;

        nn.setID();
        par.meterVehiculo(nn);


        
        break;

      case 4:
        cout << "Gracias por venir :)" << endl;
        return 0;
        break;
      
      }
      

    }while(true);
  }
  
  
  





      

}