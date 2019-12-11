//
// Preso in input da tastiera un numero intero
// maggiore o uguale a 2, verificare se questo numero
// è primo o meno.
// Un numero primo è un numero divisibile SOLO
// per 1 e per se stesso.
//


#include <iostream> 
using namespace std;

int main()
{
  int numero;
  bool primo=true;
  
  cout << "Inserisci un numero: ";
  cin >> numero;

  if (numero<2)
    {
      cout << "Il numero inserito deve essere maggiore o uguale a 2";
    }
  else
    {
      for (int i=2;i<=numero/2;i++)
	{
	  if(numero%i==0)
	    {
	      primo=false;
	    }
	}
    }
  if (primo==false)
    {
      cout << "Il numero non è primo" << endl;
    }
  else
    {
      cout << "Il numero è primo" << endl;
    }  
  return (0);
}

