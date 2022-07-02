/*
 * pot.c - Aprendendo o funcionamento de header
 *
 * Este programa utiliza as funções do arquivo pot.h e foi baseado
 * no código do Wolfterro - https://github.com/Wolfterro/Projetos-em-C/
 *
 * Data:  2/jun/2022
 * Autor: Gustavo Chiato
 *
 */
#include <stdio.h>
#include "./pot.h"

int main(void){
	int base;
	int expo;
	double result;
	printf("Insira uma base: ");
	scanf("%d", &base);
	printf("Insira um expoente: ");
	scanf("%d", &expo);
	result = power(base, expo);
	printf("O resultado de %d^%d é %.9lf", base, expo, result);
	return 0;
}
