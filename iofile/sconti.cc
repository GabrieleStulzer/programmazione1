#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

float sconto(float);

int main(int argc, char *argv[])
{
    fstream myint, myout;
    float num;

    myint.open(argv[1], ios::in);
    if (myint.fail())
    {
        cerr << "Errore apertura del file: " << argv[1] << endl;
        exit(EXIT_FAILURE);
    }

    myout.open(argv[2], ios::out);
    while(myint >> num)
        myout << num << " => " << sconto(num) << endl;

    myint.close();
    myint.close();

    return 0;
}


float sconto(float num)
{
    float res;
    if (num < 50)
        res =  num * 1.08;
    else if (num < 100)
        res =  num * 1.05;
    else
        res =  num * 1.02;
    
    return res;
}
