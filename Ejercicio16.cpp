/*Leer una línea de entrada. Descartar todos los símbolos excepto los dígitos. Convertir la cadena de dígitos en un entero y fijar
el valor del entero a la variable n y finalmente sumarle 2 (las funciones atoi y isdigit te pueden ayudar para este propósito)
Ejemplo: “En aproximadamente 120 días llegaremos al año 2022 y festejaremos” 1202022 -> 1202024*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
    string ingreso; //cadena string
    cout << "Ingrese cualquier linea de texto(con o sin numeros): ";
    getline(cin, ingreso);//lee completo
    
    string digits_only ="";
    for (size_t i=0;i<ingreso.size();++i){
        if (isdigit(ingreso[i])){ //Filtra la cadena
            digits_only+=ingreso[i];
        }
    }
    
    int n=0;
    
    if(!digits_only.empty()){
        n=atoi(digits_only.c_str()); //convierte la cadena a 'n'
        n+=2;
    }

    cout<<endl<<"La linea de números, sin los caracteres es de: "<<digits_only<<endl;
    cout<<"Y la misma línea de numeros sumando +2 es de: "<<n<<endl;

    return 0;
}