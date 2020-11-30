#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
#include <unistd.h>

char letra;
FILE *file;

void EscolhaOpcao()
{
	printf("\n------------Programa editor de texto--------------\n\n");
	printf("O que deseja fazer ?\n");
	printf("A - Abrir um arquivo\n");
	printf("F - Fechar arquivo\n");
	printf("B - Buscar palavra\n");
	printf("T - Trocar uma palavra pela outra\n");
	printf("M - Este menu\n");
	printf("P - Equipe de programadores\n");
	printf("S - Sair do programa\n");
	printf("-----------------------------------------------------\n");
}

void AbriArquivo()
{
	system("clear || cls");
	int opcao;
	printf("Escolha o arquivo:\n");
	printf("1 - texto1\n");
	printf("2 - texto2\n");
	scanf("%d", &opcao);
	if (opcao == 1)
	{
		file = fopen("texto1.txt", "w");
	}
	if (opcao == 2)
	{
		file = fopen("texto2.txt", "w");
	}
	else
	{
		printf("O arquivo nao existe:\n");
		printf("----------------------------------\n");
		getchar();
		printf("PRESSIONE ENTER PARA VOLTAR...");
		getchar();
		system("clear || cls");
	}

	if (file != NULL)
	{
		printf("O arquivo %d foi aberto com sucesso!\n", opcao);
		printf("----------------------------------\n");
		getchar();
		printf("PRESSIONE ENTER PARA VOLTAR...");
		getchar();
		system("clear || cls");
	}
}

void FechaArquivo()
{
}

void Programadores()
{
	system("clear || cls");
	printf("\n-----------------PROGRAMADORES---------------\n");
	printf("Nome: Marcos Paulo C. Tavares / Matricula: 19200427\n");
	printf("Nome: Victor Manuel de Barros Garcia / Matricula: 20102283\n");
	printf("Nome: Caina Matricula: 00000000\n\n");
	printf("----------------------------------\n");
	getchar();
	printf("PRESSIONE ENTER PARA VOLTAR...");
	getchar();
	system("clear || cls");
}

void SairPrograma()
{
	system("clear || cls");
	printf("--------------------------------------------------------\n");
	printf("Menu 0\n");
	printf("--------------------------------------------------------\n");
	printf("Deseja sair do programa: S Sim / N Nao?\n");
	char opcao;
	scanf("%s", &opcao);
	fflush(stdin);
	if (opcao == 'S' || opcao == 's')
	{
		system("clear || cls");
		printf("Fechando programa...\n");
		sleep(2);
		exit(0);
	}
	else
	{
		system("clear || cls");
	}
}

int main(void)
{
	system("clear || cls");
	do
	{
		EscolhaOpcao();
		scanf("%s", &letra);
		switch (letra)
		{
		case 'a':
		case 'A':
			AbriArquivo();
			break;

		case 'f':
		case 'F':
			FechaArquivo();
			break;
		case 'b':
		case 'B':
			printf("Buscar palavra\n");
			break;
		case 't':
		case 'T':
			printf("Trocar palavras\n");
			break;
		case 'm':
		case 'M':
			system("clear || cls");
			EscolhaOpcao();
			scanf("%s", &letra);
			break;
		case 'p':
		case 'P':
			Programadores();
			break;
		case 's':
		case 'S':
			SairPrograma();
			break;
		default:
			printf("Comando nao encontrado.\n\n");
			system("clear || cls");
		}
	} while (letra);
}