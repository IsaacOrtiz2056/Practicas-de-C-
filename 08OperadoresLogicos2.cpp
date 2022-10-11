/*Pedier un numero entre el 10 y 20 si cumple con la condicion imprimir
Tu numero esta bien escrito en caso de lo contrario que imprima Tu numero esta mal escrito */

#include<iostream>
using namespace std;
 int main(){
    int n1;
    bool a;
    cout<<"Ingresa el Primero numero: ";cin>>n1;
    

    if (n1>=10 && n1<=20)
    {
        a=1;
    }
    else
    {
        a=0;
    }
    
    string v="El numero esta dentro del rango", f="Tu numero esta fuera del rango";
    cout<<"Numero 1: "<<(a?v:f)<<endl;
    
    
    return 0;
 }