#include <iostream>
using namespace std;
#include "Botella.h"

//Constructor
Botella::Botella()
{
    _ocupacion = 0;
    _capacidad = 100;
    _tapada = true;
}

void Botella::setCapacidad(float capacidad)
{
    _capacidad = capacidad;
}

void Botella::Llenar(float llena)
{
    int auxOcupacion = 0;
    if((llena <= _capacidad && llena >= 0) && _tapada == false)
    {
        auxOcupacion = _ocupacion + llena;
        if(auxOcupacion >= 0 && auxOcupacion <= _capacidad)
            _ocupacion = _ocupacion+=llena;
        else
        {
            cout << "Ingrese un valor correcto" << endl;
            system("pause");
        }

    }
    else if(_tapada==true && (llena <= _capacidad && llena >= 0))
    {
        cout << "Sacame la tapa" << endl;
        system("pause");
    }
    else
    {
        cout << "Ingrese un valor correcto" << endl;
        system("pause");
    }
}

void Botella::Vaciar(float vacia)
{
    int auxOcupacion = 0;
    if((vacia <= _capacidad && vacia >= 0) && _tapada == false)
    {
        auxOcupacion = _ocupacion - vacia;
        if(auxOcupacion >= 0 && auxOcupacion <= _capacidad)
            _ocupacion = _ocupacion - vacia;
        else
        {
            cout << "Ingrese un valor correcto" << endl;
            system("pause");
        }
    }
    else if(_tapada==true && (vacia <= _capacidad && vacia >= 0))
    {
        cout << "Sacame la tapa" << endl;
        system("pause");
    }
    else
    {
        cout << "Ingrese un valor correcto" << endl;
        system("pause");
    }
}

float Botella::getCapacidad()
{
    return _capacidad;
}

float Botella::getOcupacion()
{
    return _ocupacion;
}

float Botella::getDisponibilidad()
{
    float disponibilidad = (_capacidad - _ocupacion);
    return disponibilidad;
}

void Botella::Destapar()
{
    if(_tapada == true)
    {
        _tapada = false;
        cout << "Botella destapada!" << endl;
        system("pause");
    }
    else
    {
        cout << "La botella ya estaba destapada!" << endl;
        system("pause");
    }

}

void Botella::Tapar()
{
    if(_tapada == false)
    {
        _tapada = true;
        cout << "Botella tapada!" << endl;
        system("pause");
    }
    else
    {
        cout << "La botella ya estaba tapada!" << endl;
        system("pause");
    }
}

void Botella::vaciarCompleto()
{
    if(_tapada == false){
    if(_ocupacion > 0){
    _ocupacion = 0;
    cout << "La botella se ha vaciado correctamente!" << endl;
    }
    else cout << "ANDA A LA CANCHA BOBO!" << endl;
    system("pause");
    }
    else
    {
        cout << "La botella esta tapada!" << endl;
        system("pause");
    }
}
