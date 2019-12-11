// Acquisire da tastiera, memorizzandoli in un array,
// un certo numero di interi (al massimo 100) e calcolare
// il massimo tra questi interi, stampandolo a video.
//
// Definire le funzioni di seguito dichiarate

using namespace std;
#include <iostream>

void memorizza(int [],int);
int massimo(int [],int);
void stampa(int [],int);

int main() 
{
  int vettore[100];
  int dimensione;
  
  cout << "Quanti interi vuoi inserire? ";
  cin >> dimensione;
  
  memorizza(vettore,dimensione);
  cout << "Il massimo tra: ";
  stampa(vettore,dimensione);
  cout << "è " << massimo(vettore,dimensione) << endl;

return 0;
}

void memorizza(int vettore[],int dimensione)
{
  for(int i=0;i<dimensione;i++)
    {
      cout << "Inserisci un intero: ";
      cin >> vettore[i];
    }
}
  
int massimo(int vettore[],int dimensione)
{
  int app=vettore[0];
  
  for(int i=1;i<dimensione;i++)
    {
      if (vettore[i]>app)
	{
	  app=vettore[i];
	}
    }
  
  return(app);
}

void stampa(int vettore [],int dimensione)
{
  for(int i=0;i<dimensione;i++)
    {
      cout << vettore[i] << " ";
    }
  cout << endl;
}



