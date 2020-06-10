/*Michael Grote, EFI19B*/
//keine Leerzeichen in Dateinamen
/*
Aufgabenstellung:
Das Unternehem strebt an seinen Umsatz zu verdoppeln.
Mit Hilfe des Programms soll ausgerechnet werden nach wieviel Jahren das Ziel erreicht werden kann.
Eingabegrößen:
- Umsatz in €
- angenommer Jährlicher Umsatzzuwachs in %
*/
#include <iostream>
using namespace std;
int main()
{
  double umsatz=0, wachstum=0, jahre=0, doppelter_umsatz=0;

  cout<<"Umsatz(jetzt) in Euro: ";
  cin>>umsatz;
  cout<<"Wachstum in Prozent: ";
  cin>>wachstum;

  doppelter_umsatz=umsatz*2; //verdoppelt den umsatz, wird als abbruchbedingung für die schleife verwendet

  wachstum=wachstum/100; //es würde auch "0,01" gehen statt "/100"rechnet wachstum in eine 0,xx zahl zum prozentrechnen um
  do
    {
      umsatz=umsatz+(umsatz*wachstum); //mutipliziert den umsatz mal dem wachtumsprozentwert, und addiert diesen zum umsatz hinzu
      jahre++;
      //cout<<"Jahre: "<<jahre<<endl; //Debug
      //cout<<"Umsatz: "<<umsatz<<endl; //Debug
    }
  while(umsatz<=doppelter_umsatz);

  cout<<"Jahre: "<<jahre;

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
