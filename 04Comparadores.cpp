//Manejo de comparadores logicos y estructura IF
#include<iostream>
using namespace std;
int main ()
{
    int n1=0;
    int n2=0;
    
    cout <<"Escribe dos valores enteros para comparar";
    cin >> n1>>n2;  //Puede trabajar con las dos varibles dando un solo espacio como separador de cada uno
    if (n1==n2)
    {
       cout<<n1<<"="<<n2<<endl;
    }
    if (n1!=n2)
    {
    cout<<n1<<"!="<<n2<<endl;
    }
        
    if (n1>n2)
    {
    cout<<n1<<" Mayo que "<<n2;
    }
    else{
    cout<<n1<<" Menor que "<<n2<<endl;
    }
            
        
        
    
    


}