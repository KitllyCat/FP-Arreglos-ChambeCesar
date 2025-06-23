//Generar 30 números aleatorios entre 100 y 1000 guardarlos en un arreglo y
//calcular estadísticas de tendencia central media, mediana y moda.
#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int calcularModa(int vec[], int tam, int& frecuenciaMax){
    int moda = vec[0];
    frecuenciaMax = 1;
    
    for(int i = 0; i < tam; i++) {
        int contador = 1;
        for(int j = i + 1; j < tam; j++) {
            if(vec[i] == vec[j]) {
                contador++;
            }
        }
        if(contador > frecuenciaMax) {
            frecuenciaMax = contador;
            moda = vec[i];
        }
    }
    return moda;
}

void moda(int nums[],int tam){
	int moda=nums[0];
	int numRep=1,i=0;
	
	for(i=0;i<tam;i++){
		int cont=1;
        for(int j=i+1;j<tam;j++){
            if(nums[i]==nums[j]){
                cont++;
            }
        }
        if(cont>numRep){
            numRep=cont;
            moda=nums[i];
        }
    }
	cout<<"La moda es de "<<moda<<" (se repite en "<<numRep<<" ocasiones)"<<endl<<endl;
	//obs, si no hay ningun numero que se repita, solo se tomara el primer numero como moda, puesto que nadie ocuparia su lugar
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
	double media=(nums[14]+nums[15])/2;
	cout<<"La media es de "<<media<<endl;
	cout<<"Los numeros son:["<<nums[14]<<"] y ["<<nums[15]<<"]"<<endl<<endl;
}

void prom(int nums[], int tam){
	double sum=0, prom=0;
	for(int i=0;i<tam;i++){
		sum+=nums[i];
	}
	prom=sum/tam;
	
	cout<<"La mediana es de "<<prom<<" ("<<sum<<"/30)"<<endl;
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
	
	moda(nums,tam);
	media(tam,nums);
	prom(nums,tam);
	
	return 0;
}