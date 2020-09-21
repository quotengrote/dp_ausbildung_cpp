// C++ Trainer 2.0, 22.6.2004, all rights reserved
/*

Erstellen Sie ein Programm f?r folgenden Sachverhalt:
F?r  mit PKW zur?ckgelegte Strecken ist wahlweise die Durchschnittsgeschwindigkeit
oder der durchschnittliche Kraftstoffverbrauch (pro 100km) zu errechnen.
Die  sind vom Nutzer als Zahlenreihe einzugeben, wobei Anfangswert, Endwert und Schrittweite
der Zahlenreihe abzufragen sind.
Die Eingabegr??en sind auf ung?ltige Eingaben zu pr?fen(Plausibilit?tskontrolle)
Die Ausgabe soll ?bersichtlich gestaltet die Eingabewerte und die
entsprechenden Ergebnisse einschlie?lich der Ma?einheiten enthalten.

Eingabewerte: zurückgelegte strecke, durschnittsge

Sorgen Sie daf?r, dass auf Wunsch des Nutzers eine Wiederholung
des Programmablaufs m?glich ist.

Folgende programmiertechnischen Forderungen sind zu beachten:
Die Eingabe der Werte,
die Berechnung der Ergebnisse sowie die Ausgabe
der geforderten Werte sind jeweils in selbst erstellten Funktionen zu
programmieren. Diese sind jeweils in der Hauptfunktion aufzurufen.

Globale Variablen sind grunds?tzlich nicht erlaubt.

Erlaubte Hilfsmittel:
c++-Entwicklungsumgebung (c++-Trainer bzw. small-cpp)

Wiederholen als Funktion


*/

/*Michael Grote, EFI19B*/
//keine Leerzeichen in Dateinamen
#include <iostream>
using namespace std;


float eingabe_f(string text);
char eingabe_c(string text);
void berechnung_durchschnitt(float schrittweite, float zeit_h, float strecke_beginn, float strecke_ende);
void berechnung_verbrauch(float schrittweite,float liter, float strecke_beginn, float stecke_ende);
void ausgabe(float text, string beschreibung);
float a=0;
string auswahl;

int main()
{
    while (1== 1)
    {
      auswahl = eingabe_c("Auswahl: Verbrauch(V) oder Durchschnitt(D)");

      if (auswahl == "V")
      {
        berechnung_verbrauch(eingabe_f("Schrittweite"),eingabe_f("Verbrauch in Litern"),eingabe_f("Strecke in Km - Beginn"),eingabe_f("Strecke in Km - Ende"));
      }
      else
      {
        berechnung_durchschnitt(eingabe_f("Schrittweite"),eingabe_f("Zeit in Stunden"),eingabe_f("Strecke in Km - Beginn"),eingabe_f("Strecke in Km - Ende"));
      }
  }
	getchar();
	return 0;
}





float eingabe_f(string text)
{
	float eingabevar;
  	cout<<text<<":";
	cin>>eingabevar;
	return eingabevar;
}

char eingabe_c(string text)
{
	char eingabevar;
  	cout<<text<<": ";
	cin>>eingabevar;
	return eingabevar;
}


void berechnung_durchschnitt(float schrittweite, float zeit_h, float strecke_beginn, float strecke_ende)
{
  float geschwindigkeit;
  float strecke=0;
  for (strecke=strecke_beginn;strecke<=strecke_ende;strecke=strecke+schrittweite)
    {
    ausgabe(strecke, "km");
    ausgabe(geschwindigkeit = (strecke / zeit_h)," km/h");
    }
}

void berechnung_verbrauch(float schrittweite, float liter, float strecke_beginn, float strecke_ende)
{
  float verbrauch=0;
  float strecke=0;
  for (strecke=strecke_beginn;strecke<=strecke_ende;strecke=strecke+schrittweite)
  {
    ausgabe(strecke, "km");
    ausgabe(verbrauch = (liter / strecke) * 100," l/100km");
  }
}

void ausgabe(float text, string beschreibung)
{
  cout<<text<<beschreibung<<endl;
}
