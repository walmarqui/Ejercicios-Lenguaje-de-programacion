#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;

    while(true) {

        int opcion = 0;

        cout <<"****" <<endl;
        cout <<"MENU" <<endl;
        cout <<"****" <<endl;

        cout <<endl;
        cout <<"1 - Cafe y Granitas " << endl;
        cout <<"2 - Reposteria " << endl;
        cout <<"0 - Salir " << endl;

        cout <<"Ingrese una opcion del menu! ";
        cin >> opcion;

        if (opcion == 1)
        {
            system("cls");
            cout <<" Estas en el menu de cafe y granitas";
            system("pause");
        }
        if (opcion == 2)
        {
            system("cls");
            cout << "Estas en el menu de reposteria ";
            system("pause");
        }
        if (opcion == 0)
        {
            break;
        }
        
    }
    cout<<"Saliste del Sistema ";
    return 0;
}
