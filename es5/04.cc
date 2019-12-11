#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    float x;
    double ris = 0;
    cout << "Inserisci numero di passi: ";
    cin >> n;


    do
    {
        cin >> x;
    } while (abs(x) > 1);
    
    while (n >= 1)
    {
        ris +=  pow(-1, n+1)*(pow(x, n)/n);
        n--;
    }

    cout << "Risultato: " << ris << endl;

    return 0;
}
