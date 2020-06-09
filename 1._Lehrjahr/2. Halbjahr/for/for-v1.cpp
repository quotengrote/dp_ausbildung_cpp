/*Michael Grote, EFI19B*/
/* Aufgabenstellung
Erstellen Sie ein Programm zur Umrechnung der Maßeinheiten kW in PS.
( Hinweis:    1 kW = 1.36 PS    bzw.   1 PS = 0.736 kW)
		           = 1.359 621 73               =  0,735 498 7
 
a) Die Umrechnung soll für die Werte von 50 bis 70 kW in Tabellenform
      dargestellt werden (Version 1)!

for (i = 0; i <= 10 ; i++)
{  cout << i ; }
*/
#include <iostream>
using namespace std;
int main()
{
	double wert_kw=50;
	double ausgabe=0;
	double ps=0;
	cout<<"Kw    "<<" "<<"PS: "<<endl;

	for (wert_kw=50; wert_kw<=70; wert_kw++)
	{
		ps=wert_kw*1.36;
		cout<<"Kw: "<<wert_kw<<" "<<"PS: "<< ps<<endl;
	}

	getchar();
	return 0;
}


//Konstanten: const float x=0;
//Konstanten: #define x 0;
//Variablen: int y=0;
//cin>>variablenname;
//cout<<"Text";
//cout aneinanderhängen: cout<<"Text"/Variable<<"Text"/Variable<<"Text"/Variable;
// = Zuweisungsoperator
//Mathematische Operatoren: +, -, *, /, %(Modulo-division)
//zeilenumbruch cout<<endl;
//++/-- addition/subtraktion von 1
//präfix/postfix b++; / ++b;
//Logische Operatoren: && || ! und oder nicht
//mathematische Operatoren:==;!=;><;>=;<=
