/*
 * Ola Mundo - meu projeto do programa ola mundo, com a finalidade 
 * de aprender a linguagem C. 
 * Foi baseado no código do autor Wolfterro.
 *
 * Data: 1/jun/2022
 * Por: Gustavo
 *
 */

# include <stdio.h>
# include <string.h>

#define VERSION    "1.0"
#define RELDATA    "01/07/2022"
#define AUTHOR     "Gustavo Chiato"

#define EMPTY      NULL

#define PORTUGUESE "Olá "
#define ENGLISH    "Hello "
#define SPANISH    "Hola "
#define FRENCH     "Bonjour "
#define ITALIAN      "Ciao "
#define GERMAN     "Hallo "
#define JAPANESE      "Kon'nichiwa "
#define CHINESE    "Shìjiè "
#define RUSSIAN    "Привет "

int escolha;
char nome[100];

void ola_nome(int escolha,char nome[]){
	
	switch(escolha){
		case 1:
			printf("%s%s!\n",PORTUGUESE, nome);
			break;
		case 2:
			printf("%s%s!\n",ENGLISH, nome);
			break;
		case 3:
			printf("%s%s!\n",SPANISH, nome);
			break;
		case 4:
			printf("%s%s!\n",FRENCH, nome);
			break;
		case 5:
			printf("%s%s!\n",ITALIAN, nome);	
			break;
		case 6:
			printf("%s%s!\n",GERMAN, nome);
			break;
		case 7:
			printf("%s%s!\n",JAPANESE, nome);
		case 8:
			printf("%s%s!\n",CHINESE, nome);
			break;
		case 9:
			printf(RUSSIAN);
			break;
		default:
			printf("\nOpção inválida! Saindo...\n\n");
	}
}
void menu() {
	printf("=========================\n");
	printf("OlaNome! Versão %s\n", VERSION);
	printf("=========================\n\n");
	printf("Digite a lingua desejada:\n");
	printf("-------------------------\n");
	printf("(1) Português\n");
	printf("(2) Inglês\n");
	printf("(3) Espanhol\n");
	printf("(4) Francês\n");
	printf("(5) Italiano\n");
	printf("(6) Alemão\n");
	printf("(7) Japonês\n");
	printf("(8) Chinês\n");
	printf("(9) Russo\n");
	printf("-------------------------\n\n");
	printf("Faça sua escolha: ");
	scanf("%d", &escolha);
	printf("Digite seu nome: ");
	scanf("%s", nome);
	ola_nome(escolha, nome);
}
void help() {
	printf("Use os seguintes argumentos sem aspas:\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	printf("Ajuda:\n");
	printf("'--help' ou '-h' : Mostra esta opção de ajuda.\n\n");
	printf("Saudações:\n");
	printf("'--pt' ou '-1': Saudação em português.\n");
	printf("'--en' ou '-2': Saudação em inglês.\n");
	printf("'--es' ou '-3': Saudação em espanhol.\n");
	printf("'--fr' ou '-4': Saudação em francês.\n");
	printf("'--it' ou '-5': Saudação em italiano.\n");
	printf("'--de' ou '-6': Saudação em alemão.\n");
	printf("'--jp' ou '-7': Saudação em japonês.\n");
	printf("'--ch' ou '-8': Saudação em chinês.\n");
	printf("'--ru' ou '-9': Saudação em russo.\n\n");
	printf("Versão:\n");
	printf("'--version' ou '-v': Mostra a versão atual do programa.\n\n");
}
void version(){
	printf("OlaNome --- Versão: ");
	printf(VERSION);
	printf(" --- Data de lançamento: ");
	printf(RELDATA);
	printf(" --- Autor: ");
	printf(AUTHOR);
	printf("\n");
}

int main(int argc, char *argv[]){
	if (argv[1] == EMPTY){
		menu();
	}
	else{
		if(!strcmp(argv[1], "--pt") || !strcmp(argv[1], "-1")){
			printf("Digite seu nome:");
			scanf("%s", nome);
			ola_nome(1, nome);
		}
		else if(!strcmp(argv[1], "--en") || !strcmp(argv[1], "-2")){
			printf("Digite seu nome:");
			scanf("%s", nome);
			ola_nome(2, nome);
		}
		else if(!strcmp(argv[1], "--es") || !strcmp(argv[1], "-3")){
			printf("Digite seu nome:");
			scanf("%s", nome);
			ola_nome(3, nome);
		}
		else if(!strcmp(argv[1], "--fr") || !strcmp(argv[1], "-4")){
			printf("Digite seu nome:");
			scanf("%s", nome);
			ola_nome(4, nome);
		}
		else if(!strcmp(argv[1], "--it") || !strcmp(argv[1], "-5")){
			printf("Digite seu nome:");
			scanf("%s", nome);
			ola_nome(5, nome);
		}
		else if(!strcmp(argv[1], "--de") || !strcmp(argv[1], "-6")){
			printf("Digite seu nome:");
			scanf("%s", nome);
			ola_nome(6, nome);
		}
		else if(!strcmp(argv[1], "--jp") || !strcmp(argv[1], "-7")){
			printf("Digite seu nome:");
			scanf("%s", nome);
			ola_nome(7, nome);
		}
		else if(!strcmp(argv[1], "--ch") || !strcmp(argv[1], "-8")){
			printf("Digite seu nome:");
			scanf("%s", nome);
			ola_nome(8, nome);
		}
		else if(!strcmp(argv[1], "--ru") || !strcmp(argv[1], "-9")){
			printf("Digite seu nome:");
			scanf("%s", nome);
			ola_nome(9, nome);
		}
		else if(!strcmp(argv[1], "-v")){
			version();
		}
		else if(!strcmp(argv[1], "--help") || !strcmp(argv[1], "-h")){
			help();
		}
		else{
			printf("Argumento Inválido! Use --help ou -h para ajudá-lo.");
		}
	}
	return 0;
}










