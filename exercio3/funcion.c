
#include <stdio.h>

int validar(){

	int number;

	do{
		printf("Introdueix un nombre decimal:\n");
		scanf("%d", &number);
	} while (number < 0 );

	return number;
}

int convertir(int num){

	int res = 0, rem = 0, a = 1;

	while (num != 0){
		rem = num % 2;
		num = num / 2;
		res = res +(rem * a);
		a = a * 10;
	}
	return res;
}
