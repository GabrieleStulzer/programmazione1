//
// Scrivere una funzione chiamata dividi con
// questa dichiarazione:
// 
// void dividi(int dividendo,int divisore,int & quoziente,int & resto);
//
// questa funzione sarà chiamata dal main, nel main
// saranno acquisiti da tastiera dividendo e
// divisore e saranno stampanti a video
// quoziente e resto
//

#include <iostream> 
using namespace std;

void dividi(int dividendo,int divisore,int & quoziente,int & resto);

int main()
{
  int dividendo,divisore,quoziente,resto;
  
  cout << "Inserisci il dividendo: ";
  cin >> dividendo;
  cout << "Inserisci il divisore: ";
  cin >> divisore;

  dividi(dividendo,divisore,quoziente,resto);
  cout << "Il quoziente è " << quoziente <<endl;
  cout << "Il resto è " << resto << endl;
  
  return (0);
}

void dividi(int dividendo,int divisore,int & quoziente,int & resto)
{
  quoziente=dividendo/divisore;
  resto=dividendo%divisore;
}
