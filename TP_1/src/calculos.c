/*
 * calculos.c
 *
 *  Created on: 20 sep. 2021
 *      Author: Ludo LUDMILA DE PAZOS 1F
 */

#include "calculos.h"

float SumarNumeros(float numeroA,float numeroB)
{
	float resultadoSuma;

	resultadoSuma = numeroA + numeroB;

	return resultadoSuma;
}

float RestarNumeros(float numeroA,float numeroB)
{
   float resultadoResta;

   resultadoResta = numeroA - numeroB;

   return resultadoResta;
}

float DividirNumeros(float numeroA,float numeroB)
{
	float resultadoDivision;

	if(numeroB != 0)
	{
		resultadoDivision = numeroA/numeroB;
	}
	else
	{
		printf("No es posible dividir por cero\n");
	}

	return resultadoDivision;
}

float MultiplicarNumeros(float numeroA,float numeroB)
{
	float resultadoMultiplicacion;

	resultadoMultiplicacion = numeroA * numeroB;

	return resultadoMultiplicacion;
}

int CalcularFactorial(float numero)
{
	int i;
	int factorial;
	factorial = 1;

	numero = (int) numero;

	if(numero>0 && numero<12)
	{
		for(i = numero ; i > 0 ; i-- )
		{
			factorial = factorial * i;
		}
	}
	else
	{
		printf("Para calcular factorial ingrese numeros entre 1 - 12\n");
	}

	return factorial;
}



