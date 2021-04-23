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
				cout<<"Porfavor ingrese un numero mayor a 0"<<endl;
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
		break;
		case 2:{
			int sum,acum=0;
			cout<<"Ingrese un numero entero positivo para su sumatoria: "<<endl;
			cin>>sum;
			if(sum<=0){
				cout<<"Porfavor ingrese un entero positivo"<<endl<<endl;
			}
			else{
				for(int i=1;i<=sum;i++){
					acum=acum+2*i*(i-1);
				}
				cout<<"El resultado de la sumatoria es de: "<<acum<<endl<<endl; 
			}
		 
		}
			break;	
			case 3:{
				double n,mult,mitad,div,raiz;
				int t;
				cout<<"Ingrese un numero entero: "<<endl;
				cin>>n;
				cout<<"Ingrese un numero entero mayor a diez"<<endl;
				cin>>t;
				if(t>10){
					mitad=n/2;
					for(int i=0;i<t;i++){
					    mult=mitad*mitad;
					    if(mult>n){
					   	  mitad=mitad/2;
						}
					    	else if(mult<n){
					    		mitad=mitad+0.1;
							}
						
						else if(mult==n){
							cout<<"La raiz cuadrada es: "<<mitad;
						}
					}
					cout<<"La raiz cuadrada estimada es: "<<mitad;
					 
				}
				else{
					cout<<"Porfavor ingrese un numero mayor a 10"<<endl; 
				}
		}
		break;
	}
			 
			
			
	}
	
		return 0;
	}
	
 
