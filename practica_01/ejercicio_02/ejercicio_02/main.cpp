#include <iostream>
#include "cilindro.h"

int main(){

    cout<<"VOLUMEN DEL CILINDRO\n";
    //creacion de variables para pedir los datos
    float radio;
    float altura;
    char op;
    //do while que sirve para preguntar
    //si quiere volver a ingresar datos
    do{
        //do while que quiere ingresa radio
        //y altura positivos
        do{
            cout<<"ingrese el radio y la altura\n";
            cin>>radio;
            cin>>altura;
            if(radio<0)cout<<"radio incorrecto\n";
            else if(altura<0)cout<<"altura incorrecta\n";
        }while(radio<0||altura<0);
        //guardamos las variables en c1 de tipo cilindro
        cilindro c1(radio,altura);
            cout<<"El volumen es de: ";
        //llamamos a la funcion que calcula el volumen
            cout<<c1.volumen()<<endl;
            cout<<"Desea calcular denuevo[s/n]\n";
            cin>>op;
    }while(op!='n');
    cout<<"\nGRACIAS POR UTILIZAR ESTE PROGRAMA\n";

    return 0;
}
