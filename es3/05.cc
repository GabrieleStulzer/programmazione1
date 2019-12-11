#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << "A e' massimo" << endl;
    else if (b > a && b > c)
        cout << "B e' massimo" << endl;
    else if (c > a && c > b)
        cout << "C e' massimo" << endl;
    else
        cout << "Sono tutti uguali" << endl;
        
        
    return 0;
}
