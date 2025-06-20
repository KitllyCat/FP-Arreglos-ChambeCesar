//Comprobar si un número de 10 cifras es capicúa usando un vector.
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	const int tam = 10; //tamaño max del numero
	long long numero10; //tamaño mas amplio
	int nums[10], i=0;
	
	cout<<"Ingrese un número de 10 cifras para comprobar si es capicuo: ";
	cin>>numero10;

	long long inT = numero10;
	while (inT>0){
		i++;
		inT/=10;
	}
	if(i !=10){
		cout<<"Error, el número debe tener exactamente 10 cifras (sin ceros a la izquierda)"<<endl;
		return 1;
	}
	
	inT=numero10;
	
	cout<<inT;
	

	
	return 0;
}
