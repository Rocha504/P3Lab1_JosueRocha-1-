#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main(int argc, char** argv) {
	
	int op=0,i=0, i2=0, op2;
	
	while(op!=4){
	
	cout<<"BIENVENIDO A MI PRIMER LAB CON C++"<<endl<<endl;
	cout<<"            MENU"<<endl;
	cout<<"Porfavor seleccione una opcion"<<endl<<endl;
	cout<<"1. Imprimir Tablero de Ajedrez."<<endl;
	cout<<"2. Realizar una Sumatoria."<<endl;
	cout<<"3. Raiz cuadrada por iteraciones"<<endl;
	cout<<"4.Salir"<<endl<<endl;
	cout<<"Ingrese un numero"<<endl;
	cin>>op;
	switch(op){
		case 1:{
			cout<<"Ingrese un numero: ";
			cin>>op2;
			if(op2<1){
				cout<<"Porfavor ingrese un numero mayor a 0";
				cin>>op2;
			}
			while(i2<op2){
				if(i2%2!=0){
					while(i<op2){
						cout<<"1";
						i++;
						cout<<"0";
						i++;
					}
				}
				else{
					while(i<op2){
						cout<<"0";
						i++;
						cout<<"1";
						i++;
					}
				}
			    cout<<endl;
				i2++;
				i=0;	
			}
			 
		}	 
	}
			break;
			
			
	}
	
		return 0;
	}
	
 
