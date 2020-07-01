// C++ Trainer, 10.11.2016, all rights reserved
#include <iostream.h>

// Funktionsdeklaration Eingabe, eine Eingabe Variable = gr(gr stellt das Wort dar was bei der Eingabe verlangt wird), gibt einen float wert zurück
float eingabe(string gr);
// Funktionsdeklaration Berechnung, nimmt zwei Eingabevariablen, (l)aenge und (b)reite, gibt einen float wert zurück
float berechne(float l,float b);
// Funktionsdeklaration ausgabe, void zeigt an das diese Funktion keinen Rückgabewert hat,
// deshalb wird sie auch Prozedur genannt
void ausgabe(float f);
int main()
{
  float laenge, breite, flaeche;
  // Aufruf Funkttion eingabe 2x, jeweils mit anderem Wort, Übergabe der Funkstionsausgabe an jeweils eine Variable
  laenge=eingabe("Laenge");
  breite=eingabe("Breite");
  // Aufruf berechne, mit den beiden Parametern l und b
  flaeche=berechne(laenge,breite);
  // Aufruf ausgabe, mit dem Parameter flaeche der den Ausgabewert enthält
  ausgabe(flaeche);

  getchar();
  return 0;
}
  // Funktion eingabe; gr stellt das Wort dar das der Funktions als Parameter übergeben wird.
  float eingabe(string gr)
  {
   float x;
   cout<<"Bitte "<<gr<<" eingeben: ";
   cin>>x;
   return x;
  }
  // Funktion berechne
 float berechne(float l,float b)
 {
  float fl;
  fl = l * b;
  return fl; //return gibt den inhalt der Variable fl zurück
 }
  // Funktion ausgabe
 void ausgabe(float f)
 {
 cout<<"Der Flaecheninhalt betraegt "<<f<<endl;
 }
