//
// Primo programma.
// Stampa la stringa Hello sul terminale.
//

#include <iostream> 
using namespace std;

int massimo(int &,int);

int main()
{
  int a,b,app;
  
  cout << "Inserisci il primo intero: ";
  cin >> a;
  cout << "Inserisci il secondo intero: ";
  cin >> b;

  app=massimo(a,b);
  cout << "Il massimo tra " << a << " e " << b << " è: " << app << endl;
  
  return (0);
}

int massimo(int & a,int b)
{
  int app;
  
  if (a>b)
    {
      app=a;
    }
  else
    {
      app=b;
    }
  a++;
  b++;
  return(app);
}
