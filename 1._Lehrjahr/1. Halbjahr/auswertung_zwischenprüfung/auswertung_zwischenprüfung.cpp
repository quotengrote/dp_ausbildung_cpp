/*Michael Grote, EFI19B*/
//keine Leerzeichen in Dateinamen
#include <iostream>
using namespace std;
int main()
{
	int gesamtpunktzahl=0, erreichte_punktzahl=0;
	//in prozent 2=50%
	const int bestanden_ab=2;

	cout<<"gesamtpunktzahl: ";
	cin>>gesamtpunktzahl;
	cout<<"erreichte_punktzahl: ";
	cin>>erreichte_punktzahl;

	if (erreichte_punktzahl>=(gesamtpunktzahl/bestanden_ab))
		{
			cout<<"bestanden";
		}
	else
	{
		cout<<"durchgefallen";
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
