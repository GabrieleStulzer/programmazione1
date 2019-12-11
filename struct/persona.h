#ifndef PERSONA_H
#define PERSONA_H


#include <iostream>
using namespace std;


struct person {
    char nome[20];
    char cognome[20];
    int eta;
};

person *createPerson();
void printPerson(const person &);





#endif
