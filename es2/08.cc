#include <iostream>

using namespace std;

int main()
{
	int ore, minuti, secondi;
	cout << "Inserisci i secondi ";
	cin >> secondi;
	
	ore = (secondi / 3600);
	minuti = (secondi % 3600) / 60;
	int sec = (secondi % 3600) % 60;

	cout << "H: " << ore << " M: " << minuti << " S: " << sec << endl;

	return 0;

}
