//
// Trovare il massimo tra 10 numeri
// reali inseriti da tastiera stampandolo 
// a video NON USARE array, solo variabili
// semplici
//

#include <iostream> 
using namespace std;

int main()
{
  float dato,candidato_massimo;

  cout <<"Inserisci un numero: ";
  cin >> candidato_massimo;
  
  for(int cont=0;cont<9;cont++)
    {
      cout <<"Inserisci un numero: ";
      cin >> dato;

      if (dato>candidato_massimo)
	{
	  candidato_massimo=dato;
	}
    }
  cout << "Il massimo è: " << candidato_massimo <<endl;

  return (0);
}

