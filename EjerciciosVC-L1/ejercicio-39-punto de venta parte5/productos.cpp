#include <iostream>
using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;
    switch (opcion)
    {
        case 1:
        {
            cout <<"BEBIDAS CALIENTES" << endl;
            cout <<"*****************" << endl;
            cout <<"1 - Capuccino" << endl;
            cout <<"2 - Expresso" << endl;
            cout << endl;

            cout <<"Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 capuccino", 1, 40);
                break;
            case 2:
                agregarProducto("1 Expresso", 1, 30);
                break;
                
            default:
                {
                cout <<" Opcion no valida";
                return;
                break;
                }
            }
            cout << endl;
            cout <<" Producto Agregado" << endl << endl;
            system("pause");
            
            break;
        }
        case 2:
        {
            cout <<"BEBIDAS FRIAS" << endl;
            cout <<"*************" << endl;
            system("pause");
            break;
        }
        case 3:
        {
            cout <<"REPOSTERIA" << endl;
            cout <<"**********" << endl;
            system("pause");
            break;
        }

        default:
        break;
    }
}