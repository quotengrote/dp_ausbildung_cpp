/*Michael Grote, EFI19B*/
//keine Leerzeichen in Dateinamen
#include <iostream>
using namespace std;

//Klassendeklaration
class Raum
{
private:
	//Variablendeklaration für Variablen innerhalb der Klasse
	float laenge;
	float breite;
	float flaeche;
	string belagart;
	string raumname;

public:
	//Deklaration der Methoden mit Übergabe und Rückgabewerten (wenn notwendig)
	void set_laenge(float l);
	void set_breite(float b);
	void set_belagart(string ba);
	void set_raumname(string rn);
	void berechnung(); //void, weil die Variable nicht außerhalb der Funktion zurückgegeben wird
	float get_flaeche(); //hier ist der Datentyp float, da mit "return" ein Wert zurückgegeben wird
	float get_laenge();
	float get_breite();
	string get_raumname(); //String weil Text abgespeichert wird
	string get_belagart();
	
	//Deklaration Konstruktor und Destruktor in public
	Raum(); //Konstruktor
	~Raum(); //Destruktor
}; //Ende Klassendeklaration


//Definition Konstuktor
Raum::Raum(){
	laenge=0; //Definition der Anfangswerte, jedes 
	breite=0; //neue Objekt wird mit diesen Werten erstellt
	flaeche=0;
}
//Definition Destruktor
Raum::~Raum(){
}


//Definition der Methoden  <Klassenname>::<Methodenname>(<Variable die Übergeben wird>)
void Raum::set_laenge(float l){ 	//Übergibt die "Übergabewerte"(beim Aufruf der Methode) 
	laenge=l;				//an die Klassenvariable laenge, damit können andere 
	}					//Methoden auf diese Variable zugreifen
void Raum::set_breite(float b){
	breite=b;
	}
void Raum::set_belagart(string ba){
	belagart=ba;
	}
void Raum::set_raumname(string rn){
	raumname=rn;
	}
void Raum::berechnung(){
	flaeche=laenge*breite;
	}
float Raum::get_flaeche(){ 	//getter und setter-Methoden enthalten nie cin/cout(wird in der Main gemacht)
	return flaeche;		//gibt die Variable flaeche zurück beim Aufruf der Methode
	}
float Raum::get_laenge(){
	return laenge;
	}
float Raum::get_breite(){
	return breite;
	}
string Raum::get_raumname(){
	return raumname;
	}
string Raum::get_belagart(){
	return belagart;
	}


//Hauptfunktion/main
int main(){
	//Lokale Variablen für die Eingabe(nur gültig in der main)
	float lae=0;
	float brei=0;
	string ba;
	string rn;
	
	//Instanziierung des Objektes; Aufruf des Konstruktors
	//erst Klasse, dann Objekt; vergleichbar Datentyp, 
	//hier Größe 12 Byte da 3x float in Klasse
	Raum raum1; //<Klasse> <objekt>;
	
	//Eingaben und Zuweisung an lokale Variablen
	cout<<"laenge eingeben: \n";
	cin>>lae;
	cout<<"breite eingeben: \n";
	cin>>brei;
	cout<<"belagart eingeben: \n";		
	cin>>ba; 	
	cout<<"raumname eingeben: \n";		
	cin>>rn; 	
		
	//Aufruf der Methoden mit den lokalen Variablen 
	//an das Objekt: raum1, der Klasse Raum
	raum1.set_laenge(lae);
	raum1.set_breite(brei);
	raum1.set_belagart(ba);			
	raum1.set_raumname(rn);	
				
	//Aufruf der Methode berechnung, 
	//dieser wird kein Wert übergeben da sie den 
	//Rückgabewert aus den Klassenvariablen/attributen berechnet
	raum1.berechnung();
	
	//Ausgabe mit Titelzeile, Werte werden mit den get_* Funktionen aufgerufen
	cout<<"\nRaumname\t"<<"Laenge\t"<<"Breite\t"<<"Flaeche\t"<<"Belag\n"<<raum1.get_raumname()<<"\t\t"<<raum1.get_laenge()<<"\t"<<raum1.get_breite()<<"\t"<<raum1.get_flaeche()<<"\t"<<raum1.get_belagart();			//Ausgabe Ergebnis
	
	//Destruktor aufrufen für das Objekt raum1, der Klasse Raum; damit wird raum1 gelöscht/freigegeben
	raum1.~Raum(); 

	getchar();
	return 0;
}