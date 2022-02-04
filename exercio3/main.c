#include <stdio.h>
#include "functions.h"

int main() {

	int num, final;

	num = validar();
	final = convertir(num);
	printf("%d", final);

}

