//Funciones con paso de argumentos por defecto
#include<iostream>
using namespace std;

int multi(int n1=1,int n2=1);
int main()
{
    int a=3,b=5;
    cout<<"Valor incial: "<<a<<" , "<<b<<endl;
    cout<<"Valor Final; "<<multi()<<endl;
    cout<<"Funcion con una argumento: "<<multi(a)<<endl;
    cout<<"Funcion con dos argumetos: "<<multi(a,b)<<endl;
}
int multi(int n1,int n2)
{
    return n1*n2;
}