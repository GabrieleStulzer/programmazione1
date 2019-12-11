//
// Scrivere una funzione chiamata estrai con
// questa dichiarazione:
// 
// void estrai(int,int&,int&,int&);
//
// questa funzione estrae dal primo parametro i valori
// del giorno, mese, anno. Esempio: 13112019 diventa 13 11 2019
//
// Questa funzione sarà chiamata dal main, nel main
// sarà acquisito da tastiera il codice
// e saranno stampanti a video giorno, mese e anno
//

#include <iostream> 
using namespace std;

void estrai(int,int&,int&,int&);

int main()
{
  int data,giorno,mese,anno;
  
  cout << "Inserisci la data: ";
  cin >> data;

  estrai(data,giorno,mese,anno);
  
  cout << "Giorno: " << giorno <<endl;
  cout << "Mese: " << mese << endl;
  cout << "Anno: " << anno << endl;
  
  return (0);
}

void estrai(int data,int & giorno,int & mese,int & anno)
{ 
  anno=data%10000;
  mese=(data/10000)%100;
  giorno=data/1000000;
}
