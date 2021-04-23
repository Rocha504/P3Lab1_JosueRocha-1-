#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main(int argc, char** argv) {
	
	int op=0;
	
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
	if(op>4 || op<1){
		cout<<"*WARNING*: Opcion invalida"<<endl;
	}
	
	}
	
	
	
	
	
	return 0;
}