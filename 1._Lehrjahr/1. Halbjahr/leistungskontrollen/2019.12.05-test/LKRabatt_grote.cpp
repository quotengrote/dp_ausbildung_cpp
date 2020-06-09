//Michael Grote - EFI19B - 05.12.2019

 /*Ein Großhändler gewährt für PC Preisnachlass nach folgender Rabattstaffelung:
 ab 20 Stück     10% >=
 ab 50 Stück     15%
 ab 100 Stück    20%
 Rabatt auf Nettopreis erst rabatt, dann Steuer
 Erstellen Sie ein Programm zur Berechnung des Rechnungsbetrages.
 Beachten Sie, dass die Preisangabe als Nettopreis erfolgt.
 Auf der Rechnung sollen ausgewiesen werden:
 Stückzahl
 Nettopreis
 Preisnachlass in Euro
 Bruttopreis

Abzugeben sind:  Struktogramm auf A4-Blatt
			Quellcode-Datei mit dem Namen LKRabatt_nachname.cpp*/

#include <iostream> //wenn es nicht geht dann iostream.h statt iostream
using namespace std;
int main()
{
  int anzahl_pc=0;
  float preis_brutto=0, preis;
  float rabatt20=10, rabatt50=15, rabatt100=20, nettopreis=0;
  float rabatt_tmp=0, preis_brutto_tmp;
  float mwst=1.19, preisnachlass;

  cout<<"Anzahl der PCs: ";
  cin>>anzahl_pc;
  cout<<"Preis pro PC: ";
  cin>>preis;

nettopreis=anzahl_pc*preis;

  if (anzahl_pc>=100)
    {
      rabatt_tmp=((nettopreis/100)*rabatt100);
      preis_brutto_tmp=(nettopreis-rabatt_tmp);
      preis_brutto=preis_brutto_tmp*mwst;
      preisnachlass=nettopreis-preis_brutto_tmp;
    }
  else
  {
    if (anzahl_pc>=50)
      {
        rabatt_tmp=((nettopreis/100)*rabatt50);
        preis_brutto_tmp=(nettopreis-rabatt_tmp);
        preis_brutto=preis_brutto_tmp*mwst;
        preisnachlass=nettopreis-preis_brutto_tmp;
      }
      else
      {
        if (anzahl_pc>=20)
          {
            rabatt_tmp=((nettopreis/100)*rabatt20);
            preis_brutto_tmp=(nettopreis-rabatt_tmp);
            preis_brutto=preis_brutto_tmp*mwst;
            preisnachlass=nettopreis-preis_brutto_tmp;
          }
        else
        {
              preis_brutto=nettopreis*mwst;
              preisnachlass=0;
        }
      }
    }
    
    cout<<"Stueckzahl: "<<anzahl_pc<<endl;
    cout<<"Nettopreis: "<<nettopreis<<endl;
    cout<<"Bruttopreis(nach Steuern und Rabatt): "<<preis_brutto<<endl;
    cout<<"Preisnachlass(durch Rabatt): "<<preisnachlass<<endl;
  getchar();
  return 0;
}
