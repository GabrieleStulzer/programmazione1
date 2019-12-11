//
// Stampare a video un numero di *
// definito dall'utente, in una modalità
// definita dall'utente (orizzontale, verticale,
// obliquo SX, obliquo DX) usando una funzione
// per ogni modalità di stampa
// e uno switch all'interno del main
// per invocare le varie modalità di stampa
//

#include <iostream> 
using namespace std;

void orizzontale(int);
void verticale(int);
void obliquo_dx(int);
void obliquo_sx(int);

int main()
{
  int numero,tipo;

  cout << "Quanti * vuoi stampare? ";
  cin >> numero;
  
  cout << "Come vuoi stampare questi *"<<endl;
  cout << "1. per orizzontale"<<endl;
  cout << "2. per verticale"<<endl;
  cout << "3. per obliquo sx"<<endl;
  cout << "4. per obliquo dx"<<endl;
  cin >> tipo;

  switch(tipo)
    {
    case 1:orizzontale(numero);break;
      //case 2:verticale(numero);break; 
      //case 3:obliquo_dx(numero);break;
      //case 4:obliquo_sx(numero);break;
    default:cout<<"Tipo inserito errato"<<endl;break;  
    }
  return (0);
}

void orizzontale(int n)
{
  for(int i=0;i<n;i++)
    {
      cout << "*";
    }
  cout<<endl;
}
