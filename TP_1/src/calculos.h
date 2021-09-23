/*
 * calculos.h
 *
 *  Created on: 20 sep. 2021
 *      Author: Ludo LUDMILA DE PAZOS 1F
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_
#include <stdio.h>
#include <stdlib.h>
#include "validacionesEingresos.h"

/// @brief Funcion que suma dos numeros ingresados que recibe como parametros.
///
/// @param numeroA primer numero que se ingresa.
/// @param numeroB segundo numero que se ingresa.
/// @return retorna el resultado de la suma.
float SumarNumeros(float, float);

/// @brief Funcion que resta dos numeros ingresados que recibe como parametros.
///
/// @param numeroA primer numero que se ingresa.
/// @param numeroB segundo numero que se ingresa.
/// @return retorna el resultado de la resta.
float RestarNumeros(float,float);

/// @brief Funcion que divide dos numeros ingresados que no sean 0.
///
/// @param numeroA primer numero que se ingresa.
/// @param numeroB segundo numero que se ingresa.
/// @return retorna el resultado de la division.
float DividirNumeros(float,float);

/// @brief Funcion que multiplica dos numeros ingresados que recibe como parametros.
///
/// @param numeroA primer numero que se ingresa.
/// @param numeroB segundo numero que se ingresa.
/// @return retorna el resultado de la multiplicacion.
float MultiplicarNumeros(float,float);

/// @brief Funcion que calcula el factorial de un numero entero y positivo hasta el numero 12.
///
/// @param "Numero", parametro que recibe la funcion, es el numero ingresado en el cual se va a calcular el factorial.
/// @return retorna el resultado del calculo del factorial.
int CalcularFactorial(float);


#endif /* CALCULOS_H_ */
