/*Es ist ein Programm zu erstellen, das die Anzahl der Reiskoerner
  auf einem Schachbrett (64 Felder) ermittelt, wenn auf dem
  ersten Feld ein Korn liegt und auf jedem weiteren Feld die
  doppelte Anzahl des vorangegangenen Feldes.

  Abzugeben sind: -Struktogramm auf Papier oder als Datei (Name nicht vergessen!)
  			-Quellcodedatei gespeichert auf P:\reis_nachname.de
  */
//Michael Grote - EFI19B - 16.10.20 - L6.1
#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
 //cout <<fixed<< setprecision(0);	//schaltet exponentialschreibweise aus


int main ()
{

  double feldinhalt=1, reis_gesamt=0, feld=1;

  while(feld<=64)
  {
    feld=feld+1;
    reis_gesamt=reis_gesamt+feldinhalt;
    feldinhalt=feldinhalt*2;
    cout<<"Feld: "<<fixed<<setprecision(0)<<feld<<endl<<"Reis_gesamt: "<<fixed<<setprecision(0)<<reis_gesamt<<endl<<"Feldinhalt naechstes Feld: "<<fixed<<setprecision(0)<<feldinhalt<<endl; //ausgabe zur kontrolle
  }
  cout<<endl<<endl<<fixed<<setprecision(0)<<"Reiskoerner_gesamt: "<<reis_gesamt;

        getchar();
	return 0;
}
