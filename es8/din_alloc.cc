#include <iostream>
using namespace std;

int main(){
    
    char temp[255];
    char *word;

    while (!cin.fail())
        cin >> temp;

    cout << "Temp Array: " << temp << endl;

    int counter = 0;
    char c = temp[counter];

    while (c != '\0')
    {
        counter++;
        temp[counter]; 
    }

    cout << "Lunghezza array: " << counter << endl;

    return 0;

}   
