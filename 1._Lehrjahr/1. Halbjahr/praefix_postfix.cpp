/*Michael Grote, EFI19B*/
#include <iostream>
using namespace std;
int main()
{
	//Variablen deklarieren und initialisieren
	int a=0,b=0;
	/*//variablen eingeben
	cout<<"Variablen a eingeben: ";
		cin>>a;
	cout<<"Variablen b eingeben: ";
		cin>>b;
	//variablen ausgeben
	cout<<"Startwerte: "<<endl<<"A: "<<a<<endl<<"B: "<<b<<endl;
	cout<<endl;*/
	//postfix
	cout<<"Postfix: Erst Zuweisung, dann Rechenoperation. a=b, dann b=b+1"<<endl;
	cout<<"Variablen a eingeben: ";
		cin>>a;
	cout<<"Variablen b eingeben: ";
		cin>>b;
	a= b++;
	cout<<"Postfix: "<<endl<<"A: "<<a<<endl<<"B: "<<b<<endl;
	cout<<endl;
	//praefix
	cout<<"Praefix: Erst Rechenoperation, dann Zuweisung. b=b+1, dann a=b"<<endl;
	cout<<"Variablen a eingeben: ";
		cin>>a;
	cout<<"Variablen b eingeben: ";
		cin>>b;
	a= ++b;
	cout<<"Praefix: "<<endl<<"A: "<<a<<endl<<"B: "<<b<<endl;
	cout<<endl;

	getchar();
	return 0;
}
