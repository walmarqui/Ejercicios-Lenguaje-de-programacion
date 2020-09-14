#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int numeros = 0;
    int sumar = 0;
    int matriz[5][5];

    system("cls");
    cout <<"Suma de matriz con numeros aleatorios "<< endl;
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            numeros = rand() % 100 + 1;
            sumar = sumar + numeros;

            matriz[i][j] = numeros;

            cout <<"[ ";
            cout << matriz[i][j] << " ";
            cout <<" ]";
        }
        
    }
    cout << endl;
    cout << "La suma de la matriz es : "<< sumar << endl;
    cout << endl;

    return 0;
}
