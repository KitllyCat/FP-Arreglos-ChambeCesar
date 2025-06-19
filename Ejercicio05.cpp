#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int n,i;
	
	cout<<"Ingrese la cantidad de numeros que va comparar: ";
	cin>>n;
	
	int nums[n];
	
	do{
		cout<<"Ingrese el "<<i+1<<".- numero: ";
		cin>>nums[i];
		i++;
	}while(i < n);
	
	int numMay=nums[0], numMen=nums[0];
	
	for(int i=0;i<n;i++){
		if (nums[i]>numMay){
            numMay=nums[i];
        }
        if (nums[i]<numMen){
            numMen=nums[i];
        }
    }
    
    cout<<endl<<"El número mayor es "<<numMay<<endl;
    cout<<"El número menor es "<<numMen<<endl;
	return 0;
}
