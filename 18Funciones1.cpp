#include<iostream>
using namespace std;
/*Si una funcion se declara antesd del main no necesota prototipo y solo si es una funcion*/
float suma (float a, float b)
{
    float c =a+b;
    return c;
}
int main (){
    float n1,n2,n3;
    cout<<"Ingresa un numero: "; cin>>n1;
    cout<<"Ingresa un numero: "; cin>>n2;
    n3=suma(n1,n2);
    cout<<"La suma es de: "<<n3<<endl;
    return 0;
}