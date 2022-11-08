//Herencia de clases 

#include<iostream>
using namespace std;

class Operacion{
    protected://permite que sus atributos sea accesibles por un subclase
         int v1;//varible
         int v2;
         int resultado;
    public: //existen 3 metodos de la clase operacion
        void c1(); //void es que no espere ningun retorno osea no espera nada de regreso
        void c2(); //Funciones 
        void mostrarResultado();


};
//Una clase puede heredar los atribuyos de otra clase(padre) convirtinedo 
//automaticamente en suclase por lo tanto todos los metodos de la clase Operacion
//seran metodo de clase suma

class Suma: public Operacion{ //Subclase de la clase operacion y puede trabajar con ella
    public:
        void operar();
};

class Resta: public Operacion{//Otra subclase con 4 metodos (3 heredados y 1 propio)
    public:
        void operar();
};

//Definir los metodos para que tegan una funcionalidad
void Operacion::c1() //definiccion del primer metodo de clase operacion
{
    cout<<"Ingresa el Primer valor: ";
    cin>>v1;
}
void Operacion::c2()
{
    cout<<"Ingresa el Segundo valor: ";
    cin>>v2;
}
void Operacion::mostrarResultado()
{
    cout<<"El resultado de la operacion es: "<<resultado<<endl;
}
void Suma::operar()
{
    resultado=v1+v2;//esta caracteristica las hereda de la clase operacion
}
void Resta::operar()
{
    resultado=v1-v2;
}

int main()
{
    Suma suma1; //Define la varible de la clase suma
    suma1.c1();
    suma1.c2();
    suma1.operar();
    //cout<<"La suma de los dos valores es: ";
    suma1.mostrarResultado();
    
    Resta resta1;
    resta1.c1();
    resta1.c2();
    resta1.operar();
    //cout<<"La resta de los dos valores es: ";
    resta1.mostrarResultado();


}