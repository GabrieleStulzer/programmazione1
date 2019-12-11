#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Dammi la base di un rettangolo: ";
	cin >> x;
	cout << "Dammi l'altezza di un rettangolo: ";
	cin >> y;

	int area = x * y;
	int per = (x + y) * 2;

	cout << "Area: " << area << endl << "Perimetro: " << per << endl;

return 0;
}
