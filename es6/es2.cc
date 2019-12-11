#include <iostream>
using namespace std;

void estrai(int, int&, int&, int&);

int main(){
    int data, giorno, mese, anno;

    cin >> data;

    estrai(data, giorno, mese, anno);
    cout << "Giorno: " << giorno << " Mese: " << mese << " Anno: " << anno << endl;


    return 0;
}

void estrai(int data, int & giorno, int & mese, int & anno)
{
    giorno = data / 1000000;
    mese = (data - giorno * 1000000) / 10000;
    if (mese >= 12 || mese <= 0){
        cout << "Mese SBAGLIATO!" << endl;
        mese = 00;
    }
    switch(mese){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
            if(giorno > 31 || giorno <= 0) cout << "Giorno Sbagliato!" << endl; break;
        case 2:
            if(giorno > 28 || giorno <= 0) cout << "Giorno Sbagliato!" << endl; break;
        default:
            if (giorno > 30 || giorno <= 0) cout << "Giorno sbagliato!" << endl;
    }
    anno = data % 10000;
}
