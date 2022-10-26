//Plantillas 
/*Manejo de Plantillas para poder definir "Funciones" que manejen diferentes tipos de datos
para sin tener que definir muchas funciones sobrecargadas*/
#include<iostream>
using namespace std;

template <class T>//La letra T es la nombre de la plantilla 
T mayor(T a, T b);//Declaramos la funcion prototipo de la plantilla 
                  //pero como tupo de datos ponemos T (plantilla)
int main()
{
    //El tipo de dato <int,char> no es necesario pero lo ponemos para saber con que dato estamos trabajando
    cout<<"Mayor entre 10 y 12: "<<mayor(10,12)<<endl;//El int indica con que trabaja la plantilla
    cout<<"mayor entre 10.23 y 15.34: "<<mayor<double>(10.23,15.34)<<endl;
    cout<<"Mayor entre r y m: "<<mayor<char>('r','m')<<endl;
    cout<<"Mayor entre Martha y Marcos: "<<mayor<string>("Martha","Marcos")<<endl;
    
}
template <class T>
T mayor(T a, T b)
{
    if (a>b)
    return a;
    else
    return b;
}
