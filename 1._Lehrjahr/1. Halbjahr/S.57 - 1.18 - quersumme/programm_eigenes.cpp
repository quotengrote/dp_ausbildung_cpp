/*Michael Grote, EFI19B*/
//keine Leerzeichen in Dateinamen
#include <iostream>
using namespace std;
int main()
{

	int zahl=0, quersumme=0;
	cout<<"Zahl: ";
	cin>>zahl;   //beispiel 123
	do //solange zahl ungleich 0 tue...
		{
		quersumme=quersumme+(zahl%10);  // zahl % 10 = ergibt die letzte stelle; quersumme(0)+letzte stelle ergibt dann die neue quersumme
		//123%10 = 3; quersumme=0+3=3
		//12%10 = 2; quersumme=3+2=5
		//1%10 = 1; quersumme=5+1=6
		zahl=zahl/10;		//hier wird durch 10 geteilt damit die letzte stelle wegfällt(weil zahl int ist)
		//123/10=12
		//jetzt zweiter schritt wieder unter quersumme
		//12/10=1
		//jetzt zweiter schritt wieder unter quersumme
		//1/10=0
		//dait zahl=0 und abbruchkriterium erreicht
		}
		while(zahl!=0);

		cout<<quersumme;





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
