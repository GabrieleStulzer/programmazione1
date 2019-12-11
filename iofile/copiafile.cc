using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>

int main (int argc, char * argv[]) 
{
  fstream myin;
  char c;
  
  if (argc<2) {
    cerr << "Usage: ./a.out <sourcefile> <targetfile>\n";
    exit(EXIT_FAILURE);
  }

  for(int i = 1; i < argc; i++)
  {
    myin.open(argv[i],ios::in);

    if (myin.fail()) {
        cerr << "Il file " << argv[i] << " non esiste\n";
        exit(0);
    }
    
    while (myin.get(c)) {
        cout.put(c);
    }
    cout.put(' ');

    myin.close();
  }

  
  return 0;
}
