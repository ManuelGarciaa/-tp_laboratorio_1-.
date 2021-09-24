



#include "menu.h"
#include <stdio.h>
#include <stdlib.h>

int menu(){

	int opcion;

	printf("\n1 - Cargar primer operando");
	printf("\n2 - Cargar segundo operando");
	printf("\n3 - Calcular todas las operaciones");
	printf("\n4 - Mostrar resulados");
	printf("\n5 - Salir");

	printf("\nElija una opcion: ");

	scanf("%d", &opcion);

	return opcion;
}
