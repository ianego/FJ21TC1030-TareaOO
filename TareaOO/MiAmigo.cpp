#include "Paqueteria.h"
#include "Yo.h"
#include <iostream>

using namespace std;

Paqueteria::Paqueteria(float precio, string direccion1){
    this->precio=precio;
    this->direccion1=direccion1;
}

void Paqueteria::setprecio(){
this->precio=precio;
}
string Paqueteria::getprecio(){
    return precio;
}
void Paqueteria::setdireccion1(){
this->direccion1=direccion1;
}
string Paqueteria::getdireccion1(){
    return direccion1;
}

void  Paqueteria::DarPrecio(){
    cout << "El Precio es de: $40 "; 

}

void Paqueteria::ConfirmarDireccion(){
    cout << "¿Es correcta su dirección? (Si/No): "; 

}
void Paqueteria::recogerPaquete(){
    cout << "Se ha recibido correctamente el paquete";
}

void Paqueteria::envioPaquete(){
    cout << "Se esta mandando el paquete"; 
}

void Paqueteria::entregaPaquete(){
    cout << "Se ha entregado el paquete";
}