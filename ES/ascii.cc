//
// Stampare a video la tabella ASCII
// dalla A alla z con codifica ASCII
//

#include <iostream> 
using namespace std;

int main()
{ 
  for(char i='A';i<='z';i++)
    {
      cout << i << " " << (int) i <<endl;
    }

  return (0);
}

