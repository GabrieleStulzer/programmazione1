//
// Acquisire da tastiera un intero,
// stampare a video l'indirizzo della variabile
// dove è memorizzato questo intero
// incrementare di una unità l'intero
// acquisito USANDO L'INDIRIZZO DELLA VARIABILE
// stampare il nuovo valore della variabile
// USANDO l'INDIRIZZO DELLA VARIABILE
//


#include <iostream> 
using namespace std;

int main()
{
  int numero;
  int *puntatore;

  cout << "Insersici un intero: ";
  cin >> numero;
  
  puntatore=&numero;
  cout<<puntatore<<endl;
  cout<<*puntatore<<endl;
  
  *puntatore=*puntatore+1;

  cout<<puntatore<<endl;
  cout<<*puntatore<<endl;
  
  return (0);
}

