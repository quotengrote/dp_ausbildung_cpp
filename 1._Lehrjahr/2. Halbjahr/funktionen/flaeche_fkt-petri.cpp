// C++ Trainer, 10.11.2016, all rights reserved
#include <iostream.h>
float eingabe(string gr);
float berechne(float l,float b);
void ausgabe(float f);
int main()
{
  float laenge, breite, flaeche;
 
  laenge=eingabe("Laenge");
  breite=eingabe("Breite");
  
  flaeche=berechne(laenge,breite);  
  
  ausgabe(flaeche);
  
  getchar();
  return 0;
}

  float eingabe(string gr)
  {
   float x;
   cout<<"Bitte "<<gr<<" eingeben: ";
   cin>>x;
   return x;     
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
