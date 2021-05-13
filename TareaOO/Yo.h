#ifndef YO_H_
#define YO_H_
#include <string>

class Yo
{
    private:
    string nombre; 
    string direccion;

    public:
    Yo();
    Yo(string nombre, string direccion);
    
    string getnombre(){return nombre;}
    string getdireccion(){return direccion;}
    void setnombre(string nombre);
    void setdireccion(string direccion);

    void DarNombre();
    void DarDireccionDeEnvio();
};

#endif