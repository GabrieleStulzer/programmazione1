#include <iostream>
using namespace std;

int main()
{
    int n;
    int *n1 = &n;
    
    cout << "Inserisci un numero: ";
    cin >> n;

    cout << "Indirizzo " << n1 << endl;
    cout << "Var + 1: " << *n1 + 1 << endl; 

    return 0;
}
