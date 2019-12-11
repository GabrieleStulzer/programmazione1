#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	cout << "Inserisci tre interi separati da uno spazio: ";
	cin >> x >> y >> z;

	cout << "Risposta: " << ((x > y) && (y > z)) << endl;
	return 0;
}
