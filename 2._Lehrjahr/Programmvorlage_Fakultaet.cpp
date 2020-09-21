// M.Kraus 11/2018
#include <iostream>
using namespace std;

const double PI= 3.14159;


void fakultaet(float zahli);
void ausgabe(float text);

int main() {
int auswahl, zahl1, zahl2;
cout << "Programm zur Berechnung von Fakultaet, Summe und Differenz" << endl << "------------------" << endl;
cout << "Waehlen Sie, was Sie berechnen moechten: " << endl;
cout << "1: Fakultaet einer Zahl" << endl;
cout << "2: Differenz zweier Zahlen" << endl;
cout << "3: Summe zweier Zahlen" << endl;
cin >> auswahl;

cout << "Bitte geben Sie die benoetigten Werte ein!" << endl;
cout << "Eine Zahl (nur ganzzahlige Werte): "; cin >> zahl1;

switch(auswahl) {
	case 1: fakultaet(zahl1); break;
//	case 2: diff(zahl1, zahl2); break;
	default: ;
	}
}


void fakultaet(float zahli)
{
	int ergebnis=1;
	for(int z=1;z<=zahli;z++)
		{
			ergebnis=ergebnis*z;
		}
	ausgabe(ergebnis);
}


void ausgabe(float text)
{
  cout<<text<<endl;
}
