//Goto
/*El goto permite saltar a diferentes lineas de codigo no es muy recomendable
su uso pero existen y se pueden utilizar de ser necesario*/

#include<iostream>
using namespace std;
int main()
{
    cout<<"Uso del goto: Escribir s para saltar "<<endl;
    char c='a';
    salto1:
    cin>>c;
    if(c=='s') goto salto2;
    cout<<"Esto no es una s, Escribe s para salir"<<endl;
    goto salto1;
    salto2:
    cout<<"Perfecto escribirte una s, el programa acabo"<<endl;
    return 1;

}
/*Salto de linea 
salta a la salto2 cuando c es igual s si, no es
s vanza a la sigueinte liena */