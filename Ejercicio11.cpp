//Calcular la suma de elementos positivos y negativos en un arreglo
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int n,i=0;
	double sumP=0, sumN=0;
	int trash=0,contP=0,contN=0;
	
	cout<<"Ingresa la cantidad de elementos que contendra el arreglo:";
	cin>>n;
	cout<<endl;
	int nums[n];
	
	do{
		cout<<"Ingrese el "<<i+1<<". numero: ";
		cin>>nums[i];
		i++;
	}while(i<n);
	
	for(int i=0;i<n;i++){
		if(nums[i]>0){
			sumP+=nums[i];
			contP++;
		}else if(nums[i]<0){
			sumN+=nums[i];
			contN++;
		}else if(nums[i]==0){
			trash++;	
		}
	}
	
	cout<<endl;
	cout<<"La suma de los números positivos es de: "<<sumP<<" ("<<contP<<" numeros positivos)"<<endl;
	cout<<"La suma de los números negativos es de: "<<sumN<<" ("<<contN<<" numeros negativos)"<<endl;
	cout<<"Cantidad de ceros encontrados: "<<trash<<endl;
	
	return 0;
}
