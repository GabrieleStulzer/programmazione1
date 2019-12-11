#include "group.h"

static void switchPerson(group &g, int i);

group *createGroup(char name[])
{
    group *g = new group;

    int i = 0;

    while(name[i] != '\0')
    {
        g->name[i] = name[i];
        i++;
    }
    g->name[i] = '\0';
    
    g->nper = 0;
    return g;
}


void addPerson(group &g, const person &p)
{
    int i;
    for (i = 0; i < g.nper && strcmp(tolower(g.people[i].cognome), tolower(p.cognome)) < 0; i++);
    if (g.nper != 0)
        switchPerson(g, i);
    g.people[i] = p;
    (g.nper)++;
}

static void switchPerson(group &g, int i)
{
    for (int k = g.nper; k >= i; k--)
        g.people[k] = g.people[k -1];
}

void printPeopleInGroup(const group &g)
{
    for (int i=0; i < g.nper; i++)
    {
        person p = g.people[i];
        cout << "Persona [" << i << "] - Nome: " << p.nome << "\t Cognome: " << p.cognome << endl;
    }


}
