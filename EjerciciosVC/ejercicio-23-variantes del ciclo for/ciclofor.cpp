#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << i <<" ";
    }

    cout <<endl;
    
    for (int i = 9; i >= 0; i--)
    {
        cout << i <<" ";
    }

    cout << endl;

    for (int i = 0; i < 10000; i++)
    {
        cout << i <<" ";
        if (i == 115)
        {
            break;
        }
        
    }

    cout <<endl;

    for (int i = 0; i < 10; i++)
    {
        if (i == 5 || i == 7)
        {
            continue;
        }
        cout << i <<" ";
    }

    
    return 0;
}
