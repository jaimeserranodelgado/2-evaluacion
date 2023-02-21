//Instrucciones básicas
//condicional multiple
#include<iostream>//Librería de cabecera
using namespace std;

int main(){
    //definimos 3 variables
    int resp;
    cout<<"*******************************"<<endl;
    cout<<"*         Menu                *"<<endl;
    cout<<"*******************************"<<endl;
    cout<<"1.   volver a mostrar el menu"<<endl;
    cout<<"2. despedirme"<<endl;
    cout<<"3. salir"<<endl;
    cout<<"ELIGE UNA OPCION (1,2 o 3) ";
    cin>> resp;
    switch(resp){
    	case 1:
    		    cout<<"*******************************"<<endl;
    			cout<<"*         Menu                *"<<endl;
    			cout<<"*******************************"<<endl;
    			cout<<"1.   volver a mostrar el menu"<<endl;
    			cout<<"2. despedirme"<<endl;
    			cout<<"3. salir";
    			cout<<"ELIGE UNA OPCION (1, 2 o 3) ";
    		break;
    	case 2:
    		cout<<"estas despedido";
    		break;
    	case 3:
    		break;
    	default:
    		cout<<"No has elegido ninguna opcion";
    		
	}
    
    return 0;
}
