#include <iostream>
using namespace std;

void invertiArray(int [], int, int);
void scambia(int&, int&);

int main(){

    int a[] = {1, 2, 3, 4};
    invertiArray(a, 4, 0);
    
    cout << "Array invertito" << endl;

    for (int x = 0; x < 4; x++)
        cout << "P[" << x << "] = " << a[x] << endl;

    return 0;
}


void invertiArray(int a[], int dim, int indice)
{
    cout << "Inverto array / Indice: " << indice << endl;
   if (dim >= 2)
   {
        scambia(a[indice], a[dim - indice - 1]);
        invertiArray(a, dim -2, indice + 1);
   }

}

void scambia(int& a, int& b)
{
    int c = a;
    a = b;
    b = c;
}
