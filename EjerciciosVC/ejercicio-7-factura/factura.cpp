#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double subtotal = 0;
    double total = 0;
    double impuesto =0.15;

    cout<<"Ingrese el sub-total de la factura: ";
    cin>>subtotal;

    total= subtotal + ( subtotal * impuesto);
    cout<<" el total a pagar es: "<<total;
    cout<<endl;

    return 0;
}
