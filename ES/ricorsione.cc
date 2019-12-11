// Stampare a video i primi n numeri interi preso in
// input da tastiera il valore di n.
// Usare la funzione dichiarata come segue
// void stampa(int n);
//
// NON USARE CICLI MA FUNZIONI RICORSIVE
//

using namespace std;
#include <iostream>

void stampa(int n);
void stampa2(int m,int n);

int main() 
{
  int n;
  
  cout << "Fino a che numero vuoi stampare? ";
  cin >> n;

  stampa(n);
 
return 0;
}

void stampa(int n)
{
  stampa2(0,n);
}

void stampa2(int m,int n)
{
  if (m>n)
    {
      cout << endl;
    }
  else
    {
      cout << m << " ";
      stampa2(m+1,n);
    }
}
  



