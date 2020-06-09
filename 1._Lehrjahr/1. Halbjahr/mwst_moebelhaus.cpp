/*Michael Grote, EFI19B*/
#include <iostream>
using namespace std;
int main()
{
int mwst=19;
double preis_vorher=0;
double preis_nachher=0;
//double zwischenwert=0;

	cout<<"Kaufpreis gesamt:";
	cin>>preis_vorher;
	// zwischenwert=preis_vorher/1.19;
	//	#zwischenwert=(preis_vorher/100)*mwst;
	preis_nachher=preis_vorher/1.19;
	cout<<preis_nachher;

	/* preis laden sind 119% da preis + mwst; also durch 1,19 teilen damit der preis ohne hinkommt*/


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
