#include <iostream>
using namespace std;

int main()
{
	float p;
	const float iva = 0.22;
	cout << "Inserisci il prezzo: ";
	cin >> p;
	float end = p + (p * iva);
	cout << "Pagherai: " << end << endl;
	return 0;
}
