# include<stdio.h>
#include<stdlib.h>
int main(void)
{
	system("clear");
	FILE *arq;
	char Linha[1];
	char *result;
	int i;
	arq = fopen("list_result_matches.txt", "rt");
	if (arq == NULL){
		printf("Problema ao abrir arq\n");
		return 1;
	}
	i = 1;
	while(!feof(arq)){
		result = fgets(Linha, 2, arq);
		if(result)
			printf("%s", Linha);
	}
}
