/*
Confeccionar una clase persona que tenga como atributos el nombre, edad
definir tambien 
un metodo que cargue los datos personales y otra que los imprima 
plantear una se

*/

#include<iostream>
using namespace std;

class Persona
{
    protected:
        char nombre[40];
        int edad;
    public:
        void cargarDatosPersonales();
        void imprimirDatosPersonales();
};

class Empleado: public Persona
{
     private: //unicamente para esta clase
        float sueldo;
    public:
        void cargarSueldo();
        void imprimirSuldo();
        
};

void Persona::cargarDatosPersonales()
{
    cout<<"Ingresa el Nombre: ";
    cin.getline(nombre,40);
    cout<<"Ingresa la edad: ";
    cin>>edad;
    cin.get();
}

void Persona::imprimirDatosPersonales()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad; "<<edad<<endl;

}  
void Empleado::cargarSueldo()
{
    cout<<"Ingresa el Sueldo: ";
    cin>>sueldo;

}
void Empleado::imprimirSuldo()
{
    cout<<"Sueldo: "<<sueldo<<endl;
}
int main(){
    Persona persona1;
    persona1.cargarDatosPersonales();
    persona1.imprimirDatosPersonales();

    Empleado empleado1;
    empleado1.cargarDatosPersonales();
    empleado1.cargarSueldo();
    empleado1.imprimirDatosPersonales();
    empleado1.imprimirSuldo();


}