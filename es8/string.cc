#include <iostream>
#include <cstring>
using namespace std;

const int LUNGHEZZA = 256;

void codifica(char t[], const char s[]);
void codificaRec(char t[], const char s[], int);
char cesar(char c);

int main(int argc, char* argv[])
{
    char sorgente[LUNGHEZZA], destinazione[LUNGHEZZA];
    cin.getline(sorgente, LUNGHEZZA);
    codificaRec(destinazione, sorgente, 0);
    cout << "String codificata: " << destinazione << endl;
    return 0;
}


void codifica(char t[], const char s[])
{   
    int i = 0;
    while(s[i] != '\0')
    {
        t[i] = cesar(s[i]);
        i++;
    }
    t[i] = '\0';
}


void codificaRec(char t[], const char s[], int i)
{
    if (i < strlen(s))
    {
        t[i] = cesar(s[i]);
        codificaRec(t, s, i + 1);
    }
    else {
        t[i] = '\0';
    }
}


char cesar(char c)
{
    if(isalpha(c)){

    if ((int) c + 3 > 'z')
        return 'a' + (((int) c + 2) - 'z');
    else
        return (char) ((int) c + 3);
    } else {
        return c;
    }
}
