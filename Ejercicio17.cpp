//Escriba una función que dado el nombre completo de una persona y un apellido, compruebe si el apellido pertenece a esa persona.
#include <iostream>
#include <windows.h>
using namespace std;

bool tieneApll(const char nombre[], const char apellido[]){
	
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    char nombre[100], apellido[50];

    cout<<"Ingrese el nombre completo: ";
    cin.getline(nombre, 100);

    cout<<endl<<"Ingrese el apellido a verificar si se encuentra en el nombre: ";
    cin.getline(apellido, 50);

    if (tieneApll(nombre, apellido)){
        cout<<"El apellido si le pertenece a la persona (si existe)"<<endl;
    }else{
        cout<<"El apellido no le pertenece a la persona (no existe)"<<endl;
    }

    return 0;
}