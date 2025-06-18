#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int n=0,i;
	const int tam = 100; //se uso el const int para crear una variable que no se pueda modificar
	char frase[tam];
	
	cout<<"Ingrese la frase: ";
	cin.getline(frase,tam); //cin.getline es para obtener toda la frase completa, incluyendo los espacion para luego separarlos
	
	for (int i=0; frase[i]!='\0';i++){
        if (frase[i] == ' '){
            cout<<endl; // Salto de línea en vez del espacio
        }else{
            cout<<frase[i];
        }
    }
	
	return 0;
}
