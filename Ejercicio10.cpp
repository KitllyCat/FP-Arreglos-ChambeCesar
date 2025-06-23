//Generar 30 números aleatorios entre 100 y 1000 guardarlos en un arreglo y
//calcular estadísticas de tendencia central media, mediana y moda.
#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;

void moda(){
	
	
	cout<<"La moda es de "<<endl;	
}

void media(int tam, int nums[]){
	int aux;
	for(int i=0;i<tam-1;i++){
		for(int j=i+1;j<tam;j++){
			if(nums[i]>nums[j]){
				aux=nums[i];
				nums[i]=nums[j];
				nums[j]=aux;
			}
		}
	}
	int media=(nums[14]+nums[15])/2;
	cout<<"La media es de "<<media<<endl;
	cout<<"Los numeros son:["<<nums[14]<<"] y ["<<nums[15]<<"]"<<endl<<endl;
}

void prom(){
	
	
	cout<<"La mediana es de "<<endl;
}
int main(){
	srand(time(0));
	SetConsoleOutputCP(CP_UTF8);
	const int tam=30;
	int nums[tam];

	cout<<"El programa generara 30 numeros random's, y luego procedera a mostrar la moda, media y mediana..."<<endl;
	cout<<endl;
	system("pause");
	system("cls");
	
	for(int i=0;i<tam;i++){
		nums[i]=rand()% 900+101;
	}
	
	cout<<"Los 30 numeros son:"<<endl<<"[";
	for(int i=0;i<tam;i++){
		cout<<nums[i];
		if(i<tam-1){
		cout<<", ";
		}
	}
	cout<<"]"<<endl<<endl;
	
	moda();
	media(tam,nums);
	prom();
	
	return 0;
}