/*Michael Grote, EFI19B*/
//keine Leerzeichen in Dateinamen
//von drei ungleichen natürlichen zahlen soll die größte ausgegeben werden
#include <iostream>
using namespace std;
int main()
{
	int z1, z2, z3;
	cout<<"z1: ";
	cin>>z1;
	cout<<"z2: ";
	cin>>z2;
	cout<<"z3: ";
	cin>>z3;

	if (z1>z2)
	{
		if (z1>z3)
		{
			cout<< z1;
		}
		else
		{
			cout<<z3;
		}
	}
	else
	{
		if (z2>z3)
		{
			cout<< z2;
		}
		else
		{
			cout<< z3;
		}
	}



	getchar();
	return 0;
}
