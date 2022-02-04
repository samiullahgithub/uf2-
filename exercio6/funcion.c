
#include <stdio.h>

void intercanvi(int num1, int num2){
	int aux;

int validar(int num){
	do{
		printf("Introdueix el primer num:\n");
		fflush(stdout);
		scanf("%d", &num1);
	}while(num1<1);

	do{
		printf("Introdueix el segon num:\n");
		fflush(stdout);
		scanf("%d", &num2);
	}while(num2<1);

	aux=num1;
	num1=num2;
	num2=aux;
	printf("El primer num és %d\nEl segon num es: %d\n", num2,num1);


		scanf("%d", &num);
	}while(num<1);
	return num;
}
void resultat(int num){
	int aux=0,x=0,suma=0;
	while(suma<num){
		printf("%d\t", x);
		x+=1;
		aux=suma;
		suma+=x;
	}
	printf("\nLa suma dona: %d\n", aux);