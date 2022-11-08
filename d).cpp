#include<iostream>
using namespace std;

struct numero
{
    int num;
}numero[16];

int main()
{
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
            
}
