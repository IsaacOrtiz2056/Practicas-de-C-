#include<iostream>
using namespace std;

int ascii(char letra)
{
    int valorascii=letra;
    return valorascii;

}

int main()
{
    int i;
    struct carac
    {
        char c;
    }let[i];
    int con,v;
    char car,c1;
    
     for ( i = 0; (v<=48 or v>=57) ; i++)
    {
        //cout<<"Contador "<<i;
        cout<<"Ingresa un caracter: ";
        cin>>c1;
        let[i].c=c1;
        v=ascii(let[i].c);
        car=i;
        

    }     
    
    for ( i = 0; i!=car; i++)
    {
        cout<<let[i].c<<" ";
    }

}