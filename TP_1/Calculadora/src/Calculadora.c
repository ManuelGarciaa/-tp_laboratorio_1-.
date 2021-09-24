/*
 ============================================================================
 Name        : Calculadora.c
 Author      : GARCIA MANUEL OMAR
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "funciones.h"
#include "calculos.h"

int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	int primero;
	int segundo;
	int adicion;
	int sustraccion;
	float cociente;
	int multiplicacion;
	int primerFac;
	int segFac;

	do {
		opcion = menu();

		switch (opcion) {
		case 1:
			printf("\nUsted eligio: Cargar primer operando\n");
			primero = pedirOperando("\nIngrese el primer operando: ");
			break;
		case 2:
			printf("\nUsted eligio: Cargar segundo operando\n");
			segundo = pedirOperando("\nIngrese el segundo operando: ");
			break;
		case 3:
			printf("\nUsted eligio: Calcular los resultados\n");
			adicion = suma(primero, segundo);
			sustraccion = resta(primero, segundo);
			multiplicacion = producto(primero, segundo);
			cociente = division(primero, segundo);
			primerFac = factorial(primero);
			segFac = factorial(segundo);
			break;
		case 4:
			printf("\nUsted eligio: Mostrar los resultados\n");
			MostrarCalculos(adicion, sustraccion, multiplicacion, cociente,primerFac, segFac);
			break;
		case 5:
			printf("\nUsted eligio: Salir");
			break;
		}

	} while (opcion != 5);
	return 0;
}
