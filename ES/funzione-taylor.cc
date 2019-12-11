//
// Calcolare l'approssimazione del logaritmo naturale
// di (1+x) attraverso la formula di Taylor
// per N passi, dove N è un intero acquisito da
// tastiera
// Usando una funzione con questa dichiarazione
// double taylor(int passi, double x);
//

#include <iostream>
#include <cmath>
using namespace std;

double taylor(int passi, double x);

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
      elemento=taylor(passi,x);
      cout << "L'elemento è: " << elemento <<endl;
    }
  else
    {
      cout << "X deve essere tra -1 e 1" << endl;
    }
  return (0);
}

double taylor(int passi, double x)
{
  double elemento=0;
  
      for (int i=1;i<=passi;i++)
	{
	  elemento=elemento+pow(-1,i+1)*pow(x,i)/i;
	}
      return(elemento);
}
