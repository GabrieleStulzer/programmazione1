#include <iostream>
using namespace std;

void add_iva(float &, float iva);

int main(){
    float prezzo, iva;

    cin >> prezzo >> iva;

    add_iva(prezzo, iva);
    
    cout << "Nuovo prezzo: " << prezzo << endl;
    return 0;
}

void add_iva(float & prezzo, float iva)
{
    prezzo = prezzo * float((100 + iva) / 100);
}


