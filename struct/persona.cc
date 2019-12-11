#include "persona.h"

person *createPerson()
{
    person *p = new person;
    cout << "Nome: ";
    cin >> p->nome;
    cout << "Cognome: ";
    cin >> p->cognome;
    cout << "Eta: ";
    cin >> p->eta;

    return p;
}


void printPerson(const person &p)
{
    cout << "Nome: " << p.nome << endl;
    cout << "Cognome: " << p.cognome << endl;
    cout << "Eta: " << p.eta << endl;
}
