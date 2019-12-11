//
// Scrivere una funzione chiamata aggiungi_iva con
// questa dichiarazione:
// 
// void aggiungi_iva(float & prezzo,float iva);
//
// che aggiunge al prametro prezzo il valore
// dell'iva in base al valore del parametro iva
// Esempio: con 100 e 10 il nuovo valore di prezzo sarà 110
//
// Nel main dovranno essere acquisiti da tastiera i valori
// di prezzo ed iva, dovrà essere chiamata la funzione
// aggiungi_iva e dovrà essere stampato a video il nuovo prezzo

#include <iostream> 
using namespace std;

void aggiungi_iva(float & prezzo,float iva);

int main()
{
  float prezzo,aliquota_iva;
  
  cout << "Inserisci il prezzo: ";
  cin >> prezzo;
  cout << "Inserisci l'aliquota iva: ";
  cin >> aliquota_iva;
  
  aggiungi_iva(prezzo,aliquota_iva);
  
  cout << "Il prezzo è " << prezzo <<endl;
  
  return (0);
}

void aggiungi_iva(float & prezzo,float iva)
{ 
  prezzo=prezzo+(prezzo*(iva/100));
}
