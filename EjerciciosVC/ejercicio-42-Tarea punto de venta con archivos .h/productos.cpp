#include <iostream>
using namespace std;
#include "factura.h"

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
                agregarProducto("1 capuccino Lps. 40.00", 1, 40);
                break;
            case 2:
                agregarProducto("1 Expresso Lps. 30.00", 1, 30);
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
            cout <<"1 - CocaCola" << endl;
            cout <<"2 - Limonada" << endl;
            cout <<"3 - Granita" << endl;
            cout << endl;

            cout <<"Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 CocaCola Lps. 20.00", 1, 20);
                break;
            case 2:
                agregarProducto("1 Limonada Lps. 25.00", 1, 25);
                break;
            case 3:
                agregarProducto("1 Granita Lps. 35.00", 1, 35);
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
        case 3:
        {
            cout <<"REPOSTERIA" << endl;
            cout <<"**********" << endl;
            cout <<"1 - Pan de Banano" << endl;
            cout <<"2 - Pastel de pina" << endl;
            cout <<"3 - pastel 3 leches" << endl;
            cout << endl;

            cout <<"Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 Pan de Banano Lps. 25.00", 1, 25);
                break;
            case 2:
                agregarProducto("1 Pastel de pina Lps. 20.00", 1, 20);
                break;
            case 3:
                agregarProducto("1 Pastel 3 leches Lps. 40.00", 1, 40);
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

        default:
        break;
    }
}