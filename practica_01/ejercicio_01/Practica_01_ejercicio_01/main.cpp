#include <iostream>
#include "cuenta.h"
int main(){
    //ingreso de datos
    cout << "\n= = = MI BANCO = = =\n" << endl;
    cuenta cuenta01("Juan Perez", 50);
    cuenta cuenta02("Andrea Boca", 200);
    //uso de el el ingreso de datos
    cuenta01.ingresar(10);
    cuenta02.ingresar(-150);
    //impresion del resultado
    cuenta01.balance();
    cuenta02.balance();
    cout << "-----------------------\n";
    //uso del retiro del dinero
    cuenta01.retirar(100);
    cuenta02.retirar(120);
    //impresion del balance
    cuenta01.balance();
    cuenta02.balance();
    return 0;
}
