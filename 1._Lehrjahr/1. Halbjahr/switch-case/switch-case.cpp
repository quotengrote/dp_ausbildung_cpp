/*Michael Grote, EFI19B*/
//keine Leerzeichen in Dateinamen
#include <iostream>
using namespace std;
int main()
{
float r1=0, r2=0, r3=0, ergebnis=0;
char rp, abbruch;
do{
cout<<"R1: "<<endl;
cin>>r1;
cout<<"R2: "<<endl;
cin>>r2;
cout<<"R3: "<<endl;
cin>>r3;

cout<<"Sind die Widerstände in (R)eihe oder (P)arallel"<<endl;
cin>>rp; //eingabe ob r oder p

switch(rp)
{
	case 'r':											//wenn keine "Aktion", kein break, vorhanden ist wird die nächste Anweisung durchgeführt
	case 'R': ergebnis=r1+r2+r2;	//so lassen sich wie in dem Beispiel Groß/Kleinschreibung abfangen
		break;

	case 'p':
	case 'P': ergebnis=1/((1/r1)+(1/r2)+(1/r3));
		break;
	default:cout<<"Falsche Auswahl (nur R oder P)";
}
cout<<endl<<"R"<<ergebnis;
cout<<endl<<"Moechten Sie abbrechen? (j/n)"<<endl;
cin>>abbruch;
}
  while(abbruch=='n');
	getchar();
	return 0;
}
