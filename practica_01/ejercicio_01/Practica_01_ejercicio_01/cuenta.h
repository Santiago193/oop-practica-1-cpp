#ifndef CUENTA_H
#define CUENTA_H
#include <iostream>

using namespace std;

class cuenta{
private:
    //variables privadas
    string nombre;
    int dinero;
public:
    //contructores destructores
    cuenta();
    cuenta(string nombre,int dinero);
    ~cuenta();

    //operaciones de la cuenta
    void ingresar(int i);
    void retirar(int i);
    void balance();
};

#endif // CUENTA_H
