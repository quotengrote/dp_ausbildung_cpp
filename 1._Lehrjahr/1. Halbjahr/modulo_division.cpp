/*Michael Grote, EFI19B*/
#include <iostream>
using namespace std;
int main()
{
  int x=0,y=0,z=0;
  cout<<"y=x%z(modulo)";
  cout<<endl; //zeilenumbruch
  cout<<"Wert fuer x: ";
  cin>>x;
  cout<<"Wert fuer z: ";
  cin>>z;
  //y=x/2;  division

  y=x%z; //Modulo-division
  cout<<"Ergebnis Modulo-Division: ";
  cout<<y;

	getchar();
	return 0;
}
