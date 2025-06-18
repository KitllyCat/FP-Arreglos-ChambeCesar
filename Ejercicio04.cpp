#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int n,i=0;
	int cont=0;
	cout<<"Ingrese la cantidad de nombres que va añadir: ";
	cin>>n;
	
	char nombres[n];
	
	do{
		i++;
		cout<<"Ingrese el "<<i<<". nombre: ";
		cin>>nombres[i];
		
	}while(i < n);
	
	system("cls");
	
    //for para ordenar los nombres;
    
    for(int i=0;i<n+1;i++){
    	cout<<nombres[i]<<endl;
	}
	
	return 0;
}
