/*
 * validacionesEingresos.c
 *
 *  Created on: 20 sep. 2021
 *      Author: Ludo LUDMILA DE PAZOS 1F
 */

#include "validacionesEingresos.h"
#include <stdio.h>


int ValidarMenu (int minimo,int maximo)
{
	int valorRetorno;
	int opciones;

	fflush(stdin);
	valorRetorno = scanf("%d",&opciones);

	while(!valorRetorno || opciones < minimo || opciones > maximo)
	{
			printf("Error ingrese un numero entre 1-5\n");
			printf("1.Ingresar 1er operando (A=0.00)\n");
			printf("2.Ingresar 2do operando (B=0.00)\n");
			printf("3.Calcular todas las operaciones:\n");
			printf("   a) Calcular la suma (A+B)\n");
			printf("   b) Calcular la resta (A-B)\n");
			printf("   c) Calcular la division (A/B)\n");
			printf("   d) Calcular la multiplicacion (A*B)\n");
			printf("   e) Calcular el factorial (A!)\n");
			printf("4.Informar resultados\n");
			printf("5.Salir\n");
			fflush(stdin);
		    valorRetorno = scanf("%d",&opciones);
	}
	return opciones;
}

float IngresarNumero()
{
	float numeroIngresado;
	int valorRetorno;

	fflush(stdin);
	valorRetorno = scanf("%f",&numeroIngresado);
	while(!valorRetorno)
	{
		printf("Error, ingrese un numero, no un caracter");
		fflush(stdin);
		valorRetorno = scanf("%f",&numeroIngresado);
	}

	return numeroIngresado;
}

void MostrarResultados(float suma,float resta, float division,float multiplicacion, int factorialA,int factorialB)
{
	printf("El resultado de A+B es: %.2f\n",suma);
	printf("El resultado de A-B es: %.2f\n",resta);
	printf("El resultado de A/B es: %.2f\n",division);
	printf("El resultado de A*B: %.2f\n",multiplicacion);
	printf("El factorial de A es: %d y el factorial de B es: %d\n",factorialA,factorialB);
}

