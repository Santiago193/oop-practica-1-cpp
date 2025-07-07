#ifndef CIRCULO_H
#define CIRCULO_H

class circulo{
private:
    //creacion de variables
    float radio;
public:
    //creacion de constructores y destructores
    circulo();
    ~circulo();
    //creacion de setters y metodo
    float area();
    void setRadio(float r);
};

#endif // CIRCULO_H
