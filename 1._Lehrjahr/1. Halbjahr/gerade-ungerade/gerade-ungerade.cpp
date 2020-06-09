/*Michael Grote, EFI19B*/
//keine Leerzeichen in Dateinamen
#include <iostream>
using namespace std;
int main()
{
	int eingabe=0;

	cin>>eingabe;

	if (eingabe%2==1)
	{
		cout<<"Ungerade";
	}
	else
	{
		cout<<"Gerade";
	}

	getchar();
	return 0;
}
