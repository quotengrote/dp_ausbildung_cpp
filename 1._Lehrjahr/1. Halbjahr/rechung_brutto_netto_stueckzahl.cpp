/*Michael Grote, EFI19B*/
//keine Leerzeichen in Dateinamen
#include <iostream>
using namespace std;
int main()
{
	//deklaration der variablen
	float stueckzahl, mwst, netto_preis, brutto_preis, preis_eingabe;
	const float mwst_satz=19; 			//const mit datentyp, define ohne datentyp
	//eingabe
	cout<<"Eingabe von Stueckzahl und dem Preis"<<endl;
	cout<<"Stueckzahl eingeben:"<<endl;
	cin>>stueckzahl;
	cout<<"Preis eingeben:"<<endl;
	cin>>preis_eingabe;
	//berechung
	netto_preis=stueckzahl*preis_eingabe;
	mwst=(netto_preis/100)*mwst_satz;
	brutto_preis=netto_preis+mwst;
	//ausgabe
	cout<<"_____________"<<endl;
	cout<<"Preis Netto: "<<netto_preis<<endl;
	cout<<"_____________"<<endl;
	cout<<"Summe Mwst: "<<mwst<<endl;
	cout<<"_____________"<<endl;
	cout<<"Preis Brutto: "<<brutto_preis<<endl;
	getchar();
	return 0;
}
