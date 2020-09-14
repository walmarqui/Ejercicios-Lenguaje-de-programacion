# include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
    
}

int main(int argc, char const *argv[])
{
    system("cls");
    int numero = 0;
    cout <<"ingrese la posicion fibonacci: ";
    cin >> numero;
    cout <<"El numero fibonacci es: " << fib(numero);
    cout << endl;
    system("pause");
}
    
