/*Michael Grote, EFI19B*/
#include <iostream>
#include <iomanip>

using namespace std;

/*Für eine Zahlenreihe mit Flächenmaßen in km²
sollen vom Nutzer Anfangs- und Endwert der Zahlenreihe
festgelegt werden können.(Absicherung gegen ungültige Eingabewerte beachten!)
Stellen Sie in einem Menü 3 Umrechnungsmöglichkeiten zur Auswahl:
 a) in Hektar     (mittels while-Schleife programmiert)
 b) in Ar         (mittels do...while-Schleife programmiert)
 c) in m²         (mittels for-Schleife programmiert)

Geben Sie für den jeweils aufgerufenen Menüpunkt die entsprechenden
Zahlenreihen in Tabellenform (mit Tabellenkopf) aus.

Ermöglichen Sie dem Nutzer, den Programmablauf auf Wunsch wiederholen zu können.

Speichern Sie das Programm unter LK3Schleifen_nachname.cpp !

Umrechnungszahlen: 1 km² = 100 ha
                         = 10000 a
                         = 1000000 m²
*/
/*
- [x] anfangswert muss kleiner endwert sein
- [x] struktogramm
- [x] Ermöglichen Sie dem Nutzer, den Programmablauf auf Wunsch wiederholen zu können.
- [x] Zahlenreihen in Tabellenform (mit Tabellenkopf) aus.
*/

int main()
{
  char auswahl, auswahl2;
  float anfangswert=0, endwert=0;
  int hmr=0;
  int abbrechen=0;

while (abbrechen==0)
{
  do
    {
    cout<<"Anfangswert(in km2): ";
    cin>>anfangswert;
    cout<<"Endwert(in km2): ";
    cin>>endwert;
    }
    while(anfangswert>endwert);

  cout<<"Umrechnung in (H)ektar, (A)r oder Quadrat(m)eter: ";
  cin>>auswahl;

  switch(auswahl)
  {
    case 'h':
    case 'H': hmr=1;
  		break;
    case 'a':
    case 'A': hmr=2;
  		break;
    case 'm':
    case 'M': hmr=3;
  		break;
  	default:cout<<"Falsche Auswahl (h/a/m)";
  }

  if(hmr==1){
    cout<<endl<<"Quadratkilometer"<<"\t"<<"Hektar"<<endl;
    while(anfangswert<=endwert){
      cout<<anfangswert<<"\t\t\t"<<anfangswert*100<<endl<<fixed<<setprecision(0);
      anfangswert=anfangswert+1;
    }
  }

  if(hmr==2){
    cout<<endl<<"Quadratkilometer"<<"\t"<<"Ar"<<endl;
    do{
      cout<<anfangswert<<"\t\t\t"<<anfangswert*10000<<endl<<fixed<<setprecision(0);
      anfangswert=anfangswert+1;
    } while(anfangswert<=endwert);

  }

  if(hmr==3){
    cout<<endl<<"Quadratkilometer"<<"\t"<<"Ar"<<endl;
    for(anfangswert;anfangswert<=endwert;anfangswert=anfangswert+1){
      cout<<anfangswert<<"\t\t\t"<<anfangswert*1000000<<endl<<fixed<<setprecision(0);
    }
  }
  cout<<endl<<"Abbrechen? (J)a/(N)ein | falsche Auswahl beendet das Programm"<<endl;
  cin>>auswahl2;
  switch(auswahl2)
    {
      case 'j':
      case 'J': abbrechen=1;
        break;
      case 'n':
      case 'N': abbrechen=0;
        break;
      default: abbrechen=1;
    }
  }
	getchar();
	return 0;
}
