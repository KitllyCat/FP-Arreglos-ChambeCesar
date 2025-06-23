#include <iostream>
#include <windows.h>
using namespace std;

bool compParnt(const char frase[]){
    int balc=0;

    for (int i=0;frase[i] !='\0';i++){
        if (frase[i] =='('){
            balc++;
        }else if(frase[i] ==')'){
            balc--;
        }else if(frase[i] =='('){
            balc--;
		}
    }
	if(balc<0){ 
        return false;
    }else{
    	return (balc==0);
	}
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    char frase[250];
    
    cout<<"Ingrese cualquier una frase con paréntesis: ";
    cin.getline(frase, 250);

    if (compParnt(frase)){
        cout<<endl<<"La frase tiene un balanceo de paréntesis correcto"<<endl;
    }else{
        cout<<endl<<"La frase tiene un balanceo de paréntesis incorrecto"<<endl;
    }

    return 0;
}