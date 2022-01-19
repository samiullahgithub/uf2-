/*
 * funcion.c
 *
 *  Created on: 12 ene 2022
 *      Author: sami
 */


int funcion(){
	int num;
	do {
		printf("introdueix un nombre mes gran que 1\n");
		scanf("%d",&num);

	}while (num<1);
	return num;

}

