#include<iostream>

using namespace std;
int main()
{
    cout<<"OPERADORES ARITMETICOS"<<endl;
    int a,b,c;
    cout<<"Escribe un numero entero: " ;cin>> a;
    cout<<"Escribe un numero entero: " ;cin>> b;
    cout<<"Escribe un numero entero: " ;cin>> c;

    //operadores aritmeticos en C++
    cout<<"Suma "<<a<<" + "<< b <<" = "<<a+b<<endl;
    cout<<"Resta "<<a<<" - "<< b <<" = "<<a-b<<endl;
    cout<<"Multiplicacion "<<a<<" * "<< b <<" = "<<a*b<<endl;
    cout<<"Division "<<a<<" / "<< b <<" = "<<a/b<<endl;
    cout<<"Modulo "<<a<<" % "<< b <<" = "<<a%b<<endl;

    /*Operadores de Asignatura compuesta 
    para no perder el valor de unos valores indciales las compiamos a 
    una nueva varible*/
    c=a; c+=b; cout<<"a+=b ; a= "<<c<<endl;//a=a+b
    c=a; c-=b; cout<<"a-=b ; a= "<<c<<endl;//a=a-b
    c=a; c*=b; cout<<"a*=b ; a= "<<c<<endl;//a=a*b
    c=a; c/=b; cout<<"a/=b ; a= "<<c<<endl;//a=a/b
    c=a; c%=b; cout<<"a%=b ; a= "<<c<<endl;//a=a%b

    //Incremento y decremento 
    c=a; cout<<"++a + b= "<<++c*b<<"; a= "<<c<<endl;//pre incremento
    c=a; cout<<"a++ + b= "<<c++*b<<"; a= "<<c<<endl;//pos incremento
    c=a; cout<<"a++ + b= "<<--c*b<<"; a= "<<c<<endl;//pre incremento
    c=a; cout<<"a++ + b= "<<c--*b<<"; a= "<<c<<endl;//pos incremento

    return 0;
}