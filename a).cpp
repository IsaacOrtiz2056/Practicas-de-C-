#include<iostream>
using namespace std;


char letras(string n);

int main(){
    string l,n;
    for (int i = 1; i <= 10; i++)
    {
        cout<<"Ingresa una letra: ";
        cin>>n;
        l=letras(n);
        cout<<l;
    }
}
char letras(string n)
{
    cout<<n<<endl;
    return 0;
}
    



//Listo pero se trabaja cuando poner mas de dos caracteres
