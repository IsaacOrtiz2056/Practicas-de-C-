//Funciones sin retorno de tipo vuid o void
#include<iostream>
using namespace std;

void multi(void);
int main()
{
    multi();
}
void multi(void)
{
    int a,b,x;
    cout<<"Ingresa dos numeros: "; cin>>a>>b;
    cout<<a <<" X "<<b<<" = "<<a*b<<endl;
    
}