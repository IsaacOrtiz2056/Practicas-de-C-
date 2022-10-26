//Comando Continue
/*Permite continuar con la secuencia de un ciclo 
omitiendo un paso del mismo*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Escribe un numero: "; cin>>n;
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)continue;
        cout<<i<<" - ";
    }

}
//Muetra los numeros no impares que hay en un rango ingresado