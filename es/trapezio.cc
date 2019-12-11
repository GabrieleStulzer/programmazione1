#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, y, z;
	cout << "Dammi la base maggiore di un triangolo: ";
	cin >> x;
	cout << "Dammi la base minore di un triangolo: ";
	cin >> z;
	cout << "Dammi l'altezza di un triangolo: ";
	cin >> y;

	float area = (x + z) * y / 2.0;
	double per = x + (2.0*sqrt(pow(y, 2.0) +(pow(((x-z)/2.0),2.0))));

	cout << "Area: " << area << endl << "Perimetro: " << per << endl;

return 0;
}
