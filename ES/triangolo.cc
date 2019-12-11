using namespace std;
#include <iostream>

int massimo (int a, int b, int c);
int minimo (int a, int b, int c);
int mediano (int a, int b, int c);
void verifica (int a, int b, int c, bool * stato);

int main() 
{
  int a,b,c;
  bool stato;

  cout << "Misura primo lato: ";
  cin >> a;
  cout << "Misura secondo lato: ";
  cin >> b;
  cout << "Misura terzo lato: ";
  cin >> c;

  verifica(a,b,c,& stato);

  if (stato==true)
     cout << "Questi possono essere i lati di un triangolo" << endl;
  else
     cout << "Questi NON possono essere i lati di un triangolo" << endl;

return 0;
}

int massimo (int a, int b, int c)
{
 int app=a;

 if (b>app) app=b;

 if (c>app) app=c;

 return(app);
}

int minimo (int a, int b, int c)
{
 int app=a;

 if (b<app) app=b;

 if (c<app) app=c;

 return(app);
}

int mediano (int a, int b, int c)
{
 int app;

 app=a+b+c-massimo(a,b,c)-minimo(a,b,c);
 
return(app);
}

void verifica (int a, int b, int c, bool * stato){

 if ( massimo(a,b,c)<( minimo(a,b,c)+ mediano(a,b,c)) )
   *stato=true;
 else
   *stato=false;
}

