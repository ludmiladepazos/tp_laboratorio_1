/*
 ============================================================================
 Name        : tp1calculadora.c
 Author      : Ludmila
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
 ============================================================================
 LUDMILA DE PAZOS 1F */

#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"
#include "validacionesEingresos.h"

int main(void)
{
	setbuf(stdout,NULL);

	int opciones;
	float numeroA;
	float numeroB;
	float resultadoSuma;
	float resultadoResta;
	float resultadoDivision;
	float resultadoMultiplicacion;
	int factorialA;
	int factorialB;
	int flagA;
	int flagB;
	int flagC;
	flagA = 0;
	flagB = 0;
	flagC = 0;

	do
	{
		printf("1.Ingresar 1er operando (A=%.2f)\n",numeroA);
		printf("2.Ingresar 2do operando (B=%.2f)\n",numeroB);
		printf("3.Calcular todas las operaciones\n");
		printf("   a) Calcular la suma (A+B)\n");
		printf("   b) Calcular la resta (A-B)\n");
		printf("   c) Calcular la division (A/B)\n");
		printf("   d) Calcular la multiplicacion (A*B)\n");
		printf("   e) Calcular el factorial (A!)\n");
		printf("4.Informar resultados\n");
		printf("5.Salir\n");
		opciones = ValidarMenu(1,5);

		switch(opciones)
		{
			case 1:
				numeroA = IngresarNumero();
				flagA = 1;
				break;

			case 2:
				numeroB = IngresarNumero();
				flagB = 1;
				break;

			case 3: //calculos
				if(flagA == 1 && flagB == 1)
				{
					resultadoSuma = SumarNumeros(numeroA,numeroB);
					resultadoResta = RestarNumeros(numeroA,numeroB);
					resultadoDivision = DividirNumeros(numeroA,numeroB);
					resultadoMultiplicacion = MultiplicarNumeros (numeroA,numeroB);
					factorialA = CalcularFactorial(numeroA);
					factorialB = CalcularFactorial(numeroB);

					flagC = 1;
				}
				else
				{
					printf("No puede acceder a la opcion 3 ya que no ingreso ambos numeros\n");
				}
				break;

			case 4: //mostrarResultados
				if(flagC == 1)
				{
					MostrarResultados(resultadoSuma,resultadoResta,resultadoDivision,resultadoMultiplicacion,factorialA,factorialB);
				}
				else
				{
					printf("No puede acceder a la opcion 4 ya que no ingreso datos para calcular\n");
				}
				break;

			case 5:
				printf("Hasta la proxima\n");
				break;
		}

	}while(opciones != 5);

	return EXIT_SUCCESS;
}




