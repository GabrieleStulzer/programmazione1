//
// Prendere in input da tastiera due numeri
// interi corrispondenti alla base e 
// all'esponente di una potenza, calcolare
// il valore della potenza e stamparla a video
// SENZA USARE FUNZIONI DI LIBRERIA
// Dichiarando la seguente funzione
// int potenza(int base,int esponente);

#include <iostream> 
using namespace std;

int potenza(int base,int esponente);

int main()
{
  int base,esponente,risultato=1;

  cout << "Inserisci la base: ";
  cin >> base;
  cout << "Inserisci l'esponente: ";
  cin >> esponente;
  
  risultato=potenza(base,esponente);

  cout << "La potenza è: " << risultato << endl;
  return (0);
}

int potenza(int base,int esponente)
{
  int risultato=1;
  
  for(int i=0;i<esponente;i++)
    {
      risultato=risultato*base;
    }

  return(risultato);
}
