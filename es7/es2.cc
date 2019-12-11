#include <iostream>
using namespace std;

void stampa (int);
void stampa1 (int);
int print(int, int);

int main()
{
    int n;
    cout << "Numeri da stampare: ";
    cin >> n;

    stampa1(n);
    
    return 0;
}

void stampa(int n)
{
    if (n > 0)
        stampa(n - 1);
    cout << n;
}

void stampa1(int n)
{
    print(0, n);
}

int print(int min, int max)
{
    if (min < max)
    {
        cout << min;
        print(min + 1, max);
    }
}
