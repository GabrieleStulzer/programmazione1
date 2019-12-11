#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;

int main()
{
	int x;
	cout << "Dammi il raggio di un cerchio: ";
	cin >> x;

	double area = M_PI * pow(x, 2.0);
	double per = 2*M_PI*x; 

	cout << "Area: " << area << endl;
	cout << "Circonferenza: " << per << endl;

return 0;
}
