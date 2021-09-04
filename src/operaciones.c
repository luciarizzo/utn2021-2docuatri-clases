/*
 * operaciones.c
 *
 *  Created on: 2 sep. 2021
 *      Author: Luc�a
 */

#include <stdio.h>
#include <stdlib.h>

int sumar(int primerNumero, int segundoNumero) {
	int retorno;
	int resultadoSuma;
	resultadoSuma = primerNumero + segundoNumero;
	retorno = resultadoSuma;
	return retorno;
}

int restar(int primerNumero, int segundoNumero) {
	int retorno;
	int resultadoResta;
	resultadoResta = primerNumero - segundoNumero;
	retorno = resultadoResta;
	return retorno;
}

float dividir(int primerNumero, int segundoNumero) {
	int retorno;
	float resultadoDivision;
	if (segundoNumero == 0) {
		retorno = -1;
	} else {
		resultadoDivision = primerNumero / (float) segundoNumero;
		retorno = resultadoDivision;
	}
	return retorno;
}

int multiplicar(int primerNumero, int segundoNumero) {
	int retorno;
	float resultadoMultiplicacion;
	resultadoMultiplicacion = primerNumero * segundoNumero;
	retorno = resultadoMultiplicacion;
	return retorno;
}


int realizarFactorial(int numero) {
	int retorno;
	int resultadoFactorial = 1;
	if (numero < 0) {
		retorno = -1;
	} else if (numero == 0) {
		retorno = 1;
	} else {
		for (int i = 1; i <= numero; i++) {
			resultadoFactorial = resultadoFactorial * i;
			retorno = resultadoFactorial;
		}
	}
	return retorno;
}


