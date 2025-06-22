#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int n,i=0;
	
	cout<<"Ingresa la cantidad de elementos que contendra el vector:";
	cin>>n;
	cout<<endl;
	int elemT[n];
	
	do{
		cout<<"Ingrese el "<<i+1<<". elemento del vector: ";
		cin>>elemT[i];
		i++;
	}while(i<n);
		
	cout<<"El vector actual es:"<<endl<<"[";
	for(int i=0;i<n;i++){
		cout<<elemT[i];
		if(i<n-1){
		cout<<", ";
		}
	}
	cout<<"]"<<endl<<endl;
	int ulT=elemT[n-1];
	
	for(int i=n-1;i>0;i--){
        elemT[i]=elemT[i-1];
    }

	elemT[0]=ulT;
	
	cout<<"El vector rotado 1 posicion a la derecha es:"<<endl<<"[";
	for(int i=0;i<n;i++){
		cout<<elemT[i];
		if(i<n-1){
		cout<<", ";
		}
	}
	cout<<"]";
	
	return 0;
}
