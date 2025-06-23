//Implementar una función que reciba un vector, su longitud y retorne true si el mismo se encuentra ordenado, false en caso contrario.
#include <iostream>
#include <windows.h>
using namespace std;

bool ordnYverf(int nums[], int tam) {
    for(int i=0;i<tam-1;i++){
        if(nums[i]>nums[i+1]){
            return false; // Si hay un elemento mayor al siguiente, no está ordenado
        }
    }
    return true; // Si pasa todo el ciclo sin romper, está ordenado
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int n,i=0;
	
	cout<<"Ingresa la cantidad de elementos que contendra el vector:";
	cin>>n;
	cout<<endl;
	int nums[n];
	
	do{
		cout<<"Ingrese el "<<i+1<<". numero: ";
		cin>>nums[i];
		i++;
	}while(i<n);
	int tam=sizeof(nums)/sizeof(nums[0]);
	
	ordnYverf(nums, tam);
	
	if (ordnYverf(nums,tam)){
        cout<<endl<<"El arreglo si está ordenado de menor a mayor.\n"<<endl;
    } else{
        cout<<endl<<"El arreglo no está ordenado :("<<endl;
    }
	
	return 0;
}