#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;

const int LUNGHEZZA_RIGA = 256;
const int LUNGHEZZA_PAROLA = 10;
const char DELIMITATORE = ',';
const int DIMENSIONE = 4;

void stampaMatrice(int matrice[DIMENSIONE][DIMENSIONE]);


int main(int argc, char *argv[])
{
    fstream myfile;
    int matrice[DIMENSIONE][DIMENSIONE];
    char string[LUNGHEZZA_RIGA];
    char tmp[DIMENSIONE];



    if(argc != 2)
    {
        cerr << "Errore lettura file" << endl;
        exit(EXIT_FAILURE);
    }

    myfile.open(argv[1], ios::in);
    if (myfile.fail())
    {
        cerr << "Errore lettura file" << endl;
        exit(EXIT_FAILURE);
    }


    int rowRead = 0;


    while (myfile.getline(string, LUNGHEZZA_RIGA) && rowRead < DIMENSIONE)
    {
        int num = 0, i = 0, k = 0;
        while(string[i] != '\0' && num < DIMENSIONE){
            if (string[i] == DELIMITATORE)
            {
                tmp[k] = '\0';
                matrice[rowRead][num] = atoi(tmp);
                num++;
                i++;
                k = 0;
            } else {
                tmp[k] = string[i];
                i++;
                k++;
            }
        }
        rowRead++;

    }

    stampaMatrice(matrice);

}


void stampaMatrice(int matrice[DIMENSIONE][DIMENSIONE]){
    for (int i = 0; i < DIMENSIONE; i++){
        for(int j = 0; j < DIMENSIONE; j++){
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }


}
