#include <iostream>
#include <fstream>
using namespace std;



int main(int argc, char * argv[])
{
    fstream myout;

    myout.open(argv[1], ios::out);
    if (myout.fail())
    {
        cerr << "Errore nella lettura del file" << endl;
        exit(0);
    }
    myout << argv[2];


    return 0;
}   
