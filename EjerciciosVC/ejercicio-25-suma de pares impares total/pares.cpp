#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0;
    int impares = 0;
    int total = 0;

    cout <<"** Suma de pares, impares y total **" << endl;

    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
            {
                pares = pares + i;
            }
        
        if (i % 2 == 1)
            {
                impares = impares + i;
            }
        cout << i <<" ";
        
    }

    total = pares + impares;

    cout << endl;
    cout <<"Total pares: "<< pares << endl;
    cout <<"Total impares: "<< impares << endl;
    cout <<"La suma total es: "<< total << endl;
    
    return 0;
}
