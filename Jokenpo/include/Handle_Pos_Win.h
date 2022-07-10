int cont_nomes = 1;
void PegarNomes(char *p){
	system("clear");
	printf("Digite o nome do %d jogador: \n", cont_nomes);
	scanf("%29s", p);
	cont_nomes++;
}
void PegarEscolhas(char *jogador, char *opcao){
	printf("Digite a opcao do %s: \n", jogador);
	scanf("%s", opcao);
	while(strcmp(opcao, "1") && strcmp(opcao, "pedra") && strcmp(opcao, "2") && strcmp(opcao, "papel") && strcmp(opcao, "3") && strcmp(opcao, "tesoura")){
			printf("Por favor insira novamente uma opcao válida");
			scanf("%s", opcao);
	}
}
void MenuOpcoes(void){
	system("clear");
	printf("---------------- \n");
	printf("(1) ou 'pedra'   Para Pedra \n");
	printf("(2) ou 'papel'   Para Papel \n");
	printf("(3) ou 'tesoura' Para Tesoura \n");
	printf("---------------- \n");
}
void ConverterEscolhas(char *escolha){
	if(!strcmp(escolha, "pedra"))
		strcpy(escolha, "1");
	else
		if(!strcmp(escolha, "papel"))
			strcpy(escolha, "2");
	else
		if(!strcmp(escolha, "tesoura"))
			strcpy(escolha, "3");
}
int Jogador1ganha(char *escolha1, char *escolha2, char *p){
	int condicao = 0;
	char escol = escolha1[0];
	switch(escol){
	case '1':
		strcpy(p, "pedra");
		if(!strcmp(escolha2, "2"))
				condicao = 1;
		break;
	case '2':
		strcpy(p, "papel");
		if(!strcmp(escolha2, "3"))
			condicao = 1;
		break;
	case '3':
		strcpy(p, "tesoura");
		if(!strcmp(escolha2, "1"))
			condicao = 1;
		break;
	}
	//printf("Entrou em jogador 1 ganha\n");
	return condicao;
}
int Jogador2ganha(char *escolha1, char *escolha2, char *p){
	int condicao = 0;
	char escol = escolha2[0];
	switch(escol){
	case '1':
		strcpy(p, "pedra");
		if(!strcmp(escolha1, "2"))
				condicao = 1;
		break;
	case '2':
		strcpy(p, "papel");
		if(!strcmp(escolha1, "3"))
			condicao = 1;
		break;
	case '3':
		strcpy(p, "tesoura");
		if(!strcmp(escolha1, "1"))
			condicao = 1;
		break;
	}
	//printf("Entrou em jogador 2 ganha\n");
	return condicao;
}
int LidarEscolhas(char *escolha1, char *escolha2, char *nome1, char *nome2){
	system("clear");
	int resultado;
	char p_escolha[8];
	printf("%s ", escolha1);
	printf("%s ", escolha2);
	if(!strcmp(escolha1, escolha2)){
		printf("Empate");
		resultado = 0; // 0 é empate, 1 é player 1 ganhou e 2 é player 2 ganhou;
	}
	else
		if(!Jogador1ganha(escolha1, escolha2, p_escolha)){
			printf("Jogador %s ganhou porque colocou %s", nome1, p_escolha);
		resultado = 1;
		}
	else
		if(!Jogador2ganha(escolha1, escolha2, p_escolha)){
			printf("Jogador %s ganhou porque colocou %s", nome2, p_escolha);
		resultado = 2;
		}
	return resultado;
}
