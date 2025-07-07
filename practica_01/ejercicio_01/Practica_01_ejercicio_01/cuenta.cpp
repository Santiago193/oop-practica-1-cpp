#include "cuenta.h"

cuenta::cuenta():nombre(""),dinero(0.0) {}
cuenta::cuenta(string n,int d):nombre(n),dinero(d){}
cuenta::~cuenta(){}

void cuenta::ingresar(int i){
    if(i>=0)dinero+=i;
}
void cuenta::retirar(int i){
    if(dinero-i>=0)dinero-=i;
}
void cuenta::balance(){
    cout<<"TITULAR: "<<nombre<<"  CANTIDAD: $"<<dinero<<endl;
}
