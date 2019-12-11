//
// Prendere in input tre interi da tastiera,
// memorizzandoli in tre variabili di tipo intero,
// corrispondendi alla base minore, alla
// base maggiore e all'altezza di
// un trapezio, calcolare 
// l'area del trapezio e stamparla a video.
//

#include <iostream> 
using namespace std;

int main()
{
  int altezza, baseMinore, baseMaggiore;
  float area;
  
  cout << "Inserisci la base minore: ";
  cin >> baseMinore;
  cout << "Inserisci la base maggiore: ";
  cin >> baseMaggiore;
  cout << "Inserisci l'altezza: ";
  cin >> altezza;

  area=(baseMinore+baseMaggiore)*altezza/2.0;    
    
  cout << "L'area è: " << area << endl;
  return (0);
}

