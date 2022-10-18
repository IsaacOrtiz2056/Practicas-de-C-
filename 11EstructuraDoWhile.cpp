#include<iostream>
using namespace std;
 int main(){
    int i=0,r;
    cout<<"Escribe un numero para repetir la frase: ";cin>>r;
    cout<<"La frase se escribiria al menos una vez y ";
    cout<<"cuando e numero 0 o negativo"<<endl;
    do{
        i++;
        cout<<"Esta es una Frase a repetir"<<endl;
    }while (i<r);
    return 0;
 }