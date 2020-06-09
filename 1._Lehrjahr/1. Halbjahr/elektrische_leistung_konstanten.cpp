/*Elektrische Leistung berechen
p=u*i
U spannung
i stromstärke
p Leistung
*/

#include <iostream>
using namespace std;
int main()
{
    //Variablendeklaration
    float i=0, p=0;
    const float u=230;  //definiert u als Konstante oder #define u 230; kein Datentyp notwendig
    //Ein- Ausgabe
    cout<<"Stromstaerke(A) eingeben: ";
    cin>>i;
    //Berechnung
    p=u*i;
    /*cout<<"Die Leistung betraegt:";
    cout<<p;
    cout<<" Watt";*/
    //Ausgabe
    cout<<"Die Elektrische Leistung(W) betraegt:"<<p<<" Watt";
    /*Ausgabe cout knn mit << aneinander gehangen werden; da selbe wie drüber nur mit einem cout, verkettung mit text, p und text*/
    //getchar();
    return 0;
}
