#include <iostream>

using namespace std;


const int LUNGHEZZA = 255;

int main(int argc, char *argv[])
{
    char sorgente[LUNGHEZZA], *destinazione;
    cout << "Introdurre stringa da codificare: ";
    cin.getline(sorgente, LUNGHEZZA);

    destinazione = new char [strlen(sorgente) + 1];

    for ( int i = 0; i < strlen(sorgente) ; i++)
        {
            destinazione[i] = (char) (sorgente[i] + 2);
            cout << sorgente[i] << " " << destinazione[i] << endl;
        }

    destinazione[strlen(sorgente)] = '\0';

    cout.flush();
    cout << destinazione;

    delete[] destinazione;
    return 0;
}
