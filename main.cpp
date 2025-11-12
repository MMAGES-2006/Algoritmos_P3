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
  char tam;
  string label, col;
  Carro nn(tam, label, col);



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
        cout << endl;
        cout << "==============================================================" << endl; 
        cout << "| 1 Para ver el estado del estacionamiento                   |" << endl;
        cout << "| 2 Para encontrar un vehiculo por medio de su ID.           |" << endl;
        cout << "| 3 Para ingresar un nuevo vehiculo (tamanio,marca,color).   |" << endl;
        cout << "| 4 Para salir caminando.                                    |" << endl;
        cout << "=============================================================="<< endl;  

        par.meterVehiculo(nn);
      
        }
  
  do
  {
    

  }while(true);
  





      

}