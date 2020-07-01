#include <iostream>

// funktionsdeklaration; muss sich immer vor der main befinden
// das erste float gibt den datentyp des rückgabewertes an, dann der name, dann die variablen die der funktion übergeben werden müssen, erst l dann b
float berechnung(float l, float b); // ist eine funktion ohne rückgabewert, also prozedur genannt

// ausgabe funktion
void ausgabe(float ausgabe_zahl);

// beginn main
using namespace std;
int main()
{
float flaeche=0, laenge=0, breite=0;
cout<<"Laenge: "<< endl;
cin>>laenge;
cout<<"Breite: "<< endl;
cin>>breite;

flaeche = berechnung(laenge, breite);  //Funktionsaufruf, übergabe von fläche an "f" und breite an "b", übergabe des rückgabewertes an flaeche

ausgabe(flaeche);




	getchar();
	return 0;
}

// Funktion; die funktion selber muss sich außerhalb der main befinden
float berechnung(float l, float b) // l& b sind die internen variablenbezecihnungen für das was IN die Fuktionübergeben wird, von aßen kommt laenge und breite
{
	float f; //deklaration von f als float da es die variable noch nicht gibt
	f=l*b; //berechnung
	return f; //rückgabewert ist f
}

void ausgabe(float ausgabe_zahl) //vorne void weil die funktion keinen rückgabewert hat
{
cout<<"Berechnete Flaeche: "<<ausgabe_zahl;
}
