#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;

    cout<<"Ingres el valor de a:";
    cin>>a;
    cout<<endl;

    cout<<"Ingres el valor de b:";
    cin>>b;
    cout<<endl;

    cout<<"Ingres el valor de c:";
    cin>>c;
    cout<<endl;

    if (a > b)
    {   if( a > c)
        {
            cout<<" a es el mayor";
        }else
        {
            cout<<" c es le mayor";
        }
        
    }else{
        if(b > c)
        {
            cout<<"b es el mayor";
        }else
            {
                 cout<<"c es el mayor";
            }
    }
    

    

    return 0;
}
