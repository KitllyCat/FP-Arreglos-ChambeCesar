//Escriba una función que dado el nombre completo de una persona y un apellido, compruebe si el apellido pertenece a esa persona.
#include <iostream>
#include <windows.h>
using namespace std;

bool tieneApll(const char nombre[],const char apellido[]){
	int i=0,j=0;

    while(nombre[i] !='\0'){
        if(nombre[i]==apellido[0]){
            int k=i;

            while(apellido[j] !='\0' && nombre[k]==apellido[j]){
                j++;
                k++;
            }

            if(apellido[j]=='\0'){
                return true;
            }
        }
        i++;
    }

    return false;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    char nombre[100], apellido[50];

    cout<<"Ingrese el nombre completo: ";
    cin.getline(nombre, 100);

    cout<<endl<<"Ingrese el apellido a verificar si se encuentra en el nombre: ";
    cin.getline(apellido, 50);

    if (tieneApll(nombre, apellido)){
        cout<<endl<<"El apellido '"<<apellido<<"' si le pertenece a la persona (si existe)"<<endl;
    }else{
        cout<<endl<<"El apellido '"<<apellido<<"' no le pertenece a la persona (no existe)"<<endl;
    }

    return 0;
}