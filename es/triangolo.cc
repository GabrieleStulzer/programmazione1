#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, y;
	cout << "Dammi la base di un triangolo: ";
	cin >> x;
	cout << "Dammi l'altezza di un triangolo: ";
	cin >> y;

	float area = (x * y) / 2.0;
	double per = x + (2.0*sqrt(pow(y, 2.0) +(pow((x/2.0),2.0))));

	cout << "Area: " << area << endl << "Perimetro: " << per << endl;

return 0;
}
