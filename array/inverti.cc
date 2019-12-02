#include <iostream>
using namespace std;

const int LEN = 100;

void leggi(int [], int&);
void stampa(int [], int);
void inverti(int [], int);
void scambia(int&, int&);

int main(){
    int array[100];
    int len;

    leggi(array, len);
        inverti(array, len);
    stampa(array, len);

    return 0;
}

void leggi(int a[], int& len){
    do{
       cin >> len;
       for(int i = 0; i < len; i++){
            cout << "A[" << i << "] = ";
            cin >> a[i];
        }

    } while (!(len < LEN));
}    

void stampa(int a[], int len)
{
    cout << "Printing array values..." << endl;

    for(int i = 0; i < len; i++){
        cout << "A[" << i << "] = " << a[i] << endl;
    }
}

void inverti(int a[], int len)
{
    if (len >= 2)
    {
        scambia(a[0], a[len - 1]);
        inverti(a + 1, len - 2);
    }

}



void scambia(int& a, int& b)
{
    int c = b;
    b = a;
    a = c;
}
