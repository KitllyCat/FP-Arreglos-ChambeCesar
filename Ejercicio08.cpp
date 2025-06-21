//Comprobar si un número de 10 cifras es capicúa usando un vector.
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	const int tam = 10; //tamaño max del numero
	long long numero10; //tamaño mas amplio
	int nums[10], i=0, capicua=0;
	
	cout<<"Ingrese un número de 10 cifras para comprobar si es capicuo: ";
	cin>>numero10;

	long long inT = numero10;
	
	while (inT>0){
		i++;
		inT/=10;
	}
	if(i !=10){
		cout<<"Error, el número debe tener exactamente 10 cifras (o sin ceros a la izquierda)"<<endl;
		return 1;
	}
	inT=numero10;
	
	for(int i=tam-1;i>=0;i--){
		nums[i]=inT%10;
		inT/=10;	
	}

	for(int i=0;i<(tam/2);i++){
		if (nums[i]!=nums[tam-1-i]){
			capicua=1;
			break;
		}else{
			capicua=2;
			break;
		}
	}

	if(capicua=1){
		cout<<"El numero '"<<numero10<<"' si es capicua..."<<endl;
	}else if(capicua=2){
		cout<<"El numero '"<<numero10<<"' no es capicua..."<<endl;
	}
	
	return 0;
}
