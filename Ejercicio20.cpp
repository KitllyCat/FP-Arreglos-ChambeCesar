//Solicite al contador del almacén La Milagrosa el monto de las ventas mensuales de todo el año 2020.
//Luego, el contador desea obtener los siguientes resultados:
//• Valor de la venta mensual promedio.
//• Obtenga el porcentaje de los meses del año que cumplieron los siguientes niveles de ventas:
//• Indique los nombres de los meses (enero, febrero, etc.) en los cuales la venta fue Excelente.
#include <iostream>
#include <windows.h>
using namespace std;

void calcProm(double *prom){
	
	cout<<"Promedio mensual de las ventas de todo el año: "<<prom<<endl;
}

void mesExit(double prom){
	
}

void cuadro(){
	
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
	const int numMes = 12;
	string mes[12]={"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio","Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
	double ventas[numMes];
	double prom=0;
	int i=0;
	char opcion;
	
	cout<< "--- Almacen la Milagrosa ---"<<endl<<endl;
   	cout<<"Realiza el almacenamiento de datos para continuar: "<<endl;
   	system("pause");
	
	do{
		cout<<"Ingrese la cantidad total de ventas del mes de "<<mes[i]<<".";
		cin>>ventas[i];
		i++;
	}while(i<numMes);
	
	do{
		cout<< "--- Almacen la Milagrosa ---"<<endl<<endl;
    	cout<<"Escoja la opcion que desee:"<<endl<<endl;
    	cout<<"1) Calcular la venta mensual promedio"<<endl;
		cout<<"2) Mostrar cuales meses la venta fue excelente"<<endl;
    	cout<<"3) Enseñar el cuadro de porcentaje de exito"<<endl;
    	cout<<"4) Salir del programa..."<<endl<<endl;
    	cout<<"Seleccione una opción: ";
        cin>>opcion;
        switch (opcion){
            case 1:
                calcProm(*prom);
                break;
            case 2:
                calcProm();
                mesExit(prom);
                break;
            case 3:
                cuadro();
                break;
            case 4:
                cout <<"Saliendo del programa...";
                break;
            default:
                cout<<"Opción no válida!!! Intente de nuevo.";
        }
    	
    	
	}while(opcion!=4);
	
    return 0;
}