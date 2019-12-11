//
// Stampare a video i primi n elmenti della
// serie di Fibonacci, con n preso in input
// da tastiera.
// La serie di Fibonacci è la seguente
// 1 1 2 3 5 8 13 21
// Dichiarando la seguente funzione:
// void fibonacci(int);
//

#include <iostream> 
using namespace std;

void fibonacci(int);

int main()
{
  int n;
  
  cout << "Quanti elementi della serie vuoi stampare? ";
  cin >> n;

  fibonacci(n);
  
  return (0);
}

void fibonacci(int n)
{
  int precedente,precedente2,elemento;
  
if (n==1)
    {
      cout << "1" <<endl;
    }
  if (n==2)
    {
      cout << "1 1" <<endl;
    }
  if (n>2)
    {
      cout << "1 1 ";
      precedente=1;
      precedente2=1;
      for(int i=2;i<n;i++)
	{
	  elemento=precedente+precedente2;
	  cout << elemento << " ";
	  precedente2=precedente;
	  precedente=elemento;
	}
      cout << endl;
    }

}
