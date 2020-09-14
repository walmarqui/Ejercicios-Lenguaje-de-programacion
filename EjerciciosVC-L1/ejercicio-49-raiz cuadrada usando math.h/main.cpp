#include <iostream>
#include <math.h>
#define Pi 3.1416

using namespace std;

float raizCuadrada(int a)
{
    return sqrt(a);
}

int main(int argc, char const *argv[])
{
    int num = 0;
    float resultado = 0;

    system("cls");
    cout <<"***Calcular Raiz Cuadrada***" << endl;
    cout <<"Ingrese el numero a calcular: ";
    cin >> num;
    cout << endl;

    resultado = raizCuadrada(num);
    cout <<"La raiz cuadrade de "<< num<< " es: " << resultado;
    cout << endl;
    system("pause");

    return 0;
}
