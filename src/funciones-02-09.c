/*
 ============================================================================
 Name        : funciones-02-09.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

Ejercicio 4-2:
Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit ,
validando que las temperaturas ingresadas estén entre el punto de congelación y
ebullición del agua para cada tipo de escala.
Las validaciones se hacen en una biblioteca.
Las funciones de transformación de fahrenheit a celsius y de celsius a fahrenheit se hacen en otra biblioteca.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "utn.h"
#include "operaciones.h"

int main(void) {
	setbuf(stdout, NULL);

	validarEscalaTemperatura();


	return EXIT_SUCCESS;
}
