//Instrucciones básicas
//CONDICIONALES
#include<iostream>//Librería de cabecera
using namespace std;

int main(){
    //definimos 3 variables
    int edad;
    cout<<"introduce tu edad: ";
    cin>> edad;
    if(edad>=18){
		//Rama verdadera
		cout<<"Eres mayor de edad ";
	}
	else{
		//Rama falsa
		cout<<"Eres menor de edad ";
	}
    return 0;
}
