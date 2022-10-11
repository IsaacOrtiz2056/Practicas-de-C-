#include<iostream>

using namespace std;
int main ()
{
// entero pasitivo a booleano
int a=5; 
cout<<bool(a)<<endl;// morstrara un 1
//cuaquier numero pasitivo entero o negativo entero me va dar 1=True
//O regresa false (0)

//para valores reales pasitivos o negativos regresa 1
double d=3.25;
cout <<"del real + o - a bool regresa "<< bool(d)<<endl;

//para valores tipo caracter a bool
char g='A';//"" Como string ''Como caracter
cout<<"De caracter a bool "<<bool(g)<<endl;
//cualquier caracter entre '' va dar true (1)
// y su poner g=0 dara un false(=)

//de Booleano a true a entero
bool h=true;
cout<<int(h)<<endl;
// de caracter a real
char i='B';
cout<<double(i)<<endl; //te motrar el numero de que es la letra en codigo Ascii 
// de entero a caracter
int t=66;
cout<<char(t)<<endl; //te mostrara el caracter que es en codigo Ascii
//de double a char
double k=66.27;
cout<<char(k)<<endl;

 return 0;

}