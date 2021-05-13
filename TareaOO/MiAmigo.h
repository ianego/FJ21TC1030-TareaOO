#ifndef MiAmigo_H_
#define MiAmigo_H_
#include <string>


class MiAmigo
{
    private:
    string nombre1; 

    public:
    MiAmigo();
    MiAmigo(string nombre1);
    
    string getnombre1(){return nombre1;}

    void setnombre1(string nombre1);

    void DarNombre1();

};
#endif