// C++ Trainer, 10.11.2016, all rights reserved
#include <iostream.h>
void eingabe(float *px, float *py);
float berechne(float l,float b);
void ausgabe(float f);
int main()
{
  float laenge, breite, flaeche;
 
  eingabe(&laenge,&breite);
    
  flaeche=berechne(laenge,breite);  
  
  ausgabe(flaeche);
  
  getchar();
  return 0;
}

  void eingabe(float *px, float *py)
  {
   cout<<"Bitte L�nge eingeben: ";
   cin>>*px;
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
 cout<<"Der Fl�cheninhalt betr�gt "<<f<<endl;
 }
