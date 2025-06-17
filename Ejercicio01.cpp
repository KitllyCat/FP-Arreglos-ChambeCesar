#include <iostream>
#include <windows.h>
using namespace std;

void mayusP(char frase[]){

	frase[0] = toupper(frase[0]);
	frase[9] = toupper(frase[9]);
	frase[20] = toupper(frase[20]);
	frase[23] = toupper(frase[23]);
	frase[26] = toupper(frase[26]);
	
	cout<<"Frase despues de ser modificada: '"<<frase<<"'."<<endl;
}


int main(){
	SetConsoleOutputCP(CP_UTF8);
	char frase[]="cáceres patrimonio de la humanidad";
	cout<<"Frase antes de ser modificada:   '"<<frase<<"'."<<endl;
	mayusP(frase);
	return 0;
}