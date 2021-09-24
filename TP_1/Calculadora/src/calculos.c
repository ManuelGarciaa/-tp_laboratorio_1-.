//Calcular todas las operaciones
//a) Calcular la suma (A+B)
//b) Calcular la resta (A-B)
//c) Calcular la division(A/B)
//d) Calcular la multiplicacion (A*B)
//e) Calcular el factorial (A!)

#include "calculos.h"
#include <stdio.h>

int suma(int primero, int segundo) {
	int suma;

	suma = primero + segundo;

	return suma;
}
int resta(  int primero, int segundo) {
	int resta;

	resta = primero - segundo;
	return resta;
}
int producto(  int primero, int segundo) {
	int producto;

	producto = primero * segundo;

	return producto;
}

float division( int primero, int segundo) {
	float division;
	if (segundo == 0) {
		division = 0;
	} else {
		division = (float) primero / segundo;
	}
	return division;
}
int factorial(int primero) {
	int factorial = 1;
	if(primero < 0){
		factorial = 0;
	}else{
	for (int i = 1; i <= primero; i++) {
		factorial = factorial * i;
	}
	}
	return factorial;
}


