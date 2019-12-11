#include "persona.h"
#include "group.h"

int main()
{
    char menu;
    
    group *g = createGroup("test");
    

    do {
        cout << "Operazione (p, g, l, L, e): ";
        cin >> menu;

        switch (menu) {
            case 'p': 
                
                addPerson(*g, *createPerson());
                break;
            case 'l':
                printPeopleInGroup(*g);
                break;
        }
    

    } while (menu != 'e');

    
    return 0;
}

