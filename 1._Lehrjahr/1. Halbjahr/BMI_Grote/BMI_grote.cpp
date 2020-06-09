/*Michael Grote, EFI19B*/

/*  Der Body-Mass-Index (BMI) ist ein Wert, mit dem Sie feststellen,
  ob Sie Ihr persönliches Idealgewicht haben.
  Ihren BMI ausrechnen können Sie mit der folgenden Formel

      Körpergewicht in kg
BMI = -------------------
      (Körpergröße in m)²

   BMI Auswertung
unter 18,5        Untergewicht
18,5 bis 25       Normalgewicht
über 25 bis 30    übergewicht
über 30           starkes übergewicht


--> Speichern Sie die Quellcode-Datei in Ihrem persönlichen Laufwerk
    unter dem Namen  BMI_nachname.cpp ab.
    Für die ordnungsgemäße Speicherung sind Sie selbst verantwortlich.

*/
#include <iostream>
using namespace std;
int main()
{
  char abbruch='j';
  do{ //für wiederholte ausführung, do{} while()
  float gewicht=0, groesse=0, bmi=0;


  cout<<"Gewicht: ";
  cin>>gewicht;
  cout<<"Groesse in m(mit punkt statt komma eingeben): ";
  cin>>groesse;

  bmi=gewicht/(groesse*groesse);

  cout<<bmi<<endl;

  if (bmi>30)
  {
  	cout<<"starkes uebergewicht";
  }
  else
  {
  	if(bmi>25)
  	{
  		cout<<"uebergewicht";
  	}
  	else
  	{
  		if(bmi>=18.5)
  		{
  			cout<<"Normalgewicht";
  		}
  		else
  		{
  				cout<<"Untergewicht";
  		}
    }
  }
    cout<<endl<<"Moechten Sie abbrechen? (j/n)"<<endl;
    cin>>abbruch;
  }
  while(abbruch=='n'); //char in hochkomma
  getchar();
	return 0;
}
