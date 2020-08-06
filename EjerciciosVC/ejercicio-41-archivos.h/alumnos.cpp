#include <iostream>
using namespace std;

string nombre = "Juan";
string apellido = "perez";
int edad = 18;

string  obtenerNombreCompleto()
{
    return nombre + " " + apellido;
}

int obtenerEdad()
{
    return edad;
}