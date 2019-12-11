#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Calcolo dell'n-esimo numero di Fibonacci.\n";
    cout << "n = ";

    do {
        cin >> n;
        if(n < 1){
            cout << "Introdurre un numero positivo.\nn = ";
        }
    } while (n < 1);

    int * cache[] = new int[n];

    for (int i = 0; i < n; i++)
        cache[i] = 0;

    fibonacci(n, cache);

    delete[] cache;
    return 0;
}


int finbonacci(int n, int *cache)
{
    long long res;

    if (n == 1)
        cache[0] = 1;
    else{
        if (cache[n-1] != 0)
            res = cache[n-1];
        else
        {
            cache[n-1] = fibonacci(n-1, cache) + fibonacci(n-2, cache);

        }


}
