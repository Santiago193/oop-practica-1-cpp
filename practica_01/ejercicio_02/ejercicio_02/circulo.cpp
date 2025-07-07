#include "circulo.h"
#include <qmath.h>
//definicion de constructores y destructores
circulo::circulo():radio(0.0) {}
circulo::~circulo(){}
//definicion del metodo
float circulo::area(){
    return radio*radio*M_PI;
}
//definicion del setter;
void circulo::setRadio(float r){
    radio=r;
}
