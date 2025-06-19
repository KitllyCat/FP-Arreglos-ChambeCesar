#include <iostream>
#include <windows.h>
#include <string> //se uso la libreria string para las cadenas de texto
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int n,i=0;
	int cont=0;
	cout<<"Ingrese la cantidad de nombres que va añadir: ";
	cin>>n;
	
	string nombres[n];
	
	do{
		cout<<"Ingrese el "<<i+1<<". nombre: ";
		cin>>nombres[i];
		i++;
	}while(i < n);
	
	system("cls");
	
    for (int i=0; i<n - 1; i++){
		for (int j=0; j<n-i-1; j++){
			if (nombres[j]>nombres[j + 1]){
				swap(nombres[j],nombres[j + 1]); //swap para invertir pocision de letras
			}
		}
	}
    
    for(int i=0;i<n;i++){
		cout<<i+1<<"._ "<<nombres[i]<<endl;
	}
	
	return 0;
}
