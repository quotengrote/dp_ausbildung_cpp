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
    float u=0, i=0, p=0;
    cout<<"Spannung(V) eingeben: ";
    cin>>u;
    cout<<"Stromstaerke(A) eingeben: ";
    cin>>i;
    p=u*i;
    /*cout<<"Die Leistung betraegt:";
    cout<<p;
    cout<<" Watt";*/
    cout<<"Die Elektrische Leistung(W) betraegt:"<<p<<" Watt";
    /*Ausgabe cout knn mit << aneinander gehangen werden; da selbe wie drüber nur mit einem cout, verkettung mit text, p und text*/
    //getchar();
    return 0;
}
