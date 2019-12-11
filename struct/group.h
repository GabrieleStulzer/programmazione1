#ifndef GROUP_H
#define GROUP_H


#include <iostream>
#include <cctype>
#include "persona.h"
using namespace std;

struct group {
    char name[20];
    int nper;
    person people[];
};


group *createGroup(char []);
void addPerson(group &g, const person &p);
void printPeopleInGroup(const group &g);


#endif
