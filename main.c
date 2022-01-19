/*
 * main.c
 *
 *  Created on: 12 ene 2022
 *      Author: sami
 */


#include <stdio.h>
#include "funcion.h"

int main(){
	int num1 , num2;

	num1= funcion();
	num2= funcion();
	if (num1 > num2 ){
		printf("num1 es gran\n ");
	}
	if (num1 < num2 ){
			printf("num2 es gran\n");
		}else {
			printf("son igual\n");
		}
}
