//
// Trovare il massimo tra un numero non
// predefinito di reali inseriti da tastiera 
// stampandolo a video NON USARE array,
// solo variabili semplici
//

#include <iostream> 
using namespace std;

int main()
{
  float dato,candidato_massimo;
  char risposta='z';
  
  cout <<"Inserisci un numero: ";
  cin >> candidato_massimo;
  
  while (risposta!='n')
    {
      cout <<"Inserisci un numero: ";
      cin >> dato;

      if (dato>candidato_massimo)
	{
	  candidato_massimo=dato;
	}
      cout << "Vuoi inserire un altro numero? [s/n] ";
      cin >> risposta;
    }
  cout << "Il massimo è: " << candidato_massimo <<endl;

  return (0);
}

