#include <iostream>
using namespace std;

int fib(int n);

int main()
{
    int n, a, b, c, d;
    a = 0;
    d = 1;
    cin >> n;

    while(n >= d)
    {
        if (d == 1)
        {
            c = 1;
            b = c;
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
        }

        cout << c  << " ";

        d++;
    }

    return 0;
}

int fib(int n, int p, int p2)
{
    if (n > 1)
   

}
