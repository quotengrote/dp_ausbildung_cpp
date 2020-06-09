/*Michael Grote, EFI19B*/
//keine Leerzeichen in Dateinamen

#include <iostream>
using namespace std;
int main()
{
	float gesamtpunktzahl=0, erreichte_punktzahl=0; //mustte auch float werden da sin int und float nicht miteinander multiplizieren lassen
	float prozentwert=0;
	//in prozent 2=50%
	const int bestanden_ab=2;

	cout<<"gesamtpunktzahl: ";
	cin>>gesamtpunktzahl;
	cout<<"erreichte_punktzahl: ";
	cin>>erreichte_punktzahl;

if (erreichte_punktzahl>=(gesamtpunktzahl/bestanden_ab))
		{
			cout<<"Bestanden mit ";
		}
	else
	{
		cout<<"Durchgefallen mit ";
	}

	//Notenberechnung
	prozentwert=(erreichte_punktzahl/gesamtpunktzahl)*100;
	//prozentwert ist gleich die erreichte_punktzahl geteilt durch die
	//gesamtpunktzahl, dabei kommt etwas mit 0,xxx raus, daher die multiplikation
	//mit 100 um einen "normalen prozentwertzu bekommen"


	//cout<<prozentwert<<endl<<endl; //ausgabe für test_prozentwert

if (prozentwert>=92)
{
	cout<<"Note: 1";
}
else
{
	if(prozentwert>81 && prozentwert<92)
	{
		cout<<"Note: 2";
	}
	else
	{
		if(prozentwert>67 && prozentwert<81)
		{
			cout<<"Note: 3";
		}
		else
		{
			if(prozentwert>50 && prozentwert<67)
			{
				cout<<"Note: 4";
			}
			else
			{
				if(prozentwert>30 && prozentwert<50)
				{
					cout<<"Note: 5";
				}
				else
				{
					cout<<"Note: 6";
				}
			}
		}
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
