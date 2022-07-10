void roster_partidas(char jogador1[30],char jogador2[30], FILE *result){
	char frase[50];
	int a;
	if(result == NULL){
		printf("Erro ao criar arquivo");
		return;
	}
	else{
		fprintf(result, "Resultado da partida entre os Players %s e %s é: ", jogador1, jogador2);
	}

	fclose(result);
}
void print_f(char *file){
	FILE *result;
	result = fopen(file, "rt");
	system("clear");
	char linha[2], *roster;
	while(!feof(result)){
		roster = fgets(linha, 2, result);
		if(roster)	
			printf("%s", linha);
	}
	fclose(result);
}
