//
// Stampare a video un numero di *
// definito dall'utente in OBLIQUO SINISTRO
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
      //Stampare numero-i spazi bianchi
      for (int j=numero-1;j>i;j--)
	{
	  cout << " ";
	}
      
      cout << "*" << endl;
    }

  cout << endl;
  return (0);
}

