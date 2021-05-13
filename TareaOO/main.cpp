#include "Yo.h"
#include "Paqueteria.h"
#include "Miamigo.h"
#include <iostream>
#include <string>

using namespace std;

int main(void){
    
    string respuesta;

    Yo obj1;
    Paqueteria obj2;
    MiAmigo obj3; 

cout << "Bienvenido a su paquetería de confianza ¿en que le podemos ayudar?" << endl;

    obj1.DarNombre();
    obj1.DarDireccionDeEnvio();
    //obj1.getdireccion();
    obj2.ConfirmarDireccion();
    cin >> respuesta;
    if (respuesta == "Si") {
        obj2.DarPrecio();
        obj2.recogerPaquete();
        obj2.envioPaquete();
        obj3.DarNombre1();
        obj2.entregaPaquete();
    }
    else {
        cout << "Revise con más cuidado";
    }
}