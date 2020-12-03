#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

char letra;
FILE *file;
int opcaoArquivo;

void EscolhaOpcao()
{
	printf("\n------------Programa Editor de Texto--------------\n\n");
	printf("\tA - Abrir um arquivo\n");
	printf("\tF - Fechar arquivo\n");
	printf("\tB - Buscar palavra\n");
	printf("\tT - Trocar uma palavra pela outra\n");
	printf("\tM - Este menu\n");
	printf("\tP - Equipe de programadores\n");
	printf("\tS - Sair do programa\n");
	printf("\n-----------------------------------------------------\n");
}

void AbriArquivo()
{
	system("clear || cls");
	printf("Escolha o arquivo:\n");
	printf("1 - texto1\n");
	printf("2 - texto2\n");
	scanf("%d", &opcaoArquivo);
	if (opcaoArquivo == 1)
	{
		system("clear || cls");
		file = fopen("texto1.txt", "r");
		char frase[100];
		while (fgets(frase, 100, file) != NULL)
		{
			printf("%s", frase);
		}
		getchar();
		printf("\n\nPRESSIONE ENTER PARA FECHAR O TEXTO");
		getchar();
		system("clear || cls");
	}
	else if (opcaoArquivo == 2)
	{
		system("clear || cls");
		file = fopen("texto2.txt", "r");
		char frase[100];
		while (fgets(frase, 100, file) != NULL)
		{
			printf("%s", frase);
		}
		getchar();
		printf("\n\nPRESSIONE ENTER PARA FECHAR O TEXTO");
		getchar();
		system("clear || cls");
	}
	else
	{
		printf("O arquivo não existe:\n");
		printf("----------------------------------\n");
		getchar();
		printf("PRESSIONE ENTER PARA VOLTAR AO MENU...");
		getchar();
		system("clear || cls");
	}
}

void FechaArquivo()
{
	if (file != NULL)
	{
		system("clear || cls");
		printf("O arquivo %d esta aberto!\n", opcaoArquivo);
		printf("----------------------------------\n");
		getchar();
		printf("PRESSIONE ENTER PARA FECHAR O ARQUIVO...");
		getchar();
		system("clear || cls");
		printf("Fechando arquivo...");
		fclose(file);
		sleep(2);
		system("clear || cls");
	}
	if (file == NULL)
	{
		printf("Não tem nenhum arquivo aberto!\n");
		printf("----------------------------------\n");
		getchar();
		printf("PRESSIONE ENTER PARA VOLTAR AO MENU...");
		getchar();
		system("clear || cls");
	}
}

void BuscarPalavra()
{
	system("clear || cls");
	printf("\nDigite a palavra que deseja localizar: ");
	char w[200];
	scanf("%s", &w);
	system("clear || cls");
	printf("Localizando palavra...");
	sleep(1);
	system("clear || cls");
	printf("\nPalavra a ser procurada: %s", w);
	char line[300];
	int found = 0;
	if (file == NULL)
	{
		printf("\n\nNenhum arquivo foi aberto");
		getchar();
		printf("\n\nPRESSIONE ENTER PARA VOLTAR AO MENU...");
		getchar();
		system("clear || cls");
		return;
	}

	while (!feof(file))
	{
		fgets(line, 300, file);

		if (strstr(line, w) != NULL)
		{
			printf("\n\nPalavra localizada no texto %d: %s\n", opcaoArquivo, line);
			found = 1;
		}
	}

	if (found == 0)
	{
		printf("\n\nPalavra não foi encontrada no texto %d", opcaoArquivo);
	}
	getchar();
	printf("\n\nPRESSIONE ENTER PARA VOLTAR AO MENU...");
	getchar();
	system("clear || cls");
}

void Programadores()
{
	system("clear || cls");
	printf("•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•");
	printf("\n::: (_( …*…*…*…*…*…*…*…*…*…*…*…*::: (_( …*…*…*…*…*…*…*…*…*…*…*…*");
	printf("\n*: (=’ :’) :::::::::::::::: PROGRAMADORES :::::::::::::::::::(=’ :’):*");
	printf("\n\nNome: Marcos Paulo C. Tavares / Matricula: 19200427\n\n");
	printf("Nome: Victor Manuel de Barros Garcia / Matricula: 20102283\n\n");
	printf("Nome: Cainã James Moreira / Matricula: 20101780\n");
	printf("\n•.. (,(”)(”)¤…*…*…*…*…*…*…*…*…*…*…*•.. (,(”)(”)¤…*…*…*…*…*…*…*…*…*…*…*");
	printf("\n¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸\n\n");
	getchar();
	printf("PRESSIONE ENTER PARA VOLTAR...");
	getchar();
	system("clear || cls");
}

void SairPrograma()
{
	system("clear || cls");
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
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
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
			BuscarPalavra();
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
	SetConsoleOutputCP(CPAGE_DEFAULT);
}