//Solicite al contador del almacén La Milagrosa el monto de las ventas mensuales de todo el año 2020.
//Luego, el contador desea obtener los siguientes resultados:
//• Valor de la venta mensual promedio.
//• Obtenga el porcentaje de los meses del año que cumplieron los siguientes niveles de ventas:
//• Indique los nombres de los meses (enero, febrero, etc.) en los cuales la venta fue Excelente.
#include <iostream>
#include <windows.h>
using namespace std;
const int numMes = 12;
string mes[12]={"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio","Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

double calcProm(double ventas[]){
    double suma=0;
    for (int i=0;i<numMes;i++){
        suma+=ventas[i];
    }
    double prom=suma/numMes;
    cout<<"El promedio mensual de las ventas de todo el año es de: "<<prom<<endl<<endl;
    return prom;
}

void mesExit(double ventas[], double prom){
    cout<<"Meses con ventas EXCELENTES~!!! (más del 75% del promedio): "<<endl;
    for(int i=0;i<numMes;i++){
        if(ventas[i]>prom*0.75){
            cout<<"- "<<mes[i]<<endl;
        }
    }
}

void cuadro(){
    cout<<"Nivel ventas\tDescripcion"<<endl;
    cout<<"-------------\t-----------------------------------------------------"<<endl;
    cout<<"Minimo\t\tMenos del 40% del promedio anual de ventas"<<endl;
    cout<<"Regular\t\tEntre el 40% a 75% del promedio de ventas"<<endl;
    cout<<"Excelente\tMas del 75% del promedio mensual"<<endl<<endl;
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
	double ventas[numMes];
	double prom=0;
	int i=0;
	int opcion;
	
	cout<< "--- Almacen la Milagrosa ---"<<endl<<endl;
   	cout<<"Realiza el almacenamiento de datos para continuar: "<<endl;
   	system("pause");
	
	do{
		cout<<"Ingrese la cantidad total de ventas del mes de "<<mes[i]<<": ";
		cin>>ventas[i];
		i++;
	}while(i<numMes);
	system("cls");
	do{
		cout<<endl<<"--- Almacen la Milagrosa ---"<<endl<<endl;
    	cout<<"Escoja la opcion que desee:"<<endl<<endl;
    	cout<<"1) Calcular la venta mensual promedio"<<endl;
		cout<<"2) Mostrar cuales meses la venta fue excelente"<<endl;
    	cout<<"3) Enseñar el cuadro de porcentaje de exito"<<endl;
    	cout<<"4) Salir del programa..."<<endl<<endl;
    	cout<<"Seleccione una opción: ";
        cin>>opcion;
        switch (opcion){
            case 1:
                prom=calcProm(ventas);
                system("pause");
                system("cls");
				break;
            case 2:
                mesExit(ventas, prom);
                system("pause");
                system("cls");
                break;
            case 3:
                cuadro();
                system("pause");
                system("cls");
                break;
            case 4:
                cout <<"Saliendo del programa..."<<endl;
                break;
            default:
                cout<<"Opción no válida!!! Intente de nuevo."<<endl;
                system("pause");
                system("cls");
        }
	}while(opcion!=4);
	
    return 0;
}