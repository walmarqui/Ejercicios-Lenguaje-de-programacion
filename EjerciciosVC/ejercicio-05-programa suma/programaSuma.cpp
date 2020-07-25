#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //datos de entrada
    int a = 0;
    int b = 0;
    int resultado;

    cout<<" Ingrese el valor de a: ";
    cin>>a;
    
    cout<<endl;

    cout<<" Ingrese el valor de b: ";
    cin>>b;

    cout<<endl;

    //proceso
    resultado = a + b ;

    //salida
    cout<<" La suma de a + b es: "<< resultado;
    return 0;
}
