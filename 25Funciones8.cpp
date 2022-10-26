//Sobrecarga de finciones con parametros de diferentes tipo
#include<iostream>
using namespace std;

int mayor(int a, int b);
double mayor (double x, double y);
char mayor (char r,char s);
string mayor (string f, string g);

int main()
{
    
    cout<<"Mayor numero entre el 10 y 12: "<<mayor(10,12)<<endl;
    cout<<"Mayor entre 13,12  y 17,73: "<<mayor(13.12,17.73)<<endl;
    cout<<"Mayor entre a y e: "<<mayor('a','e')<<endl;
    cout<<"Mayot entre Carlos y Raul: "<<mayor("Carlos" ,"Raul")<<endl;
}
int mayor(int a,int b)
{
    if (a>b)
        return a;
    else
        return b;
}

double mayor (double x, double y)
{
    if (x<y)
    return x;
    else
    return y;
}
char mayor(char r, char s)
{
    if (r>s)
    return r;
    else
    return s;
}

string mayor (string f, string g)
{
    if (f>g)
        return f;
    else
        return g;
}