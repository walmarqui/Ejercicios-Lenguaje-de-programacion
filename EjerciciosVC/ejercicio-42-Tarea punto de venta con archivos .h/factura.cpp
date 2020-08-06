#include <iostream>
using namespace std;

double subtotal;
string listaProductos;
double total;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    total = subtotal + (subtotal * 0.15);
}

void imprimirFactura()
{
    system("cls");
    cout <<" ******* "<< endl;
    cout <<" FACTURA "<< endl;
    cout <<" ******* "<< endl;
    cout << endl;

    cout <<"Productos "<< endl;
    cout << listaProductos << endl;

    cout <<"Subtotal             Lps "<< subtotal << endl;
    cout <<"Impuesto grabado 15%" << endl;
    cout <<"El total a pagar es: Lps "<< total << endl;
    cout << endl;
    system("pause");
}