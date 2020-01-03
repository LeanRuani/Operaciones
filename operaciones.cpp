#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "operaciones.h"

using namespace std;

void Operaciones::Operacion (int x,int y){
	Num1 = x;
	Num2 = y;
}

int Operaciones::Suma(int x,int y){
	return (x + y);
}

int Operaciones::Resta(int x,int y){
	return (x - y);
}

int Operaciones::Multiplicacion(int x,int y){
	return (x * y);
}

int Operaciones::Division(int x,int y){
	return (float(x / y));
}

int Operaciones::Potencia(int x,int y){
	if (y > 0){
		return (x * (Potencia(x, y-1)));
	}
	return (1);
}

int Operaciones::Resto(int x,int y){
	if (x > y){
		return (Resto((x - y),y));
	}
		return (x);
}

