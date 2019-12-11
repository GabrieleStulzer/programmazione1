#include <iostream>
using namespace std;

const int DIM = 80;


void stampaArray(char [], int&);
bool inserisci(char [], int&, int);
void spostaElementi(char a[], int dim, int pos);

int main(){
    char array[DIM]; int dim = 0; char comando;

    do
    {
        stampaArray(array, dim);
        cout << "Dim: " << dim << endl;
        cin >> comando;
        switch(comando){
            case 'i': case 'I':
                char elemento; cout << "Inserire elemento: ";
                cin >> elemento;
                if (!inserisci(array, dim, elemento))
                    cout << "Errore";
                break;
            case 'e': case 'E': break;
        }
    }while(!(comando == 'e'));

    return 0;
}

void stampaArray(char array[], int &dim)
{
    for( int i = 0; i < dim; i++)
        cout << "El[" << i << "] = " << array[i] << endl;
}

bool inserisci(char a[], int &dim, int val)
{
    if (dim == 0)
    {
        a[0] = val;
        dim += 1;
        cout << "Dim Insert: " << dim << endl;
    } 
    if (dim == DIM)
        return false;
    else {
        for (int i = 0; i < dim; i++)
        {
            if (val > a[i])
            {
                spostaElementi(a, dim, i);
                a[i] = val;
                dim += 1;
            }
        }
    return true;

}
}

void spostaElementi(char a[], int dim, int pos)
{
    for (int i = dim; i > pos; i--)
    {
        a[dim + 1] = a[dim];
    }

}
