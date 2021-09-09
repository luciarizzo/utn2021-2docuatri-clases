/*
 ============================================================================
 Name        : 5-2--arrays--08-09.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :
 Ejercicio 5-2:
Pedir el ingreso de 10 números enteros entre -1000 y 1000.
Determinar:
- Cantidad de positivos y negativos.
- Sumatoria de los pares.
- El mayor de los impares.
- Listado de los números ingresados.
- Listado de los números pares.
- Listado de los números de las posiciones impares.
- Se deberán utilizar funciones y vectores.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "utn.h"
#include "operaciones.h"
#define T 5

int main(void) {
	setbuf(stdout, NULL);
	int listaNumeros[T];
	int max;
	cargarArray(listaNumeros, T);
	max = buscarMaximo(listaNumeros, T);
	mostrarArray(listaNumeros, T);
	mostrarIndiceMaximo(listaNumeros, T, max);

	return EXIT_SUCCESS;
}
