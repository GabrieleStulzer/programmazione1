#include <iostream>
using namespace std;

int main(){
    int x = 0;
    while (x < 2) {
        cout << "Inserisci un intero maggiore di 2: ";
        cin >> x;

        if (x < 2)
            cout << "Numero errato";
    }

    int y = x/2;
    int sol = 0;


    while (y >= 2)
    {
        cout << "Divido il numero per: " << y << endl;

        if (x % y == 0)
        {
            sol = 1;
            y = 0;
        }

        y = y - 1;
        cout << "Ora y = " << y << endl;
    }

    if (sol == 1)
        cout << "Il numero non e' primo" << endl;
    else 
        cout << "Il numero e' primo" << endl;

    

    return 0;
}
