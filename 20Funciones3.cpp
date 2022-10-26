#include<iostream>
using namespace std;

long double factorial(long double n);//Protoripo de la funcion
int main (){
    long double n,r;
    cout<<"Factorial: Escribe una numero para obtener su Factorial: ";cin>>n;
    r=factorial(n);
    cout<<n<<" !n "<<r<<endl;
}
long double factorial(long double n)
{
    if (n<0)
        return 0;
    else 
        if (n>1)
        {
            return n*factorial(n-1); //recursividad mientras n>1
        }
    return 1;//Condicional para n==1 y n=0
}