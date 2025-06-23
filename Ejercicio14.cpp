//Generar la función mistrcat(str1,str2) que agrega str2 al final de str1. No usar las funciones de String.h
#include <iostream>
#include <windows.h>
using namespace std;

//La función strcat sirve para agregar  contenido de src al final de otra cadena resultante de la anterior

void mistrcat(char str1[], const char str2[]) {
    int i=0, tamstr1=0;

    while(str1[tamstr1] != '\0'){ 
        tamstr1++;
    }
	
    int j=tamstr1;

    while(str2[i] !='\0'){
        str1[j]=str2[i];
        i++;
        j++;
    }
    
    str1[j]='\0';
}


int main(){
	SetConsoleOutputCP(CP_UTF8);
	char str1[100],str2[100];
    int i=0, tamstr1=0;
    cout<<"Ingrese str1: ";
    cin>>str1;
    cout<<"Ingrese str2: ";
    cin>>str2;
    cout<<endl;
	
	mistrcat(str1, str2);
	
    cout<<"Ahora str2 se sumo a str1 (mezcla)"<<endl<<endl;
    cout<<"str1 más str2 es "<<str1<<endl;
    cout<<"str2 sigue siendo "<<str2<<endl;
	
	return 0;
}