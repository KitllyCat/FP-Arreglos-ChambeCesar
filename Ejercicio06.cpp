#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int n,i=0;
	int pa=0, im=0;
	
	cout<<"Ingrese la cantidad de numeros que contendra el vector(n): ";
	cin>>n;
	
	int nums[n];
	
	do{
		cout<<"Ingrese el "<<i+1<<".- numero: ";
		cin>>nums[i];
		i++;
	}while(i < n);

	
	for(int i=0;i<n;i++){
		if(nums[i]%2==0){
			pa+=nums[i];
		}else{
			im+=nums[i];
		}
		
	}
	
	cout<<endl<<"La suma de números pares es de "<<pa<<endl;
    cout<<"La suma de números impares es de "<<im<<endl;
	
	return 0;
}
