//Retorno por referencia 
/*Es caundo se modican los valores ubicados en memoria (&) por lo que no es 
necesario regresar nada ya que los valores se actualizan automaticamente*/

#include<iostream>
using namespace std;
void operador (int x, int y,int& s,int& r,int&m );
int main()
{
    int a,b,mult,resta,suma;
    cout<<"Escribir dos numeros: ";cin>>a>>b;
    operador (a,b,suma,resta,mult);
    cout<<"Los numeros iniciales son: "<<a<< " y "<<b<<endl;
    cout<<"La suma de estos valores es: "<<suma<<endl;
    cout<<"La resta de estos valores es: "<<resta<<endl;
    cout<<"La multiplicacion de estos valores es: "<<mult<<endl;
}
    void operador (int x, int y,int& s,int& r,int& m )
    {
        m=x*y;
        r=x-y;
        s=x+y;  
    }
    //No corre en visual pero en DevC++ si 
    
        
    
