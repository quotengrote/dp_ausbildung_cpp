#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double anfangskapital=1, laufzeit=0, endkapital=0, zinssatzbis2=2.8, zinssatz=0, zinssatzbis10=3.8, zinssatzueber10=4.5;

	while (anfangskapital!=0) //kein semikolon hier nach, sonst steht in der konsole nur "export"
	{
		cout<<"Anfangskapital: "<<endl;
		cin>>anfangskapital;

	cout<<"Laufzeit: "<<endl;
	cin>>laufzeit;

	if (laufzeit<=2)
	{
		zinssatz=zinssatzbis2;
	}
	else
	{
		if (laufzeit <=10)
		{
			zinssatz=zinssatzbis10;
		}
		else
		{
			zinssatz=zinssatzueber10;
		}
	}
	endkapital=pow(anfangskapital*(1+(zinssatz/100)),laufzeit); //pow = potenzieren pow(wert_unten, wert_hochgestellt)

	cout<<endkapital<<endl;
	cout<<"Anfangskapital: "<<endl;
	cin>>anfangskapital;

}
		getchar();
		return 0;
	}
