//
// Prendere in input due interi da tastiera,
// memorizzandoli in due variabili di tipo intero,
// corrispondendi alla base ed all'altezza di
// un rettangolo, calcolare perimetro ed
// area del rettangolo e stamparli a video.
//

#include <iostream> 
using namespace std;

int main()
{
  int altezza, base, perimetro, area;

  cout << "Inserisci la base: ";
  cin >> base;
  cout << "Inserisci l'altezza: ";
  cin >> altezza;

  area=base*altezza;
  perimetro=((2*base)+(2*altezza));
    
  cout << "L'area è: " << area << endl;
  cout << "Il perimetro è " << perimetro << endl;
  return (0);
}

