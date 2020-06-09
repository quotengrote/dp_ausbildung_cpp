/*Michael Grote, EFI19B*/
//keine Leerzeichen in Dateinamen
#include <iostream>
using namespace std;
int main()
{
	const float versandkosten=5.5, grenzwert_versandkosten=100;
	float bestellwert=0, endwert=0;
	cout<<"Bestellwert"<<endl;
	cin>>bestellwert;
	//prüfen ob bestellwert kleiner grenzwert, wenn ja, dann addition der versandkosten, wenn nein, dann zuweisung bestellwert zu endwert
	if (bestellwert<grenzwert_versandkosten)
		{
			endwert=bestellwert+versandkosten;
		}
		else
		{
			endwert=bestellwert;
		}
	cout<<"Gesamtwert: "<<endwert;

	getchar();
	return 0;
}
