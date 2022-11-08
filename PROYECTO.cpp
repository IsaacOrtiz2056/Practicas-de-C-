#include<iostream>
#include<string.h>
using namespace std;

char letras(string n);

int ascii(char letra)
{
int valorascii=letra;
return valorascii;
}
template <class T>
T suma(T a,T b );

struct Nombres
{
    string nom;
}nombre[100];
			    
struct carac
{
	char c;
};
int main(){
	
    char op;
    	op='q';
        while (op!='f')
        {
        	cout<<endl;
        	
            cout<<"MENU"<<endl;
            cout<<"a)_Capturar diez Letras mediante una funcion Recuersiva"<<endl;
            cout<<"b)_Capturar caracteres has que aparezca un numero, luego imprimerlos"<<endl;
            cout<<"c)_Capturar nombres de personas hasta que que la primera letra del aguno sea una F"<<endl;
            cout<<"d)_Capturar 15 numeros, impresos en forma escalonada"<<endl;
            cout<<"e)_Capturar dos caracteres, mendiante plantillas sumarlos como enteros y como caracteres"<<endl;
            cout<<"f)_SALIR"<<endl<<endl;
            cout<<"Opcion a realizar??: " ; cin>>op;
            switch (op)
            {
            case 'a':
                cout<<"a)_Capturar diez Letras mediante una funcion Recuersiva"<<endl;
                  /*string l,n;
				    for (int i = 1; i <= 10; i++){
				        cout<<"Ingresa una letra: ";
				        cin>>n;
				        l=letras(n);
				        cout<<l;
				    }*/
                break;
            case 'b':
                cout<<"b)_Capturar caracteres has que aparezca un numero, luego imprimerlos"<<endl;
                	/*int i;
					carac let[i];
					
                    int con,v;
                    char car,c1;
                    
                    for ( i = 0; (v<=48 or v>=57) ; i++)
                    {
                        //cout<<"Contador "<<i;
                        cout<<"Ingresa un caracter: ";
                        cin>>c1;
                        let[i].c=c1;
                        v=ascii(let[i].c);
                        car=i;
                    }     
                    
                    for ( i = 0; i!=car; i++)
                    {
                        cout<<let[i].c<<" ";
                    }*/
                break;
            case 'c':
                cout<<"c)_Capturar nombres de personas hasta que que la primera letra del aguno sea una F"<<endl;
			    
			    for ( int i = 0; i <= 99; i++)
			    {
			        cout<<"Ingresa un nombre: ";
			        cin>>nombre[i].nom;
			        if (nombre[i].nom[0] == 'f')
			        {
			            goto stop;
			        }
			    }
			    stop: 
			    for (int i = 0; i <= 99; i++)
			    {
			        cout<<nombre[i].nom<<endl;
			    }
                break;
            case 'd':
                cout<<"d)_Capturar 15 numeros, impresos en forma escalonada"<<endl;
                struct numero
			    {
			        int num;
			    }numero[16];
			    for (int i = 0; i <= 15; i++)
			    {    
			        cout<<"Ingresa un numero: ";
			        cin>>numero[i].num;
			    }
			    cout<<endl;
			    for (int i = 0; i <=4; i++) // 0-4
			    {
			        cout<<numero[i].num<<" ";
			    }
			    cout<<endl;
			    for (int i = 5; i <=8; i++) // 5-9
			    {
			        cout<<numero[i].num<<" ";
			    }
			    cout<<endl;
			    for (int i = 10; i <=12; i++) //10-13
			    {
			        cout<<numero[i].num<<" ";
			    }
			    cout<<endl;
			    for (int i = 13; i <= 14; i++)
			    {
			        cout<<numero[i].num<<" ";
			    }
			    cout<<endl;
			    cout<<numero[15].num;
            
                break;
            case 'e':
                cout<<"e)_Capturar dos caracteres, mendiante plantillas sumarlos como enteros y como caracteres"<<endl;
                
				char c1,c2;
			    cout<<"Ingresa 1 Caracteres: ";
			    cin>>c1;
			    cout<<"Ingresa 1 Caracteres: ";
			    cin>>c2;
			    int v1,v2;
			    v1=ascii(c1);
			    v2=ascii(c2);
			    cout<<"La suma de los dos caracteres en Entero: "<<suma(v1,v2)<<endl;
			    cout<<"La suma de los dos caracteres en Caracter: "<<suma<char>(c1,c2);
			    
                break;
            default:
                break;
            }
        }
    return 0;
}

char letras(string n)
{
    cout<<n<<endl;
    return 0;
}
template<class T>
T suma(T a,T b )
{
	return a+b;				
}
