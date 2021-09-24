#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

int pedirOperando(char mensaje[]) {
	int operando;
	printf("%s", mensaje);
	scanf("%d", &operando);

	printf("\nEl operando ingresado es: %d\n", operando);
	return operando;
}

void MostrarCalculos(int adicion,int sustraccion,int multiplicacion,float cociente,int primerFac,int segFac){
	printf("\nLa suma es: %d\n",adicion);
	printf("\nLa resta es: %d\n",sustraccion);
	if(cociente == 0){
		printf("\nNo se puede dividir por cero\n");
	}else{
	printf("\nLa division es: %.2f\n",cociente);
	}
	printf("\nLa multiplicacion es: %d\n",multiplicacion);
	if(primerFac == 0){
		printf("\nNo se puede hacer factorial de un numero negativo\n");
	}else{
	printf("\nEl factorial del primer operando es: %d\n",primerFac);
	}
	if(segFac == 0){
		printf("\nNo se puede hacer factorial de un numero negativo\n");
	}else{
	printf("\nEl factorial del segundo operando es: %d\n",segFac);
	}
}
