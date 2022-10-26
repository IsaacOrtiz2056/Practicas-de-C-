/*Sobre carga de funciones
Es el hecho de poder tener varias funcionnes con el mismo nombre
y con distintos numeros de parametros de entrada*/
 #include<iostream>
 using namespace std;
 //Asi se declara la sobrecarga de las funciones, mismo nombre diferente numeros de parametros
int suma(int a, int b);
int suma(int a,int b,int c);
int suma(int a, int b,int c, int d);

int main()
{
    int n1=1,n2=2,n3=3,n4=4;
    cout<<"Trabajamos con los numeros: "<<n1<<","<<n2<<","<<n3<<","<<n4<<endl;
    cout<<"La suma de los dos primeros numeros: "<<suma(n1,n2)<<endl;
    cout<<"La suma de los tres primeros numeros: "<<suma(n1,n2,n3)<<endl;
    cout<<"La suma de los 4 numeros es: "<<suma(n1,n2,n3,n4)<<endl;

}
int suma(int a, int b, int c,int d)
{
    return a+b+c+d;
}
int suma(int a, int b)
{
    return a+b;
}
int suma(int a, int b, int c)
{
    return a+b+c;
}
//Se usan cuando cuando hay variaciones de datos 