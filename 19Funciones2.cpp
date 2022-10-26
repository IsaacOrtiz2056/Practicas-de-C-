#include<iostream>
using namespace std;

float suma(float a, float b);//Protocolo de la funcion (declaro la funcion)
int main(){
    float n1,n2,n3;
    cout<<"Ingresa 2 valores: "; cin>>n1>>n2; //Asi peude ingresar dos valores separados por un espacio y un enter
    n3=suma(n1,n2);
    cout<<"La suma es de: "<<n3<<endl;
}

float suma(float a, float b)
{
    float c=a+b;
    return c;
}
