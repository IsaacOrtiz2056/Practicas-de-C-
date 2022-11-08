#include<iostream>
using namespace std;

template <class T>
T suma(T a,T b );

int ascii(char letra)
{
    int valorascii=letra;
    return valorascii;
}

int main()
{
    char c1,c2;
    cout<<"Ingresa 1 Caracteres: ";
    cin>>c1;
    cout<<"Ingresa 1 Caracteres: ";
    cin>>c2;
    int v1,v2;
    v1=ascii(c1);
    v2=ascii(c2);
    cout<<"La suma de los dos caracteres en Entero: "<<suma(v1,v2)<<endl;
    cout<<"La suma de los dos caracteres en Caracter: "<<suma<char>(c1,c2);

}

template<class T>
T suma(T a,T b )
{
   return a+b;

}