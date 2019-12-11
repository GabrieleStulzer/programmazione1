#include <iostream>
using namespace std;

const int SIZE = 3;

double media(const int[SIZE][SIZE]);


int main(){
    int a[SIZE][SIZE] = {{0,1,3}, {4,5,6}, {8,10,12}};
    cout << "Media: " << media(a) << endl;
    return 0;
}

double media(const int a[SIZE][SIZE])
{
    int totale = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            totale += a[i][j];
        }
    }

    return ((double) totale / (double)(SIZE*SIZE));
}
