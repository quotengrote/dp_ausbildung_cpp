/*Michael Grote, EFI19B*/
//keine Leerzeichen in Dateinamen

// Seite 57 im Lehrbuch

//jahreszins = Z = (K(apital)*p(zinssatz))/100
#include <iostream>
using namespace std;
int main()
{
float einlage, zinssatz, zielsumme, jahr=0, zinsenprojahr;
zielsumme=1000000;
cout<<"Zinssatz"<<endl;
cin>>zinssatz;
cout<<endl<<"Einlage"<<endl;
cin>>einlage;

while (einlage< zielsumme)
{
	zinsenprojahr=(einlage*zinssatz)/100;
	einlage=einlage+zinsenprojahr;
	jahr=jahr+1;
}

cout<<jahr;
cout<<endl<<einlage;

	getchar();
	return 0;
}
