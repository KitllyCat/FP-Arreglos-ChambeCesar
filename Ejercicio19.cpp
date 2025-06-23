/*Escribir un programa que dada una frase, determine si es un palíndromo o no. Un palíndromo es una frase que, atendiendo
sólo a sus letras e ignorando los espacios, acentos, signos de puntuación y tipo de letra (mayúscula o minúscula) expresa
lo mismo leída de izquierda a derecha que de derecha a izquierda. “dábale arroz a la zorra el abad”.*/

#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(1252); //estare usando caractres ascii especificos
    string frase, fraseLimp="";
    bool siPalind=true;
    cout<<"Ingrese cualquier una frase para comprobar si es un palíndromo: ";
    getline(cin, frase);
    
    int tam=frase.length(); //calcular su tamaño
    
    for (int i=0;i<tam;i++){
        char c=frase[i];
        unsigned char uc = (unsigned char)c;  //para comprobar por medio de los codigo ascii
        
        if(c==' '){
        	continue; //si no pasa eso, entonces que siga
		}

        if(uc==160||c=='Á'){ //160 es el valor de 'á'
        	c='a';
		}else if(uc==130||c=='É'){ //´´ 'é'
			c='e';
		}else if(uc==161||c=='Í'){ //´´ 'í'
			c='i';
		}else if(uc==162||c=='Ó'){ //´´ 'ó'
			c='o';
		}else if(uc==163||c=='Ú'){ //´´ 'ú'
			c='u';
		}

        if(c>='A'&&c<='Z'){ //para quitar y convertir las mayusculas
        	c+=32;
		}
        fraseLimp+=c; //añadir a la frase que se esta limpiando
    }

    int primL=0, ultL=tam-1;

    while(primL<ultL){
        if(fraseLimp[primL]!=fraseLimp[ultL]){ //verificar si el primer y ultimo caracter de la cadena son iguales
            siPalind=false;
            break;
        }
        primL++;
        ultL--;
    }

    if (siPalind){
        cout<<"La frase si es un palíndromo :)"<<endl;
    }else{
        cout<<"La frase no es un palíndromo :("<<endl;
    }
    
    
    return 0;
}