// Thomas Cassebaum 2011, all rights reserved
#include <iostream>
using namespace std;
void set (int &a)  // <-- schreibt man hier aber &a ist es eine Referenzvariable die zurückzeigt, daher wird dann 10 ausgegeben
{
	a = 10;
}
int main()   
{ 
	int x = 5;
	set(x);
	cout<<x; 

  getchar();
  return 0; 
}

/*
Das Programm setzt eine Variable auf 5 und ruft dann eine Funktion auf die sie auf 10 setzen soll.
Da a aber eine Funktionsinterne Variable ist wird trotzdem die 5 ausgegeben.

*/

//wenn man die Funktionen oben hinschreibt kann mann sich das deklarieren des funktionskopfes sparen