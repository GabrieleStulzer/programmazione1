#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char c;
    cout << "Inserisci una lettera dell'alfabeto: ";
    cin >> c;

    if (c >= 'A' && c <= 'Z') 
    {
        c = (c - 'A') + 'a';
        cout << c << endl;
    }
    else if (c >= 'a' && c <= 'z')
    {
        c = (c - 'a') + 'A';
        cout << c << endl;
    }
    else
        cout << "Non hai inserito un carattere valido" << endl;
    return 0;
}
