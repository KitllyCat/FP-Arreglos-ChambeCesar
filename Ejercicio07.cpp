#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int n,i=0;
	cout<<"Ingrese la cantidad de numeros que contendra el vector(n): ";
	cin>>n;
	
	int nums[n];
	
	do{
		cout<<"Ingrese el "<<i+1<<". numero: ";
		cin>>nums[i];
		i++;
	}while(i < n);
	
	cout<<"El vector actual es [";
	for(int i=0;i<n;i++){
		cout<<nums[i];
		if(i<n-1){
			cout<<", ";
		}
	}
	cout<<"]"<<endl<<endl;
	
	for(int i=0;i<n/2;i++){
		int invV=nums[i];
		nums[i]=nums[n-1-i];
		nums[n-1-i] = invV;
	}
	
	cout<<"El vector invertido es [";
	for(int i=0;i<n;i++){
		cout<<nums[i];
		if(i<n-1){
			cout<<", ";
		}
	}
	cout<<"]"<<endl;
	
	return 0;
}
