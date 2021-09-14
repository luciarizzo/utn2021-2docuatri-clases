/*
 ============================================================================
 Name        : 5-2--arrays--08-09.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :
 Ejercicio 5-2:
 Pedir el ingreso de 10 n�meros enteros entre -1000 y 1000.
 Determinar:
 - Cantidad de positivos y negativos. LISTO
 - Sumatoria de los pares. LISTO
 - El mayor de los impares. LISTO
 - Listado de los n�meros ingresados. LISTO
 - Listado de los n�meros pares. LISTO.
 - Listado de los n�meros de las posiciones impares. LISTO
 - Se deber�n utilizar funciones y vectores.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "utn.h"
#include "operaciones.h"
#define T 2

int main(void) {
	setbuf(stdout, NULL);
	int listaNumeros[T];
	int contadorNumerosPares;
	int contadorNumerosImpares;
	int sumaPares;

	cargarArray(listaNumeros, T);

	/* fx que muestra cantidad de positivos y negativos. */
	contadorNumerosPositivosNegativos(listaNumeros, T);

	/*fx que suma numeros (en este caso pares)*/
	sumarNumerosPares(&sumaPares, listaNumeros, T);
	printf("\nLa sumatoria de los numeros pares es %d\n", sumaPares);

	/*fx que muestra el mayor de los impares*/
	contadorImpares(&contadorNumerosImpares, listaNumeros, T);

	/* fx que muestra listado de los n�meros ingresados.*/
	mostrarArray(listaNumeros, T);

	/*fx imprime cada uno de los pares ingreados list�ndolos, ac� dice el total:*/
	contadorPares(&contadorNumerosPares, listaNumeros, T);
	printf("La cantidad de pares es %d\n", contadorNumerosPares);

	/*fx imprime numeros de posiciones impares */
	mostrarContenidoPosicionesImpares(listaNumeros, T);









	return EXIT_SUCCESS;
}
