#include<iostream>
using namespace std;

int main()
{
    struct Nombres
    {
        string nom;
    }nombre[100];
    
    for ( int i = 0; i <= 99; i++)
    {
        cout<<"Ingresa un nombre: ";
        cin>>nombre[i].nom;
        if (nombre[i].nom[0] == 'f')
        {
            goto stop;
        }
    }
    stop: 
    for (int i = 0; i <= 99; i++)
    {
        cout<<nombre[i].nom<<endl;
    }
    



}