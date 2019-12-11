#ifndef GIARDINO_FUNCT_H
#define GIARDINO_FUNCT_H

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int numero = 5;
const char specie[6] = {'P', 'F', 'A', 'L', 'O', ' '};
enum Specie {PINO, FAGGIO, ABETE, LARICE, ONTANO, VUOTO};

struct Albero {
    Specie specie;
    int n;
};

Albero ** preparaGiardino(int dimX, int dimY);
void riempiGiardino(Albero**, int dimX, int dimY, int []);
void stampaGiardino(Albero** g, int dimX, int dimY);

#endif
