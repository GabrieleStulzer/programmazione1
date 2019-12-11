#include <iostream>
using namespace std;

int main()
{
    int x = 4;
    int *y = &x;

    cout << "Indirizzo x: " << &x << endl;
    cout << "Indirizzo y: " << &y << endl;
    cout << "Contenuto y: " << y << endl;
    cout << "Valore y: " << *y << endl;

    return 0;
}
