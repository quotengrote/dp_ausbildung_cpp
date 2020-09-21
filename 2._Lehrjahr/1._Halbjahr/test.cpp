// C++ Trainer, 10.11.2016, all rights reserved
#include <iostream.h>
void eingabe(float *px, float *py);
float berechne(float l,float b);
void ausgabe(float f);
int main()
{
  float laenge, breite, flaeche;
 
  eingabe(&laenge,&breite); //adresse an variable an pointer übergeben und der schreibt dann "in" länge rein,  ALSO Pointer zeigt auf Adresse und nicht andersrum
  					// lange und breite sind normale variablen auf die gezeigt wird
  flaeche=berechne(laenge,breite);  
  
  ausgabe(flaeche);
  
  getchar();
  return 0;
}

  void eingabe(float *px, float *py) //deklariere pointer, da erste stelle zeigt er in zeile 10 auf &länge, in z23 wird der pointer beschrieben, daher enthält &laenge dann den inhalt des pointers
  {
   cout<<"Bitte Länge eingeben: ";
   cin>>*px;  					//hier wird der Zeiger dereferenziert
   cout<<"Bitte Breite eingeben: ";
   cin>>*py;
  }
        
 float berechne(float l,float b)
 {
  float fl;
  fl = l * b;
  return fl;
 }  
 
 void ausgabe(float f)
 {
 cout<<"Der Flächeninhalt beträgt "<<f<<endl;
 }
