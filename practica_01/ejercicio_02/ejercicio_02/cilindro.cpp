#include "cilindro.h"
#include "circulo.h"
//definicion de constrctores y destructores
cilindro::cilindro():circulo(0),altura(0) {}
cilindro::cilindro(float r, float a):circulo(r),altura(a) {}
cilindro::~cilindro() {}
//definicon que retorna el volumen del cilindro
float cilindro::volumen(){
    //se crea una varible de tipo circulo
    class circulo c1;
    //se guarda el radio en la clase
    c1.setRadio(circulo);
    //se obtiene el area del circulo
    circulo=c1.area();
    //se retorna el area por la altura
    return circulo*altura;
}
