#include <iostream>
#include <windows.h>
using namespace std;

bool ordnYverf(int nums[], int tam) {
    for(int i=0;i<tam-1;i++){
        if(nums[i]>nums[i+1]){
            return false; 
        }
    }
    return true;
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
