#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <unistd.h>
#include "operaciones.h"

using namespace std;

int main (){
	int n1, n2, res, opc;
	Operaciones *op=NULL;
	do{
		system("clear");
		cout << "Introduzca un numero: "; cin >> n1;
		cout << "Introduzca otro numero: "; cin >> n2;
		if ((n1 > -1) && (n2 > -1)){
			cout << "Calculando ."<< endl;
			usleep (500000);
			cout << "Calculando .."<< endl;
			usleep (500000);
			cout << "Calculando ..."<< endl;
			usleep (500000);
			system("clear");
			res = op->Suma (n1, n2);
				cout << "Suma: "<< res << endl;
			res = op->Resta (n1, n2);
				cout << "Resta: "<< res << endl;
			res = op->Multiplicacion (n1, n2);
				cout << "Multiplicacion: "<< res << endl;
			if (n2 == 0){
				cout << "Division: Con 0 no se puede" << endl;
			}else{
				res = op->Division (n1, n2);
					cout << "Division: "<< res << endl;
			}					
				res = op->Potencia (n1, n2);
			 		cout << "Potencia: "<< res << endl;
				if (n2 == 0){
					cout << "Resto: Con 0 no se puede" << endl;
				}else{
					res = op->Resto (n1, n2);
					cout << "Resto: "<< res << endl;
				}
				cout << endl << "Seguir (1)/ Salir (0)"<< endl;
				cout << "Elija opcion: "; cin >> opc;
		}else{
			cout << endl << "Ingresar numeros enteros" ; cin.get(); cin.get();
		}
	  }while (opc != 0);
	  return (0);
}

