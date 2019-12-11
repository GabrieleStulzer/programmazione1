#include <iostream>
using namespace std;

int main()
{
	int x, y, s;
	cout << "Dammi un intero per 'x': ";
	cin >> x;
	cout << "Dammi un intero per 'y': ";
	cin >> y;

	s = y;
	y = x;
	x = s;

	cout << "x: " << x << endl << "y: " << y << endl;

return 0;
}
