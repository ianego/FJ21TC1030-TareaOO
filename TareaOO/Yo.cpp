#include "Yo.h"
#include <iostream>

using namespace std;
std::string

Yo::Yo(string nombre, string direccion){
    this->nombre=nombre;
    this->direccion=direccion;
}

void Yo::setnombre(){
this->nombre=nombre;
}
string Yo::getnombre(){
    return nombre;
}
void Yo::setdireccion(){
this->direccion=direccion;
}
string Yo::getdireccion(){
    return direccion;
}

void  Yo::DarNombre(){
    cout << "Ingrese su nombre: "; 
    cin >> nombre;
}

void Yo::DarDireccionDeEnvio(){
    cout << "Ingrese la direccion: "; 
    cin >> direccion;
}