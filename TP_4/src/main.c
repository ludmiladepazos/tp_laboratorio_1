/*
    utest example : Unit test examples.
    Copyright (C) <2018>  <Mauricio Davila>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../testing/inc/main_test.h"
#include "../inc/LinkedList.h"


int main(void)
{
//	startTesting(1);  //ll_newLinkedList
//    startTesting(2);  // ll_len
//	startTesting(3);  // getNode - test_getNode
//	startTesting(4);  // addNode - test_addNode
//	startTesting(5);  // ll_add
//	startTesting(6);  // ll_get
//	startTesting(7);  // ll_set
//	startTesting(8);  // ll_remove
//	startTesting(9);  // ll_clear
//	startTesting(10); // ll_deleteLinkedList
//	startTesting(11); // ll_indexOf
//	startTesting(12); // ll_isEmpty
//	startTesting(13); // ll_push
	startTesting(14); // ll_pop
//	startTesting(15); // ll_contains
//	startTesting(16); // ll_containsAll
//	startTesting(17); // ll_subList
//	startTesting(18); // ll_clone
//	startTesting(19); // ll_sort



    return 0;
}




/*
 * crear un nuevo linkedlist, si es el ultimo nodo apunta a NULL, si la lista esta vacia
 * el primero nodo debe apuntar a null
 * crear lista reservar espacio de memoria, que el primero nodo apunte a null y el tamaño sea 0
 * una lista tiene dos cosas dentro un primero nodo y un tamaño : puntero al primer nodo que de entrada apunta a null
 * y el size que de entrada tiene valor 0 (esto al momento de crear una lista nueva)
 * linkedlistNew pfirstnode = null
 * 				 size = 0
 * una vez que cree la lista puedo empezar a cargarla con los datos
 * agreaggar datoa la lista ll_add:
 * la lista previamente estaba vacia, internamente cuando hago un add va a tener q contruir espacio para un nodo
 * un nodo internamente tenia un puntero al elemento que agrego y un puntero al proximo nodo (el puntero al siguiente nodo
 * va a apuntar a null porq va a ser el ultimo) ahora pfirstnode ya no va a apuntar a null porque agregue otro nodo,
 * pfirstnode ahora apunta a la dir de memoria del nodo nuevo q agregue
 * cuando hago un add tengo q ir a la linkedlist y recorrerla hasta encontrar la ultima posicion
 *
 * ll_add agrega nodo SOLO al final
 * ll_push agrega nodo DONDE QUIERO, principio, medio, final.
 *
 */




























