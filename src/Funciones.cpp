#include <iostream>
using namespace std;
#include "Funciones.h"
#include "Botella.h"


void Funciones::Menu()
{
    cout << "1- Llenar botella"<<endl;
    cout << "2- Vaciar botella"<<endl;
    cout << "3- Destapar botella"<<endl;
    cout << "4- Tapar botella"<<endl;
    cout << "5- Vaciar por completo"<<endl;
    cout << "6- Capacidad de la botella"<<endl;
    cout << "7- Ocupacion de la botella"<<endl;
    cout << "8- Disponbilidad de la botella"<<endl;
    cout << "9- Seleccionar la capacidad de la botella"<<endl;
}

void Funciones::opcionesMenu()
{
    int opcion;
    Botella a;
    Menu();
    cin >> opcion;
    while(opcion!=0)
    {
        switch(opcion)
        {
        case 1:
        {
            float llenar;
            cout << "Ingrese cantidad a llenar: ";
            cin >> llenar;
            a.Llenar(llenar);
        }
        break;
        case 2:
        {
            float vaciar;
            cout << "Ingrese cantidad a vaciar: ";
            cin >> vaciar;
            a.Vaciar(vaciar);
        }
        break;
        case 3:
        {
            a.Destapar();
        }
        break;
        case 4:
        {
            a.Tapar();
        }
        break;
        case 5:
        {
            a.vaciarCompleto();
        }
        break;
        case 6:
        {
            cout << "La capacidad es " << a.getCapacidad() << endl;
            system("pause");
        }
        break;
        case 7:
        {
            cout << "La ocupacion es " << a.getOcupacion() << endl;
            system("pause");
        }
        break;
        case 8:
        {
            cout << "La disponibilidad es " << a.getDisponibilidad() << endl;
            system("pause");
        }
        break;
        }



        system("cls");
        Menu();
        cin >> opcion;
    }
}

