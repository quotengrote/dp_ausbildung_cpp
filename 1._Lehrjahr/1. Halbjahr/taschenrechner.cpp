#include <iostream>
using namespace std;
int main()
{
	int weiterausfuehren=99, erneuteabfrage=0, rechenart=99;
	float wert1, wert2, ergebnis=0; //mit float wird die vorkaommastelle von wert1 auf wert2 übertragen
//	float wert1, wert2;
//schleife komplett ausführung
do {
	//variaben abfragen
	do {
		//Ausgabe
		cout<<endl<<" ####################"<<endl;
		cout<<" # + = 1            #"<<endl;
		cout<<" # - = 2            #"<<endl;
		cout<<" # * = 3            #"<<endl;
		cout<<" # / = 4            #"<<endl;
		cout<<" ####################"<<endl;
		cout<<" Rechenart:"<<endl;

		cin>>rechenart;
		//pruefung gueltige rechenoperation
		switch (rechenart) {
			case 1:erneuteabfrage=0;
			break;
			case 2:erneuteabfrage=0;
			break;
			case 3:erneuteabfrage=0;
			break;
			case 4:erneuteabfrage=0;
			break;
			default:cout<<"Keine gueltige Auswahl!"<<endl;
			erneuteabfrage=1;
			break;
		}
	} while(erneuteabfrage==1);
	//Eingabe Operanden
				cout<<"Wert1: "<<endl;
				cin>>wert1;
				cout<<"Wert2: "<<endl;
				cin>>wert2;

				//berechnung
				//auswahl rechenoperation
				switch (rechenart)
				{
					//break ist wichtig sonst werden alle anweisungen ab dem punkt der zugetroffen ist ausgeführt
					case 1:ergebnis=wert1+wert2;
					break;
					case 2:ergebnis=wert1-wert2;
					break;
					case 3:ergebnis=wert1*wert2;
					break;
					case 4:ergebnis=wert1/wert2;
					break;
					default:cout<<"Keine Rechenart ausgewaehlt!";
					}
					cout<<"Ergebnis:"<<endl;
					cout<<ergebnis;
					cout<<endl;
					cout<<"Nochmal ausfuehren: (J=1/n=0)";
					cin>>weiterausfuehren;
					switch (weiterausfuehren) {
						case 1:weiterausfuehren=1;
						break;
						case 0:weiterausfuehren=0;
						break;
						default:cout<<"Keine gueltige Auswalhl!";
						break;
					}
				} while(weiterausfuehren==1);

	getchar();
	return 0;
}
