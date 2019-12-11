#include <iostream>
#include <cstdlib>
#include "giardino_funct.h"
using namespace std;




int main(int argc, char *argv[]) {

    int quanti[numero] = {3, 1, 2, 1, 3};

    if (argc != 3)
    {
        cerr << "Errore: parametri non corretti" << endl;
        exit(EXIT_FAILURE);
    }

    int dimX = atoi(argv[1]);
    int dimY = atoi(argv[2]);

    if (dimX < 9 || dimY < 9)
    {
        cerr << "Errore: i parametri devono essere maggiori o uguali a 9" << endl;
        exit(EXIT_FAILURE);
    }

    Albero ** giardino = preparaGiardino(dimX, dimY);
    riempiGiardino(giardino, dimX, dimY, quanti);
    stampaGiardino(giardino, dimX, dimY);

    return 0;
}

