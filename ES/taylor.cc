//
// Calcolare l'approssimazione del logaritmo naturale
// di (1+x) attraverso la formula di Taylor
// per N passi, dove N è un intero acquisito da
// tastiera
//


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double x,elemento=0;
  int passi;

  cout << "Inserisci il valore di x: ";
  cin >> x;
  cout << "Inserisci il numero di passi: ";
  cin >> passi;
  
  if ((x>-1)&&(x<1))
    {
      for (int i=1;i<=passi;i++)
	{
	  elemento=elemento+pow(-1,i+1)*pow(x,i)/i;
	}
      cout << "ln(1+ " << x <<")= "<<elemento<<endl;
    }
  else
    {
      cout << "X deve essere compreso tra -1 e 1" << endl;
    }
   
  return (0);
}

