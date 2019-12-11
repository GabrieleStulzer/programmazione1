//
// Stampare a video un numero di *
// definito dall'utente in orizzontale
//

#include <iostream> 
using namespace std;

int main()
{
  int numero;

  cout << "Quanti * vuoi stampare? ";
  cin >> numero;
  
  for(int i=0;i<numero;i++)
    {
      cout << "*";
    }

  cout << endl;
  return (0);
}

