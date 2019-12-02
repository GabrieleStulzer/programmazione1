#include <iostream>
using namespace std;

const int LEN = 100;

bool inserisci(char [], int&, char);
void sposta(char [], int, int);
void stampa(char [], int);

int main()
{
    char array[LEN]; int dim = 0; char menu;

    do
    {
        stampa(array, dim);
        cout << "Menu (i, e): ";
        cin >> menu;

        if (menu == 'i')
        {   
            char a;
            cout << "Carattere da inserire: ";
            cin >> a;

            if(!inserisci(array, dim, a))
                cout << "Errore!" << endl;
        }
    } while (menu != 'e');

}

bool inserisci(char a[], int& dim, char c)
{
    if (dim == LEN)
        return false;
    else 
    {

        if (dim == 0)
        {
            dim++;
            a[0] = c;
            return true;
        }

        int i = 0;

        for(i = 0; (i < dim) && !(a[i] > c); i++);
        cout << "i: " << i << endl;

        dim++;

        cout << "Dim: " << dim << endl;
        cout << "i: " << i << endl;
        if ( i == dim - 1)
        {
            a[dim-1] = c;
            stampa(a, dim);
            return true;
        }
        else
        {
            sposta(a, dim, i);
            a[i] = c;
            return true;
        }   

    }

}


void sposta(char a[], int dim, int index)
{
    for(int i = dim; dim <= index; dim--)
        a[dim] = a[dim - 1];
}

void stampa(char a[], int dim)
{
    cout << "Stampa array..." << endl;
    for(int i = 0; i < dim; i++)
        cout << "a[" << i << "] = " << a[i] << endl;
}
