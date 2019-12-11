#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cout << "Dammi due valori da dividere: ";
    cin >> a >> b;

    if (b == 0)
        cout << "Non puoi dividere per 0!!!" << endl;
    else 
        cout << "Soluzione: " << a / b << endl;
    return 0;
}
