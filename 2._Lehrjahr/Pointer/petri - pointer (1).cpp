// C++ Trainer, 10.11.2016, all rights reserved
#include <iostream.h>
void eingabe(float *plaenge, float *pbreite);
//float eingabe(string gr);
float berechne(float l,float b);
void ausgabe(float f);
int main()
{
  float laenge, breite, flaeche;
  
  float *pL=&laenge;
  
  eingabe(pL, &breite);   
  flaeche=berechne(laenge,breite);   
  ausgabe(flaeche);
  
  getchar();
  return 0;
}    
   void eingabe(float *plaenge, float *pbreite)
   {
   do
    {cout<<"Laenge: ";
     cin>>*plaenge;
    }while (*plaenge <0);
     
     cout<<"Breite: ";
     cin>>*pbreite;     
   }



 /* float eingabe(string gr)
  {
   float x;
   cout<<"Bitte "<<gr<<" eingeben: ";
   cin>>x;
   return x;     
  }  */
        
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
