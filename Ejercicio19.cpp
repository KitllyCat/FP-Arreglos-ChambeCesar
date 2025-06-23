/*Escribir un programa que dada una frase, determine si es un palíndromo o no. Un palíndromo es una frase que, atendiendo
sólo a sus letras e ignorando los espacios, acentos, signos de puntuación y tipo de letra (mayúscula o minúscula) expresa
lo mismo leída de izquierda a derecha que de derecha a izquierda. “dábale arroz a la zorra el abad”.*/

#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    string frase, fraseLimp="";
    
    cout<<"Ingrese cualquier una frase para comprobar si es un palíndromo: ";
    getline(cin, frase);
    
    int tam=frase.length(); //calcular su tamaño
    
    for (int i=0;i<tam;i++){
        char c=frase[i];
        if(c==' '){
        	continue; //si no pasa eso, entonces que siga
		}

        if(c=='á'||c=='Á'){ //limpiado de tildes
        	c='a';
		}else if(c=='é'||c=='É'){
			c='e';
		}else if(c=='í'||c=='Í'){
			c='i';
		}else if(c=='ó'||c=='Ó'){
			c='o';
		}else if(c=='ú'||c=='Ú'){
			c='u';
		}

        if(c>='A'&&c<='Z'){ //para quitar y convertir las mayusculas
        	c+=32;
		}
        fraseLimp+=c; //añadir a la frase que se esta limpiando
    }

    cout<<"Frase limpia: "<<fraseLimp<<endl;
    
    return 0;
}