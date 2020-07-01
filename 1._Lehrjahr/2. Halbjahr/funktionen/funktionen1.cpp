#include <iostream>

// funktionsdeklaration; muss sich immer vor der main befinden
// das erste float gibt den datentyp des rückgabewertes an, dann der name, dann die variablen die der funktion übergeben werden müssen, erst l dann b
float berechnung(float l, float b);

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

cout<<"Berechnete Flaeche: "<<flaeche;



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
