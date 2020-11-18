/*Michael Grote, EFI19B*/
//keine Leerzeichen in Dateinamen
#include <iostream>
using namespace std;

//Klassendeklaration
class Raum
{
private: //"Zugriffsspezifizierer"
	float laenge;
	float breite;
	float flaeche;

public: //hier kommen Methoden
	void set_laenge(float l);
	void set_breite();
	void berechnung();
	float get_flaeche();
	//Deklaration Konstruktor und Destruktor in public
	
	
	Raum(); //Konstruktor, traegt immer den Namen der Klasse
	~Raum(); //Destruktor
};


//Definition Konstuktor
Raum::Raum()
{
	laenge=0; //Definition der Anfangswerte 
	breite=0;
	flaeche=0;
}
//Defnition Destruktor
Raum::~Raum()
{
}


//Definition der Methoden
//Funktion für die Klasse Raum
void Raum::set_laenge(float l)
{
	laenge=l;
}


//Hauptfunktion/main
int main()
{
	//Lokale Variablen in der main
	float lae=0;
	//Instanziierung des Objektes; Aufruf des Konstruktors
	//erst Klasse, dann Objekt; vergleichbar Datentyp, hier Größe 12 Byte da 3x float in Klasse
	Raum raum1; 
	//laenge einlesen
	cout<<"laenge eingeben: ";
	cin>>lae; 
	//Aufruf Methode set_laenge mit der Variable/Argument "lae" für das Objekt "raum1"
	raum1.set_laenge(lae);
	
	//Destruktor aufrufen für das Objekt raum1, der Klasse Raum, damit wird raum1 gelöscht/freigegeben
	raum1.~Raum(); 

	getchar();
	return 0;
}


//Konstanten: const float x=0;
//Konstanten: #define x 0;
//Variablen: int y=0;
//cin>>variablenname;
//cout<<"Text";
//cout aneinanderhängen: cout<<"Text"/Variable<<"Text"/Variable<<"Text"/Variable;
// = Zuweisungsoperator
//Mathematische Operatoren: +, -, *, /, %(Modulo-division)
//zeilenumbruch cout<<endl;
//++/-- addition/subtraktion von 1
//präfix/postfix b++; / ++b;
//Logische Operatoren: && || ! und oder nicht
//mathematische Operatoren:==;!=;><;>=;<=
