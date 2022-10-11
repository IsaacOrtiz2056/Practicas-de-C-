/*Pedir dos palabras si son iguales imprimer "Coinciden"
si no, imprimir "Error de caprura"*/
#include<iostream>
using namespace std;
int main ()
{
    string p1,p2;
    cout<<"Escribe una palabra: ";
    cin>>p1;
    cout<<"Escribe una palabra: ";
    cin>>p2;
    bool a; 
    a=p1==p2;
    string v="Coinciden", f="Erros de captura";
    cout<<"Las palabras: "<<(a?v:f)<<endl;
    return 0;
}