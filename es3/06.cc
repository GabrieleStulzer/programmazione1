#include <iostream>
using namespace std;

int main()
{
    char c;

    cin >> c;

    if (c == 'a' || c== 'e' || c == 'i' || c == 'o' || c == 'u')
        cout << "Il carattere e' una vocale" << endl;
    else
        cout << "Il carattere e' una consonante" << endl;


    switch (c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout << "Il carattere e' una vocale PT. 2" << endl; break;
        default: cout << "Il carattere e' una consonante PT. 2" << endl; break;
    }
    return 0;
}
