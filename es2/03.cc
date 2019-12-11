#include <iostream>
using namespace std;

int main()
{
	bool a=true, b=false;
	cout << "A = " << a << ", B = " << b << ", A || B" << (a || b) << endl;
	a=true, b=true;
	cout << "A = " << a << ", B = " << b << ", A || B" << (a || b) << endl;
	a=false, b=false;
	cout << "A = " << a << ", B = " << b << ", A || B" << (a || b) << endl;
	a=false, b=true;
	cout << "A = " << a << ", B = " << b << ", A || B" << (a || b) << endl;

	return 0;
}
