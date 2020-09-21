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




*/

/*Michael Grote, EFI19B*/
//keine Leerzeichen in Dateinamen
#include <iostream>
using namespace std;


float eingabe_f(string text);
char eingabe_c(string text);
float berechnung_durchschnitt(float zeit_h, float strecke);
float berechnung_verbrauch(float liter, float strecke);
void ausgabe(float text, string beschreibung);
float a=0;
string auswahl;

int main()
{
    auswahl = eingabe_c("Auswahl: Verbrauch(V) oder Durchschnitt(D)");

    if (auswahl == "V")
    {
      ausgabe(berechnung_verbrauch(eingabe_f("Verbrauch in Litern"),eingabe_f("Strecke in Km"))," l/100km");
    }
    else
    {
      ausgabe(berechnung_durchschnitt(eingabe_f("Strecke in Km"),eingabe_f("Zeit in Stunden"))," km/h");
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


float berechnung_durchschnitt(float zeit_h, float strecke)
{
  float geschwindigkeit;
  geschwindigkeit = (strecke / zeit_h)*100;
  return geschwindigkeit;
}

float berechnung_verbrauch(float liter, float strecke)
{
  float verbrauch;
  verbrauch = (liter / strecke) * 100;
  return verbrauch;
}

void ausgabe(float text, string beschreibung)
{
  cout<<text<<beschreibung;
}
