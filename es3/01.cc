#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Inserisci un'eq di secondo grado: ";
    cin >> a;
    cin >> b;
    cin >> c;

    float d = (b*b) - (4*a*c);

    if ( d < 0)
        cout << "Non esiste soluzione";
    else 
    {

    float sol1 = ((-b) + sqrt(d)) / 2.0*a;
    float sol2 = ((-b) - sqrt(d)) / 2.0*a;
    
    cout << "Sol1: " << sol1 << " Sol2: " << sol2 << endl;
    }

}
