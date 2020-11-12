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
	
	Raum(); //Konstruktor, traegt immer den Namen der Klasse
	~Raum(); //Destruktor
};
//Definition Konstuktor
Raum::Raum()
{
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
	//Instanzierung des Objektes 
	Raum raum1; //erst Klasse, dann Objekt
	//laenge einlesen
	cout<<"laenge eingeben: ";
	cin>>lae; 
	//Aufruf Methode set_laenge mit der Variable/Argument "lae" für das Objekt "raum1"
	raum1.set_laenge(lae);
	

	
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
