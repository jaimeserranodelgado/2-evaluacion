#include<iostream>//libreria de cabecera
//Intrucciones basicas
// for
using namespace std;

int main(){
	int cont;
	int n_tabla;
	cout<<"Dime que tabla deseas: ";
	cin>>n_tabla;
	cout<<"**      Tabla del"<<n_tabla<<"  *"<<endl;
	for(cont=0;cont<=10;cont++){
		cout<<n_tabla<<" x "<<cont<<" = "<<n_tabla*cont<<endl;
	}
	return 0;
}
