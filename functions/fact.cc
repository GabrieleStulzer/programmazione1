#include <iostream>
using namespace std;

int fact(int i);

int main()
{
    int i;
    cout << "Dammi un numero: ";
    cin >> i;

    cout << "Fattoriale di " << i << " = " << fact(i) << endl;
    return 0;
}


int fact(int i)
{
    if (i == 0)
        return 1;
    else 
        return i * fact(i - 1);
}
