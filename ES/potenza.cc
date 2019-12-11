//
// Prendere in input da tastiera due numeri
// interi corrispondenti alla base e 
// all'esponente di una potenza, calcolare
// il valore della potenza e stamparla a video
// SENZA USARE FUNZIONI DI LIBRERIA
//

#include <iostream> 
using namespace std;

int main()
{
  int base,esponente,risultato=1;

  cout << "Inserisci la base: ";
  cin >> base;
  cout << "Inserisci l'esponente: ";
  cin >> esponente;
  
  for(int i=0;i<esponente;i++)
    {
      risultato=risultato*base;
    }

  cout << "La potenza è: " << risultato << endl;
  return (0);
}

