#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;

    srand(time(NULL));
    system("cls");
    cout <<"***Lanzada de dos dados***" << endl;
    system("pause");

    cout <<"Los numeros obtenidos son: " << endl;

    for (int i = 0; i < 2; i++)
    {
        numero = rand() % 6 + 1;
       
        cout << numero;
        cout << endl;
    }
    
    return 0;
}
