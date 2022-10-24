/*
 ============================================================================
 Name        : parcial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int aplicarDescuento(float precio);
int contarCaracteres(char caracteres[], char caracter);

int main(void) {

	/*
	 * Crear una función llamada aplicarDescuento
	 * que reciba como parámetro el precio de un producto
	 * y devuelva el valor del producto con un descuento del 5%.
	 * Realizar la llamada desde el main.
	 *
	 * Crear una función que se llame contarCaracteres
	 * que reciba una cadena de caracteres como primer parámetro
	 * y un carácter como segundo y devuelva la cantidad de veces que
	 * ese carácter aparece en la cadena
	 *
	 * */

	aplicarDescuento(150);

	contarCaracteres("Hola a todas", 'a');


	return 0;
}

int contarCaracteres(char caracteres[], char caracter){

	int contadorCaracter = 0;

	for(int i = 0; i < strlen(caracteres); i++){

		if(caracteres[i] == caracter){
			contadorCaracter++;
		}
	}

	return contadorCaracter;
}

int aplicarDescuento(float precio){

	float precioConDescuento;

	precioConDescuento = (float) (precio * 0.05);

	return precioConDescuento;

}
