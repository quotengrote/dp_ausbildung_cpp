#include <iostream>
using namespace std;

int main()   
{ 
	int A;
	
	cout<<&A<<endl;  // gibt die Speicheradresse von Variable A aus; http://www.highscore.de/cpp/einfuehrung/zeiger.html
	int* a = &A; //wei�t die speicheradresse der von A an a zu, wenn ich also auf a zugreife schreibe/lese ich tats�chlich in A
	cout<<a;  
  getchar();
  return 0; 
}