//Generar la función mistrcmp(str1,str2) que compara dos cadenas y retorna los resultados 0 si las cadenas son iguales,
//1 si la cadena str1 >str2, -1 si la cadena str2>str1. No usar las funciones de String.h
#include <iostream>
using namespace std;

//La función strcmp sirve para comparar carácter por carácter una cadena de texto, donde retorna 0, -1 o 1

int mistrcmp(const char* str1, const char* str2) {
     while (*str1&&(*str1==*str2)){
        str1++;
        str2++;
    }

    if (*str1>*str2){
        return 1;
    }else if (*str1<*str2){
        return -1;
    }else{
        return 0;
    }
}

int main(){
	char str1[100],str2[100];

    cout<<"Ingrese str1: ";
    cin>>str1;
    cout<<"Ingrese str2: ";
    cin>>str2;
    cout<<endl;
    
    int resultado=mistrcmp(str1, str2);
    
    cout<<"Se compara "<<str1<<" y "<<str2<<" = ";
    
    if(resultado== 1){
    	cout<<"str1 es mayor que str2"<<endl;
	}else if(resultado== -1){
		cout<<"str2 es mayor que str1"<<endl;
	}else if(resultado== 0){
		cout<<"str1 es igual que str2"<<endl;
	}
	
	return 0;
}