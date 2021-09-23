/*
 * validacionesEingresos.h
 *
 *  Created on: 20 sep. 2021
 *      Author: Ludo LUDMILA DE PAZOS 1F
 */

#ifndef VALIDACIONESEINGRESOS_H_
#define VALIDACIONESEINGRESOS_H_
#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

/// @brief Funcion que valida que se ingresen numeros, no caracteres, en un rango entre 1 y 5 que son las opciones del menu.
///
/// @param "minimo", minimo valor que se puede ingresar
/// @param "maximo", maximo valor que se puede ingresar
/// @return retorna la opcion del menu elegida por el usuario
int ValidarMenu (int,int);

/// @brief Funcion que le pide al usuario que ingrese un numero.
///
/// @return Retorna el numero ingresado por el usuario para luego poder ser utilizado en otras funciones.
float IngresarNumero(void);

/// @brief Funcion que muestra los resultados de los calculos aritmeticos.
///
/// @param Recibe como parametro el resultado de la suma.
/// @param Recibe como parametro el resultado de la resta.
/// @param Recibe como parametro el resultado de la division.
/// @param Recibe como parametro el resultado de la multiplicacion.
/// @param Recibe como parametro el resultado del factorial del primero numero ingresado.
/// @param Recibe como parametro el resultado del factorial del segundo numero ingresado.
void MostrarResultados(float,float, float,float,int,int);


#endif /* VALIDACIONESEINGRESOS_H_ */
