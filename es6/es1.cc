#include <iostream>
using namespace std;

void dividi(int, int, int &, int &);

int main(){

    int dividendo, divisore, quoziente, resto;
    cin >> dividendo >> divisore;

    dividi(dividendo, divisore, quoziente, resto);

    cout << "Quoziente: " << quoziente << " Resto: " << resto << endl;

    return 0;
}

void dividi(int dividendo, int divisore, int & quoziente, int & resto)
{
    quoziente = dividendo / divisore;
    resto = dividendo % divisore;



}
