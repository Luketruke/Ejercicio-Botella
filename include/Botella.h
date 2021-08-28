#ifndef BOTELLA_H
#define BOTELLA_H


class Botella
{
private:
    float _capacidad;
    float _ocupacion;
    bool  _tapada;
public:
    void Llenar(float llena);
    void Vaciar(float vacia);
    void vaciarCompleto();
    void Tapar();
    void Destapar();
    Botella(); // Constructor
    void setCapacidad(float capacidad);
    float getCapacidad();
    float getOcupacion();
    float getDisponibilidad();
};

#endif // BOTELLA_H
