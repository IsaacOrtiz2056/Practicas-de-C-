#include<iostream>
using namespace std;
int main ()
{
    bool p,s;
    cout<<"OPERADORES LOGICOS"<<endl;
    cout<<"Escribe un primer valor booleano (0,1): ";
    cin>>p;
    cout<<"Escribe el segundo valor booleano (0,1); ";
    cin>>s;
    cout<<"Los operadores capturados son: p= "<<p<<" s= "<<s<<endl;
    cout<<"OPERACIONES BASICAS:"<<endl;
    cout<<p<<" AND "<<s<<" = "<<(p and s)<<endl;
    cout<<p<<" OR "<<s<<" = "<<(p or s)<<endl;
    cout<<p<<" XOR "<<s<<" = "<<(p xor s)<<endl;
    cout<<"NOT s ="<<!s<<endl;
    cout<<"NOT p ="<<!p<<endl;
    string v="Verdero",f="Falso";
    cout<<"Primera Operacion: "<<(p?v:f)<<endl; //? Para saber si es el valor logico : Para dar opcion de V o F
    cout<<"Segunda Operacion: "<<(s?v:f)<<endl;
    







    return 0;
}