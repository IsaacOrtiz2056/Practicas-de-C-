#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Tablas de multiplicar"<<endl;
    cout<<"Que tabla quieres multiplicar quieres generar del 1 al 10?: "; cin>>n;
    if (n>1 and n<=10)
    {
        for ( i = 1; i <= 10; i++)
        {
        cout<<n<<" x "<<i<<" = " <<n*i<<endl;
        }
    }
    else
    cout<<"Tu numero esta fuera del rango";
    return 0;
}