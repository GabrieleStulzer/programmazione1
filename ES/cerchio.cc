//
// Prendere in input un intero da tastiera,
// memorizzandolo in una variabile di tipo intero,
// corrispondende al raggio di un cerchio,
// calcolare l'area e la circonferenza del
// cerchio definendo una costante PI il cui
// valore e' 3.14.
//

#include <iostream> 
using namespace std;

int main()
{
  int raggio;
  float area,circonferenza;
  const float PI=3.14;

  cout << "Inserisci il raggio: ";
  cin >> raggio;

  area=PI*raggio*raggio;
  circonferenza=2*PI*raggio;
    
  cout << "L'area è: " << area << endl;
  cout << "La circonferenza è: " << circonferenza << endl;				  
  return (0);
}

