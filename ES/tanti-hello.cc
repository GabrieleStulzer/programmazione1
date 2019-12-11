//
// Scrivere a video Ciao fino a quando
// l'utente digita 'n'
//

#include <iostream> 
using namespace std;

int main()
{
  char risposta='z';

  while (risposta!='n')
    {
       cout << "Ciao" << endl;

       cout << "Vuoi continuare? [s/n] ";
       cin >> risposta;
    }

  return (0);
}

