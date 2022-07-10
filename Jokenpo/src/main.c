#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../include/Handle_Pos_Win.h"
#include "../include/List_Wins.h"
#define Author "Gustavo"

void menu_jogo(void){
	printf("--------------------\n");
	printf("...Iniciando Jogo...\n");
	printf("--------------------\n\n");
	printf("Jokenpo Game :D \n\n");
	printf("Regras e Orientações: \n\n");
	printf("Haverão dois jogadores em que casa jogador escolherá uma de 3 opcoes(Pedra, Papel e Tesoura)\n");
	printf("Haverá uma comparação de cada opção escolhida e o programa retornará o nome do Vencedor\n");
	printf("Mais informações inicie o programa com --help ou -h");
}
int menu_init(void){
	int escolha;
	printf("(1) Para iniciar o jogo\n");
	printf("(2) Para mostrar o resultados dos jogos anteriores\n");
	scanf("%d", &escolha);
	return escolha;
}
void help(void){
}

int main(int argc, char *argv[])
{
	int num_partidas = 1, *p_num_p, escolha, vitorioso;
	system("clear");
	escolha = menu_init();
	char n_jogador1[30], n_jogador2[30], n_victory[30], e_player1[8], e_player2[8];
	p_num_p = &num_partidas;
	FILE *fresults;
	if(argc > 2)
		return 1;
	if (escolha == 1){
		PegarNomes(n_jogador1);
		PegarNomes(n_jogador2);
		MenuOpcoes();
		PegarEscolhas(n_jogador1, e_player1);
		MenuOpcoes();
		PegarEscolhas(n_jogador2, e_player2);
		ConverterEscolhas(e_player1);
		ConverterEscolhas(e_player2);
		vitorioso = LidarEscolhas(e_player1, e_player2, n_jogador1, n_jogador2);		  
		printf("\n%d", vitorioso);
		fresults = fopen(argv[1], "a+t");
		roster_partidas(n_jogador1, n_jogador2, fresults);
	}
	if(escolha == 2){
		print_f(argv[1]);
	}
	if(fresults == NULL)
		return -1;
	//roster_partidas(n_jogador1, n_jogador2, fresults, p_num_p,n victory);
	//roster_partidas(n_jogador1, n_jogador2, fresults);

}
