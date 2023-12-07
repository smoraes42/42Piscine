/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:59:11 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/03 18:29:37 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* 
  col1up col2up col3up col4up 
  col1down col2down col3down col4down 
  row1left row2left row3left row4left 
  row1right row2right row3right row4right
	"0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15"
	"A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P"
    "4  3  2  1  1  2  2  2  4  3  2  1  1  2  2  2"

			A	B	C	D		
			4	3	2	1
	I	4	X	X	X	X	1	M

	J	3	X	X	X	X	2	N

	K	2	X	X	X	X	2	O

	L	1	X	X	X	X	2	P
			1	2	2	2
			E	F	G	H
*/

char arr_input[16] = "4321122243211222";
			// ^ MAX_NUM * 4 lados

char arr_A_E[7];
char arr_I_M[7];
char arr_B_F[7];
char arr_J_N[7];
		//   ^ MAX_NUM + 2 (inputs) + 1 '\0'

arr_A_E[0] = arr_input[0]
							
arr_A_E[5] = arr_input[3];
	 // ^ MAX + 1      // MAX - 1

arr_A_E[1 -> 4] = arr_input[




if 0 +1 = max --> return min
if 0 +2 = max --> return min +1
if cold1 -2 = max --> return min +1
if cold1 -1 = max --> return min
//para todas las columnas
if left1 +1 = max -1 --> return combinaciones q empiezen por tres y tengan el max en posicion correcta
if left1 +2 = max -1 --> return combinaciones q tengan el max y el max -1 en posición correcta
if right1 -2 = max -1 --> return combinaciones q tengan el max y el max -1 en posición correcta
if right1 -1 = max -1 --> return combinaciones q terminen por max -1 y tengan el max en posición correcta
//yo creo q si se va repitiendo esto dee manera lógica y codeada se completa el cuadrado y su exterior*
pos min = 1;
pos max = 4;

funcion_crear_array_para_comprar()
	char array (!4) = trasmutador();
	//array [24][7] = "x1234y'\0', 1243. 1324. ....."
}


funcion_encontrar_extremos()
{

	visibilidad = 1;
	posicion = 1;

	while array[posicion!= max+1];
		array[index_array][posicion]
	if (alturas pos1 = max )
		return visibilidad
	else if
		altura = min;

		


		
	posicion ++;

	


	visiblidad(x) = funcx(array[indx]);
	y = funcy(array[indx]);

	array[ind][0] = x;
	array[ind][max+1] = y;
	ind++;

}
comparar_posibilidad_extermos();



if((x + y) > (max + 1)) || ((x + y) = 2))
{
	no posibles;
	return error;
}
else
{	// si es posible
	funcion_comparar_();


}
