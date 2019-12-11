//
// Primo programma.
// Stampa la stringa Hello sul terminale.
//

#include <iostream> 
using namespace std;

int main()
{
  int numero;
  int *p;

  p=&numero;

  cin >> numero;
  
  cout << "numero" << numero << endl;

   cout << "indirizzo" << p << endl;

   *p=*p+1;
   cout << "numero" << numero << endl;

   cout << "indirizzo" << p << endl;
   return(0);
}

