#include <iostream>
using namespace std;

int main()
{
	float C, F;
	cout << "Inserisci la temperatura in Fahrenheit: ";
	cin >> F;

	C = (F - 32) / 1.8;
	cout << "Gradi Celsius: " << C << endl;
	return 0;
}
