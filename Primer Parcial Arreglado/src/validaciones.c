/*
 * validaciones.c
 *
 *  Created on: 13 oct. 2021
 *      Author: Ludo
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "validaciones.h"
#include "cliente.h"



int MenuPrincipal (void)
{
	int opciones;

	printf(" 1)ALTA CLIENTE\n 2)MODIFICAR DATOS CLIENTE\n 3)BAJA CLIENTE\n 4)Crear Pedido de Recoleccion\n 5)Procesar Residuos\n"
	" 6)Imprimir Clientes\n 7)Imprimir Pedidos Pendientes\n 8)Imprimir Pedidos Procesados\n"
	" 9)Pedidos Pendientes Por Localidad\n 10)Cantidad de kilos de Polipropileno Reciclado Promedio por Cliente\n 11)Pedidos Pendientes\n 12)Pedidos completados\n 13)SALIR\nIngrese una opcion: ");

	scanf("%d",&opciones);
	return opciones;
}


int myGets (char* cadena,char mensaje[] ,int longitud) //char nombre [200] myGets(nombre,sizeof(nombre)) sizeof le manda el tama�o
{
	int retorno = -1;

	char bufferString [50];

	printf("%s",mensaje);

	if(cadena != NULL && longitud > 0)
	{
		fflush(stdin);
		if(fgets(bufferString,sizeof(bufferString),stdin) != NULL)
		{
			if(bufferString[strnlen(bufferString,sizeof(bufferString))-1] == '\n')
			{
				bufferString[strnlen(bufferString,sizeof(bufferString))-1] = '\0';
			}
			if(strnlen(bufferString,sizeof(bufferString)) <= longitud)
			{
				strncpy(cadena,bufferString,longitud);
				retorno = 0;
			}
		}//leer de un archivo una cadena de caracteres
	}
	return retorno;
}

int getString(char* cadena, int limite)
{
	int retorno = -1;
	char bufferString[4096];

	if(cadena != NULL && limite > 0 && fgets(bufferString, sizeof(bufferString), stdin) != NULL)
	{
		fflush(stdin);
		if(bufferString[strlen(bufferString) - 1] == '\n')
		{
			bufferString[strlen(bufferString) - 1] = '\0';
		}
		strncpy(cadena, bufferString, limite);
		retorno = 0;
	}
	return retorno;
}


int getFloat(float *pflotante)
{
	int retorno = -1;
	char bufferInt[64];

	if(pflotante != NULL)
	{
		fflush(stdin);
		if(getString(bufferInt, sizeof(bufferInt)) == 0 && validarDecimal(bufferInt, sizeof(bufferInt)))
		{
			*pflotante = atof(bufferInt);
			retorno = 0;
		}
	}
	return retorno;
}
int utn_getNumeroFlotante( float * pNumero,char * pMensaje,char * pMensajeError,float min,float max,int reintentos)
{
	int retorno = -1;
	float bufferInt;

	if(pNumero != NULL && pMensaje != NULL && pMensajeError != NULL && reintentos >= 0 && min <= max)
	{
		do
		{
			printf("%s", pMensaje);
			fflush(stdin);
			if(getFloat(&bufferInt) == 0 && bufferInt >= min && bufferInt <= max)
			{
				retorno = 0;
				*pNumero = bufferInt;
				break;
			}

			reintentos--;
			printf("%s", pMensajeError);
		}while(reintentos > 0);

		if(reintentos == 0)
		{
			printf("Te quedaste sin intentos\n");
		}
	}
	return retorno;
}


int getInt(int* pResultado)
{
	int retorno = -1;
	char bufferInt[64];

	if(pResultado != NULL)
	{
		fflush(stdin);
		if(getString(bufferInt, sizeof(bufferInt)) == 0 && validarEntero(bufferInt, sizeof(bufferInt)))
		{
			*pResultado = atoi(bufferInt);
			retorno = 0;
		}
	}

	return retorno;
}
int utn_getNumero(int* pNumero, char* pMensaje, char* pMensajeError, int min, int max, int reintentos)
{
	int retorno = -1;
	int bufferInt;

	if(pNumero != NULL && pMensaje != NULL && pMensajeError != NULL && reintentos >= 0 && min <= max)
	{
		do
		{
			printf("%s", pMensaje);
			fflush(stdin);
			if(getInt(&bufferInt) == 0 && bufferInt >= min && bufferInt <= max)
			{
				retorno = 0;
				*pNumero = bufferInt;
				break;
			}

			reintentos--;
			printf("%s", pMensajeError);
		}while(reintentos > 0);

		if(reintentos == 0)
		{
			printf("Te quedaste sin intentos\n");
		}
	}
	return retorno;
}

int validarEntero(char* cadena, int limite)
{
	int retorno = -1;

	if(cadena != NULL && limite > 0)
	{
		retorno = 1;
		for(int i = 0; i < limite && cadena[i] != '\0'; i++)
		{
			if(i == 0 && (cadena[i] == '-' || cadena[i] == '+'))
			{
				continue;
			}
			if(cadena[i] < '0' || cadena[i] > '9')
			{
				retorno = 0;
				break;
			}
		}
	}
	return retorno;
}

int validarDecimal(char* cadena, int limite)
{
	int retorno = -1;
	int punto = 0;

	if(cadena != NULL && limite > 0)
	{
		retorno = 1;
		for(int i = 0; i < limite && cadena[i] != '\0'; i++)
		{
			if(i == 0 && (cadena[i] == '-' || cadena[i] == '+'))
			{
				continue;
			}
			if(punto == 0 && cadena[i] == '.')
			{
				punto = 1;
				continue;
			}
			if(cadena[i] < '0' || cadena[i] > '9')
			{
				retorno = 0;
				break;
			}
		}
	}
	return retorno;
}




/*void SumarNumeros(int listaNumeros[],int tam)
{
	int i;
	int acumulador;
	acumulador = 0;
	for(i=0; i<tam ; i++)
	{
	 acumulador = acumulador + listaNumeros[i];
	}
	printf("La suma es: %d\n", acumulador);
}/

int IngresarEntero(char mensaje[])
{
	int unEntero;

	printf("%s\n",mensaje);
	scanf("%d", &unEntero);

	return unEntero;
	//entero que va a devolver la funcion, por eso tiene un int adelante

}


void mostrarNumero(float numero)// implementacion o desarrollo
{
	printf("el numero es: %.2f",numero );
}

float PedirFlotante(char mensaje[])
{
	int unFlotante;

	printf("%s\n",mensaje);
	scanf("%d", &unFlotante);

	return unFlotante;
}*/
