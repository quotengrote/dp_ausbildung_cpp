/*Michael Grote, EFI19B*/
//keine Leerzeichen in Dateinamen
#include <iostream>
using namespace std;
int main()
{

	int zahl=0, quersumme=0, teiler=10;
	cout<<"Zahl: ";
	cin>>zahl;


	while (zahl>0)										//wenn die eingabe größer 0 ist
		{								                //dann
			quersumme=quersumme+(zahl%teiler);     //module zahl %10 +quersumme = quersumme  Modulo-division gibt als rest die letzte ziffer einer zahl
			zahl=zahl/teiler;											//zahl=zhl geteilt durch 10
		}

		cout<<"Quersumme: "<<quersumme;



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
