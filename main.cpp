//Librerias y archivos externos con las clases y funciones
#include <iostream>
#include <vector>
#include <string>
#include "Carro.h"
#include "Estacionamiento.h"

using namespace std;

int main()
{
  //Comandos para cambiar el color del texto en la consola
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
  
  //If para dar acceso al estacionamiento
  if (usar == 0)
  {
    cout << "¡Gracias! Vuelva pronto ;)" << endl;

  }
  else if (usar == 1)
  {
  
    //Menu de opciones, manejado por un switch
    menu:
    int opcion;
    cout << endl;
    cout << "==============================================================" << endl; 
    cout << "| 1 Para ver el estado del estacionamiento                   |" << endl;
    cout << "| 2 Para ingresar un nuevo vehiculo (tamanio,marca,color).   |" << endl;
    cout << "| 3 Para retirar un vehiculo                                 |" << endl;
    cout << "| " << Rojo << "4 Para salir caminando. " << Regresar << "                                   |" << endl;
    cout << "==============================================================" << endl;  

    do
    {
      //Variables y constructores a usar en el codigo
      char tam;
      string label, col;
      int id;
      int sel;
      Carro nn(tam, label, col, id);
      int opcion;
      cin >> opcion;
      cout << endl;


      switch (opcion)
      {
        //Ver el estado del estacionamiento
      case 1:
        cout << endl;
        par.disponibilidad();

        goto menu;
        break;  

        //Funciones para agregar un vehiculo, verificando el estado del estacionamiento
      case 2:
        cout << "Podria proporcionarnos los siguientes datos de su vehiculo?" << endl;
        cout << "Tamanio: ";
        cin >> nn.tamanio;
        if(nn.tamanio == 'P' || nn.tamanio == 'p' )
        {
          par.dispoCarrosP(tam);
          
          cout << endl << "Marca: ";
          cin >> nn.marca;
          cout << endl << "Color: ";
          cin >> nn.color;

          nn.setID();
          par.meterVehiculoP(nn);

        }
        else if(nn.tamanio == 'G' || nn.tamanio == 'g' )
        {
          cout << endl << "Marca: ";
          cin >> nn.marca;
          cout << endl << "Color: ";
          cin >> nn.color;

          nn.setID();
          par.meterVehiculoG(nn);

        }

        cout << "Vehiculo ingresado con exito :)" << endl;
        cout << "Que le gustaria hacer ahora?" << endl;

        goto menu; //Linea para volver al menu despues de ingresar un vehiculo
        
        break;

        //Funcion para retirar el vehiculo, por medio del ID
      case 3:
        cout << "Ingrese el ID del carro que quiere retirar y el tamaño del vehiculo" << endl;
        cout << "ID: " << endl;
        cin >> id;
        cout << "Tamanio: " << endl;
        cin >> tam;
        sel = id;
        if(nn.tamanio == 'P' || nn.tamanio == 'p' )
        {
          par.sacarVehiculoP(sel);

        }
        else if(nn.tamanio == 'G' || nn.tamanio == 'g' )
        {
          par.sacarVehiculoG(sel);

        }

        goto menu;
        
        break;

        //Caso para salirse del programa
      case 4:

        cout << Verde << "Gracias por venir :)" << Regresar << endl;
        return 0;

        break;
      
      }

    }while(true);

    return 0;
  }     

}