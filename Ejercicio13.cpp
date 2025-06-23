//Generar la función mistrcpy(str1,str2) que copia str2 en str1. No usar la funciones de String.h
#include <iostream>
#include <windows.h>
using namespace std;

//La función strcpy sirve para copiar cadenas de caracteres y ubicarlas en otra variable

void mistrcpy(char str1[], const char str2[]){
    int i=0;
    for(i=0;str2[i]!='\0';i++){
		str1[i]=str2[i];
    }

    str1[i]='\0';
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	char str1[100],str2[100];

    cout<<"Ingrese str1: ";
    cin>>str1;
    cout<<"Ingrese str2: ";
    cin>>str2;
    cout<<endl;
    
    mistrcpy(str1,str2);
    
    cout<<"Ahora str1 se convirtio en str2 (copia)"<<endl<<endl;
    cout<<"str1 ahora es "<<str1<<endl;
    cout<<"str2 ahora es "<<str2<<endl;
	
	return 0;
}