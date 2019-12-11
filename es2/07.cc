#include <iostream>

using namespace std;

int main()
{
	int ore, minuti, secondi;
	cout << "Inserisci ore | minuti | secondi: ";
	cin >> ore >> minuti >> secondi;

	int sec = (ore * 3600) + (minuti * 60) + secondi;
	cout << "Secondi: " << sec;

	return 0;

}
