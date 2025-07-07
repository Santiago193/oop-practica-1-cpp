#ifndef CILINDRO_H
#define CILINDRO_H
#include<iostream>
#include"circulo.h"
using namespace std;
class cilindro{
private:
    //creacion de las variablesprivadas
    float circulo;
    float altura;
public:
    //constructores y destructores para instanciar los datos
    cilindro();
    cilindro(float r, float altura);
    ~cilindro();
    //metodo que calcula el volumen
    float volumen();
};

#endif // CILINDRO_H
