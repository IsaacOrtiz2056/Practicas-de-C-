#include<iostream>
using namespace std;
int main ()
{
    string nombre;
    cout<< "Ingresa tu nombre; ";
    //cin >> nombre; //Captura de datos 
    getline (cin,nombre);//permite capturar despues de darle enter
    cout <<"Hola "<<nombre<<endl;
    return 0;
    
}