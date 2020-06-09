/* Aufgabe: Berechnung Flächeninhalt eines Rechteckes */
#include <iostream>
using namespace std;
int main()
{
//Variablen deklarieren
int a=0, b;                           //Deklaration der Variablen; z.B.a und b sind variablen vom typ int; setzt "a" als "0"
cout<<endl<<a<<endl;                  //gibt den Wert der Variable a aus; mit Umbrüchen
cout<<endl<<&b<<endl;                 //gibt den Wert der Variable b aus; mit Umbrüchen; mit "&" wird der Wert als Hex ausgegeben
  cout<<"Laenge: ";                   //Ausgabe Text
  cin>>a;                             //a ist die variable
  cout<<endl<<a<<endl;                //gibt den Wert der Variable a aus; mit Umbrüchen

  cout<<"Breite: ";                   //Ausgabe Text

  cin>>b;                             //b ist die variable
  cout<<a*b;
	getchar();
	return 0;
}
