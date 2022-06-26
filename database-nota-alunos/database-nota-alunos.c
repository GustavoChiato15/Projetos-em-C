# include<stdio.h>
# include<string.h>
# include<stdlib.h>
# include<ctype.h>
int qtd_classes = 2;
int qtd_alunos = 3;
float notas[2][10];

void LerNotas(void);
int MudarNota(void);
void MostrarNotas(float g[][qtd_alunos]);
int Sair(void);

int main(void)
{
	for(;;)
	{
	char operacao, operacao_str[80];
	printf("(L) para ler todas as notas dos alunos de cada classe \n");
	printf("(M) para mudar a nota de apenas um aluno \n");
	printf("(D) para mostrar todas as notas na tela \n");
	printf("(S) para sair do programa \n");
	do
	{
	fgets(operacao_str, sizeof(operacao_str), stdin);
	operacao = toupper(*operacao_str);
	}
	while(operacao != 'L' && operacao != 'M' && operacao != 'D' && operacao != 'S');
	
	switch(operacao)
	{
		case 'L':
			LerNotas();
			break;
		case 'M':
			MudarNota();
			break;
		case 'D':
			MostrarNotas(notas);
			break;
		case 'S':
			printf("Estou Morrendo ,_,");
			return 0;
	}
	}
}
void LerNotas(void)
{
	int i, j;
	for(i = 0; i < qtd_classes; i++)
		for(j = 0; j < qtd_alunos; j++)
		{
			printf("Digite a nota %d para o aluno %d da turma %d\n", (i*qtd_alunos)+j+1, j+1 ,i+1);
			scanf("%f", & notas[i][j]);
		}
}
int MudarNota(void)
{
	int classe, aluno, nota;
	printf("Digite a classe do aluno que deseja alterar a nota \n");
	scanf("%d", &classe);
	printf("Digite qual aluno da classe %d você deseja alterar a nota :", classe);
	scanf("%d", &aluno);
	printf("Digite a nota a ser atribuída ao aluno : \n");
	scanf("%d", &nota);
	notas[classe-1][aluno-1] = nota;
	printf("Alteração Realizada com sucesso\n");
	return 0;
}
void MostrarNotas(float g[][qtd_alunos])
{
	int i,j;
	printf("Mostrando Notas...\n");
	for(i = 0 ; i < qtd_classes; i++)
	{
		printf("Classe %d\n", i+1);
		for(j = 0; j < qtd_alunos; j++)
		{
			printf("\tAluno %d = ", j+1);
			printf("%.1f", notas[i][j]);
			printf("\n");
		}
		printf("\n");
	}
}
int Sair(void)
{
	printf(" Estou Morrendo ,_,");
	return 0;
}
