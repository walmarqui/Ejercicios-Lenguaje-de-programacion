#include <iostream>
using namespace std;

int numeroSecreto = 7;

void adivinarNumeroSecrto(int miNumero)
{
    if (miNumero == numeroSecreto)
    {
        cout <<"Adivinaste!" <<endl;
    }
    else
    {
        cout <<"Intento fallido con " << miNumero << endl;
        int otroNumero = 0;
        cout <<"Ingresa otro numero "<< endl;
        cin >> otroNumero;
        adivinarNumeroSecrto(otroNumero);
    }
    
}

int main(int argc, char const *argv[])
{
    adivinarNumeroSecrto(5);

    return 0;
}
