/*Michael Grote, EFI19B*/
//keine Leerzeichen in Dateinamen

// von zwei zahlen soll die größere ausgegeben werden
#include <iostream>
using namespace std;
int main()
{
	int z1, z2;
	cout<<"z1: ";
	cin>>z1;
	cout<<"z2: ";
	cin>>z2;

	if (z1>z2)
	{
		cout<<z1;
	}
	else
	{
		cout<<z2;
	}



	getchar();
	return 0;
}
