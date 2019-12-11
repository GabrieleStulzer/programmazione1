//
// Prende in input due interi da tastiera,
// memorizzandoli in due variabili di tipo intero,
// inverte il contenuto delle due variaili
// e li stampa a video
//

#include <iostream> 
using namespace std;

int main()
{
  int intero;
  int intero2;
  int appoggio;

  cout << "Inserisci un intero: ";
  cin >> intero;
  cout << "Inserisci un intero: ";
  cin >> intero2;

  appoggio=intero;
  intero=intero2;
  intero2=appoggio;  
    
  cout << "Il numero inserito è: " << intero << endl;
  cout << "Il numero inserito è: " << intero2 << endl;
  return (0);
}

