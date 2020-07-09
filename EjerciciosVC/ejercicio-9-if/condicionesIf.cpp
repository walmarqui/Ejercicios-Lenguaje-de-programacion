#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numeroSecreto = 7;
    int numero = 0;

    cout<<" Ingrese un numero "<<endl;
    cin>>numero;
    cout<<endl;

    if (numero == numeroSecreto)
    {
        cout<<" Adivinaste el numero secreto!!! "<< numero<<endl;
    }
        else
        {
            cout<<" no adivinaste"<<endl;
        }
        
     return 0;
}
