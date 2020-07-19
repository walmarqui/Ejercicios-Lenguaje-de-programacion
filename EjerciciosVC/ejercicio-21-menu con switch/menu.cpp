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

        if (opcion == 0)
            break;

        switch (opcion)
        {
        case 1:
            {
                system("cls");
                cout <<" Estas en el menu de cafe y granitas";
                system("pause");  
            }
        case 2:
            {
                system("cls");
                cout << "Estas en el menu de reposteria ";
                system("pause");  
            }
        default:
            {
                cout<<"Ingrese una opcion valida (0, 1, 2) ";
                system("pause");
            break;
            }
        }
    
    return 0;
}
