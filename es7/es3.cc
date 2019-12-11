#include <iostream>
using namespace std;

void calcola_somma(int a, int b, int *res){
    if (a <= b)
    {
        *res += a;
        calcola_somma(a + 1, b, res);
    }
}

int main()
{
    int res = 0;
    
    calcola_somma(2, 5, &res); 

    cout << res <<  endl;

    return 0;
}
