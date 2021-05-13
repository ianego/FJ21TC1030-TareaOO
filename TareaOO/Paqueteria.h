#ifndef PAQUETERIA_H_
#define PAQUETERIA_H_
#include <string>


class Paqueteria
{
    private:
    float precio; 
    string direccion1;

    public:
    Paqueteria();
    Paqueteria(float precio, string direccion1);
    
    string getprecio(){return precio;}
    string getdireccion1(){return direccion1;}
    void setprecio(string precio);
    void setdireccion1(string direccion1);

    void DarPrecio();
    void ConfirmarDireccion();
    void recogerPaquete();
    void envioPaquete();
    void entregaPaquete();
};
#endif