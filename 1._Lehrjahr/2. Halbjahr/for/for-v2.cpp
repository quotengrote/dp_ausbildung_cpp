/*Michael Grote, EFI19B*/
/* Aufgabenstellung
Erstellen Sie ein Programm zur Umrechnung der Maßeinheiten kW in PS.
( Hinweis:    1 kW = 1.36 PS    bzw.   1 PS = 0.736 kW)
		           = 1.359 621 73               =  0,735 498 7

b) Geben Sie in Version 2 dem Nutzer die Möglichkeit, Anfangswert, Schrittweite und Endwert der Tabelle selbst festzulegen! --> check
c) Absicherung der Eingabewerte gegen ungültige Werte --> check
d) Möglichkeit der Programmwiederholung --> check
#include <iomanip.h>
cout <<fixed<< setprecision(0);
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double anfangswert=0, endwert=0, schrittweite=0;
	double wert_kw=0;
	double ausgabe=0;
	double ausgabe_kw=0;
	int abbrechen=0;
	char auswahl;
	double umrechnungsfaktor=1.35962173;
	double ps=0;
// schleife ausfuehrung
	while (abbrechen==0)
		{
// abfangen eingabewerte: https://www.tutorials.de/threads/eingabefehler-abfangen-buchstaben.255200/
			cout<<"anfangswert: ";
			if (cin >> anfangswert && anfangswert > 0)
				{
				cout<<"Wert i.O."<<endl;
				}
			else
				{
				  cerr << "Sie muessen eine gueltige Zahl eingeben!" << endl;
				  cin.clear ();
					break;
				}
			cout<<"endwert: ";
			if (cin >> endwert && endwert > 0)
				{
				cout<<"Wert i.O."<<endl;
				}
			else
				{
				  cerr << "Sie muessen eine gueltige Zahl eingeben!" << endl;
				  cin.clear ();
					break;
				}
			cout<<"schrittweite: ";
			if (cin >> schrittweite && schrittweite > 0)
				{
				cout<<"Wert i.O."<<endl;
				}
			else
				{
				  cerr << "Sie muessen eine gueltige Zahl eingeben!" << endl;
				  cin.clear ();
					break;
				}
// berechnung
		cout<<"Kw\t\t"<<" "<<"PS: "<<endl;

		for (wert_kw=anfangswert; wert_kw<=endwert; wert_kw=wert_kw+schrittweite)
			{
				ausgabe_kw=wert_kw*umrechnungsfaktor;
								ps=wert_kw*1.36;
				cout<<"Kw: "<<ausgabe_kw<<"\t"<<"PS: "<< ps<<endl<<fixed<< setprecision(9); // (9) gibt die nachkommastellen an;
			}
		cout<<endl<<"Abbrechen? (J)a/(N)ein"<<endl;
		cin>>auswahl;
		switch(auswahl)
			{
				case 'j':		//wenn keine "Aktion", kein break, vorhanden ist wird die nächste Anweisung durchgeführt
				case 'J': abbrechen=1;
					break;
				case 'n':
				case 'N': abbrechen=0;
					break;
				default:cout<<"Falsche Auswahl (nur J/j oder N/n)";
			}
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
