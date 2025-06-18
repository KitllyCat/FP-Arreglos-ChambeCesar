#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	const int tam = 100;
	char frase[tam], letra;
	int cantLet=0;
	cout<<"Ingrese su frase a contar: ";
	cin.getline(frase,tam);
	cout<<endl<<"Ingrese el caracter que desea contar de la frase: ";
	cin>>letra;
	
	for (int i=0; frase[i] != '\0' ;i++){
		if (frase[i] == letra ){
			cantLet++;
        }
    }
	
	cout<<endl<<"En total se encontro "<<cantLet<<" veces el caracter "<<letra<<" en la frase."<<endl;

	return 0;
}
