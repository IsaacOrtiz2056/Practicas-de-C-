#include<iostream>
using namespace std;
int main()
{   
    //endl salto de linea
    string nombre,apelli1,apelli2,email,direccion,poblacion;
    int edad;
    long long tele; //Entero pero de doble tamaño
    cout<<"Escribe tus datos"<<endl;
    cout<<"Escribe tu Nombre(S): "; getline(cin,nombre);
    cout<<"Escribe tu Primer Apellido: "; getline(cin,apelli1);
    cout<<"Escribe tu Segundo Apellido: "; getline(cin,apelli2);
    cout<<"Escribe tu Correo Electronico: "; getline(cin,email);
    cout<<"Escribe tu Direccion: "; getline(cin,direccion);
    cout<<"Escrine tu Poblacion: "; getline(cin,poblacion);
    cout<<"Ingresa tu Edad: "; cin>>edad; 
    cout<<"Ingresa tu Telefono: "; cin>>tele;

    cout<<"Nombre: "<<nombre<<" "<<apelli1<<" "<<apelli2<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Correo: "<<email<<endl;
    cout<<"Telefono: "<<tele<<endl;
    cout<<"Problacin: "<<poblacion<<endl;

}