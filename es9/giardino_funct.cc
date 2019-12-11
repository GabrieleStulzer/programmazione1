#include "giardino_funct.h"

Albero ** preparaGiardino(int dimX, int dimY)
{
    Albero ** alberi = new Albero *[dimY];

    int n = 0;

    for (int i = 0; i < dimY; i++)
    {
        alberi[i] = new Albero[dimX];
        for (int j = 0; j < dimX; j++)
        {
            alberi[i][j].specie = VUOTO;
            alberi[i][j].n = n;
            n++;
        }
    }

    return alberi;
}


void riempiGiardino(Albero** g, int dimX, int dimY, int quanti[])
{
    srand(time(NULL));


    for(int i = 0; i < numero; i++)
    {
        for(int j = 0; j < quanti[i]; j++)
        {
            bool empty = true;
            do {
                int posX = rand() % dimX;
                int posY = rand() % dimY;

                if (g[posY][posX].specie == VUOTO)
                {
                    g[posY][posX].specie = (Specie) i;
                    g[posY][posX].n = j;
                    empty = false;
                }
                else { 
                    empty = false;
                }
            } while (empty);

            
        }
    }

}

void stampaGiardino(Albero** g, int dimX, int dimY)
{
    for(int i = 0; i < dimY; i++)
    {
        for(int j = 0; j < dimX; j++)
        {
            char ab[10];

            cout << "[" << specie[g[i][j].specie] << "]";
        }
        cout << endl;
    }
}
