//
// Primo programma.
// Stampa la stringa Hello sul terminale.
//

#include <iostream> 
using namespace std;

int massimo(int,int);

int main()
{
  int a,b;
  
  cout << "Inserisci il primo intero: ";
  cin >> a;
  cout << "Inserisci il secondo intero: ";
  cin >> b;

  cout << "Il massimo è: " << massimo(a,b) << endl;
  
  return (0);
}

int massimo(int a,int b)
{
  if (a>b)
    {
      return(a);
    }
  else
    {
      return(b);
    }
}
