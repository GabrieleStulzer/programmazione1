#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int max(int arr);
void memorizza(int [], int);
void stampa(int [], int);

int main()
{
    srand(time(NULL));
    int dim;
    cout << "Numero di elementi da inserire nell'array: ";
    cin >> dim;


    int arr[100];

    memorizza(arr, dim);
    stampa(arr, dim);

    return 0;
}

void memorizza(int arr[], int dim)
{
    for (int i = 0; i < dim; i++)
        arr[i] = rand() % 100;
}


int max(int arr[], int dim){
    int massimo = arr[0];
    for(int i = 1; i < dim; i++){
        if (arr[i] > massimo)
            massimo = arr[i];
    }

    return massimo;
}

void stampa(int arr[], int dim)
{
    for (int i = 0; i < dim; i++)
        cout << "A[" << i << "]: " << arr[i] << endl;
    cout << "Il massimo è: " << max(arr, dim) << endl;
}
