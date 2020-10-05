#include <stdio.h>
#include <stdlib.h> // Fazer o system("clear || cls") funciona
#include <string.h>
#include <unistd.h> // Fazer o sleep(3) funcionar

int certo_1 = 0, errado_1 = 0;
char nome[100];
char nomeNivel[100];

void EscolhaOpcao() {
  printf("--------------------------------------------------------\n");
  printf("|                    MENU DE OPCOES                    |\n");
  printf("|  0 - SAIR DO GAME                                    |\n");
  printf("|  1 - JOGAR TODOS OS NIVEIS - GAME COMPLETO COM MEMES |\n");
  printf("|  2 - JOGAR NIVEL FACIL - SOMENTE O NIVEL FACIL       |\n");
  printf("|  3 - JOGAR NIVEL MEDIO - SOMENTE O NIVEL MEDIO       |\n");
  printf("|  4 - JOGAR NIVEL DIFICIL - SOMENTE O NIVEL DIFICIL   |\n");
  printf("|  5 - VER INSTRUCOES DO JOGO E INFORMACOES            |\n");
  printf("|  6 - VER OS DESENVOLVEDORES                          |\n");
  printf("|  7 - VER PONTUACAO                                   |\n");
  printf("--------------------------------------------------------\n");
  printf("O QUE DESEJA FAZER?                                     \n");
}

void MenuZero() {
  system("clear || cls");
  printf("--------------------------------------------------------\n");
  printf("Menu 0\n");
  printf("--------------------------------------------------------\n");
  printf("Deseja sair do jogo S Sim / N Nao?\n");
  char opcao;
  scanf("%s", &opcao);
  fflush(stdin);
  if (opcao == 'S' || opcao == 's') {
    system("clear || cls");
    printf("Fechando programa...\n");
    sleep(2);
    exit(0);
  } else {
    system("clear || cls");
  }
}

void MenuCinco() {
  system("clear || cls");
  printf("----------------------------------\n");
  printf("Menu 5 \n");
  printf("----------------------------------\n\n");
  printf("INSTRUCOES \n\n");
  printf("Este eh um divertido jogo de perguntas e respostas.O jogador devera "
         "escolher,\n");
  printf("dentre as 4 alternativas (A, B, C, D), apenas uma e em seguida "
         "pressionar enter.\n");
  printf("O jogo lhe informa se vc acertou ou errou a questao.\n");
  printf("O jogo possui 3 niveis de dificuldade:\n");
  printf("Todos Niveis - Neste modo vc jogara o game completo\n");
  printf("ao final vera seus resultados com figuras em caracteres ASCII,\n");
  printf("estes são os famosos memes da internet, sao varios que\n");
  printf("sao mostrados de acordo com sua pontuação.\n");
  printf("Os niveis podem ser jogados de forma individual sem precisar\n");
  printf("jogar o game completo.\n\n");
  printf("Sistema de pontuacao do game.\n");
  printf("Nivel facil   - Cada resposta certa valera 150 pontos\n");
  printf("Nivel medio   - Cada resposta certa valera 200 pontos\n");
  printf("Nivel dificil - Cada resposta certa valera 250 pontos\n");
  printf("Basicamente eh isso, divirta-se.           \n");
  printf("----------------------------------\n");
  getchar();
  printf("PRESSIONE ENTER PARA VOLTAR...");
  getchar();
  system("clear || cls");
}

void MenuSeis() {
  system("clear || cls");
  printf("----------------------------------\n");
  printf("Menu 6 \n");
  printf("----------------------------------\n");
  printf("PROGRAMADORES.\n\n");
  printf("Victor Manuel de Barros Garcia\n");
  printf("Marcos Paulo Carneiro Tavares\n");
  printf("Cainã James Moreira\n\n");
  getchar();
  printf("PRESSIONE ENTER PARA VOLTAR...");
  getchar();
  system("clear || cls");
}

void MenuDois() {
  certo_1 = 0, errado_1 = 0;
  char resp;
  strcpy(nomeNivel, "Facil");
  // Limpar tela no terminal
  system("clear || cls");
  printf("DIGITE O NOME DO PARTICIPANTE: ");
  scanf("%s", nome);
  // Limpar tela no terminal
  system("clear || cls");
  printf("SEJA BEM VINDO %s\n\n", nome);
  printf(
      "Este e um jogo de perguntas e respostas. O jogador devera escolher,\n");
  printf("dentre as 4 alternativas apenas uma e em seguida pressionar enter\n");
  printf(
      "Para mais informacoes, acesse a opcao intrucoes do menu do jogo.\n\n");
  getchar();
  printf("PRESSIONE ENTER PARA COMECAR...");
  getchar();
  system("clear || cls");
  system("clear || cls");
  // Troca a cor do console "2 verde 7 branco"
  system("color 27");
  printf("*===================================================================="
         "===========*\n");
  printf("|  ___   ___ ___ ___	___ _________ ___			"
         "						    |\n");
  printf("|  XXX_  XXX XXX XXX	XXX XXXXXXXXX XXX			"
         "						    |\n");
  printf("|  XXXX_ XXX XXX XXX	XXX XXXXXXXXX XXX			"
         "					    	|\n");
  printf("|  XXXXX_XXX XXX XXX_  _XXX XXX____   XXX			"
         "					     	|\n");
  printf("|  XXXXXXXXX XXX  XXX__XXX  XXXXXXX   XXX			"
         "						    |\n");
  printf("|  XXX XXXXX XXX   XXXXXX   XXX______ XXX______		"
         "				     	    |\n");
  printf("|  XXX  XXXX XXX	XXXX	XXXXXXXXX XXXXXXXXX		"
         "					        |\n");
  printf("|  XXX   XXX XXX	 XX	    XXXXXXXXX XXXXXXXXX		"
         "					        |\n");
  printf("|								"
         "_________ _________ _________ ___ ___	     	|\n");
  printf("|								"
         "XXXXXXXXX XXXXXXXXX XXXXXXXXX XXX XXX		    |\n");
  printf("|								"
         "XXXXXXXXX XXXXXXXXX XXXXXXXXX XXX XXX		    |\n");
  printf("|								"
         "XXX___	  XXX___XXX XXX	      XXX XXX           |\n");
  printf("|								"
         "XXXXXX	  XXXXXXXXX XXX	      XXX XXX		    |\n");
  printf("|								"
         "XXXXXX	  XXXXXXXXX XXX______ XXX XXX______     |\n");
  printf("|								"
         "XXX	      XXX   XXX XXXXXXXXX XXX XXXXXXXXX     |\n");
  printf("|								"
         "XXX	      XXX   XXX XXXXXXXXX XXX XXXXXXXXX     |\n");
  printf("|								"
         "								"
         "			    |\n");
  printf("*===================================================================="
         "=========*\n\n");
  printf("			  AS PERGUNSTAS DE NIVEL \"FACIL\" VALEM 2 "
         "PONTOS CADA             \n\n");
  printf("Pressione \"enter\" para continuar...");
  // Limpar tela no terminal
  getchar();
  system("clear || cls");
  // Troca a cor do console "0 preto 7 branco"
  system("color 07");
  printf("*--------------------------------*\n");
  printf("|  Pergunta 1 - Nivel Facil  |\n");
  printf("*--------------------------------*\n\n");
  printf("O que significa CPU?\n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("A) Control Panel Unit - Unidade de Painel de Controle \n");
  printf("B) Central Power Unit - Unidade de Força Central\n");
  printf("C) Control Power Unit - Unidade de Controle de Energia\n");
  printf("D) Central Processing Unit - Unidade Central de Processamento\n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("Qual a resposta certa?\n");
  scanf("%s", &resp);
  if ((resp == 'd') || (resp = 'D')) {
    printf("\nResposta correta\n");
    certo_1++;
  } else {
    printf("\nResposta errada\n");
    printf("Resposta correta: Letra \"D\"\n");
    errado_1++;
  }
  printf("---------------------------------------------------------------------"
         "----------\n");
  getchar();
  printf("Pressione \"enter\" para continuar...");
  getchar();
  system("clear || cls");
  printf("*--------------------------------*\n");
  printf("|  Pergunta 2 - Nivel Facil   |\n");
  printf("*--------------------------------*\n\n");
  printf("Quais são as principais fabricantes de processadores para Desktops e "
         "notebooks ?\n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("A) Intel e Dell \n");
  printf("B) Dell e AMD \n");
  printf("C) Intel e AMD \n");
  printf("D) AMD e IBM \n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("Qual a resposta certa?\n");
  scanf("%s", &resp);
  if ((resp == 'c') || (resp == 'C')) {
    printf("\nResposta correta\n");
    certo_1++;
  } else {
    printf("\nResposta errada\n");
    printf("Resposta correta: Letra \"C\"\n");
    errado_1++;
  }
  getchar();
  printf("Pressione \"enter\" para continuar...");
  getchar();
  system("clear || cls");

  printf("--------------------------------\n");
  printf("|  Pergunta 3 - Nivel Facil   |\n");
  printf("--------------------------------\n\n");
  printf("Quais são os sintomas mais comuns de superaquecimento do "
         "processador?\n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("A) Apitos agudos da placa-mãe\n");
  printf("B) Reinicios e cogelamentos inesperados da maquina \n");
  printf("C) Cheiro de queimado que exala de dentro do gabinete \n");
  printf("D) Imagem corrompida, com cores trocadas e manchas \n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("Qual a resposta certa?\n");
  scanf("%s", &resp);
  if ((resp == 'b') || (resp == 'B')) {
    printf("Resposta correta\n");
    certo_1++;
  } else {
    printf("Resposta errada\n");
    printf("Resposta correta: Letra \"C\"\n");
    errado_1++;
  }
  getchar();
  printf("Pressione \"enter\" para continuar...");
  getchar();
  system("clear || cls");
  printf("--------------------------------\n");
  printf("|  Pergunta 4 - Nivel Facil   |\n");
  printf("--------------------------------\n\n");
  printf("O que quer dizer bug ?\n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("A) E a memoria que facilita as tarefas e liberta o processador. \n");
  printf("B) E um tipo de periferico \n");
  printf("C) E um erro de programacao \n");
  printf("D) E uma peca de hardware  \n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("Qual a resposta certa?\n");
  scanf("%s", &resp);
  if ((resp == 'c') || (resp == 'C')) {
    printf("Resposta correta\n");
    certo_1++;
  } else {
    printf("Resposta errada\n");
    printf("Resposta correta: Letra \"C\"\n");
    errado_1++;
  }

  getchar();
  printf("Pressione \"enter\" para continuar...");
  getchar();
  system("clear || cls");
  printf("--------------------------------\n");
  printf("|  Pergunta 5 - Nivel Facil   |\n");
  printf("--------------------------------\n\n");
  printf("O SPAM atualmente em 2012 corresponde a aproximadamente:\n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("A) 50%% de todos os emails \n");
  printf("B) 40%% de todos os bancos de dados mundiais \n");
  printf("C) 80%% de todos os provedores de internet \n");
  printf("D) 32%% da internet \n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("Qual a resposta certa?\n");
  scanf("%s", &resp);
  if ((resp == 'a') || (resp == 'A')) {
    printf("Resposta correta\n");
    certo_1++;
  } else {
    printf("Resposta errada\n");
    printf("Resposta correta: Letra \"C\"\n");
    errado_1++;
  }
  getchar();
  printf("Pressione \"enter\" para continuar...");
  getchar();
  system("clear || cls");
  printf("--------------------------------\n");
  printf("|  Pergunta 6 - Nivel Facil   |\n");
  printf("--------------------------------\n\n");
  printf("A velocidade dos processadores atuais eh normalmente medida em:\n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("A) Hertz ou Hz \n");
  printf("B) Gigahertz ou GHz \n");
  printf("C) Quilo byte ou Kb \n");
  printf("D) Megabyte ou MB \n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("Qual a resposta certa?\n");
  scanf("%s", &resp);
  if ((resp == 'b') || (resp == 'B')) {
    printf("Resposta correta\n");
    certo_1++;
  } else {
    printf("Resposta errada\n");
    printf("Resposta correta: Letra \"C\"\n");
    errado_1++;
  }
  getchar();
  printf("Pressione \"enter\" para continuar...");
  getchar();
  system("clear || cls");
  printf("--------------------------------\n");
  printf("|  Pergunta 7 - Nivel Facil   |\n");
  printf("--------------------------------\n\n");
  printf("O formato padrao dos arquivos gerados pelo Word eh :\n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("A) txt\n");
  printf("B) doc \n");
  printf("C) xls \n");
  printf("D) html \n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("Qual a resposta certa?\n");
  scanf("%s", &resp);
  if ((resp == 'b') || (resp == 'B')) {
    printf("Resposta correta\n");
    certo_1++;
  } else {
    printf("Resposta errada\n");
    printf("Resposta correta: Letra \"C\"\n");
    errado_1++;
  }
  getchar();
  printf("Pressione \"enter\" para continuar...");
  getchar();
  system("clear || cls");
  printf("--------------------------------\n");
  printf("|  Pergunta 8 - Nivel Facil   |\n");
  printf("--------------------------------\n\n");
  printf("A extensao padrao de arquivos de audio no windows eh:\n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("A) WAV \n");
  printf("B) BIN \n");
  printf("C) ARC \n");
  printf("D) WMF \n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("Qual a resposta certa?\n");
  scanf("%s", &resp);
  if ((resp == 'a') || (resp == 'A')) {
    printf("Resposta correta\n");
    certo_1++;
  } else {
    printf("Resposta errada\n");
    printf("Resposta correta: Letra \"C\"\n");
    errado_1++;
  }
  getchar();
  printf("Pressione \"enter\" para continuar...");
  getchar();
  system("clear || cls");
  printf("--------------------------------\n");
  printf("|  Pergunta 9 - Nivel Facil   |\n");
  printf("--------------------------------\n\n");
  printf("O numero binario 10101010 equivale a qual numero decimal apresentado "
         " ?\n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("A) 140\n");
  printf("B) 150 \n");
  printf("C) 160\n");
  printf("D) 170 \n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("Qual a resposta certa?\n");
  scanf("%s", &resp);
  if ((resp == 'd') || (resp == 'D')) {
    printf("Resposta correta\n");
    certo_1++;
  } else {
    printf("Resposta errada\n");
    printf("Resposta correta: Letra \"C\"\n");
    errado_1++;
  }
  getchar();
  printf("Pressione \"enter\" para continuar...");
  getchar();
  system("clear || cls");
  printf("--------------------------------\n");
  printf("|  Pergunta 10 - Nivel Facil   |\n");
  printf("--------------------------------\n\n");
  printf(
      "Eh um tipo de computador que tem como funcao controlar as demais "
      "estacoes de trabalho quando ligados em uma rede de computadores: ?\n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("A) Estacao de trabalho\n");
  printf("B) UMPC \n");
  printf("C) Servidor \n");
  printf("D) Desktop \n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("Qual a resposta certa?\n");
  scanf("%s", &resp);
  if ((resp == 'c') || (resp == 'C')) {
    printf("Resposta correta\n");
    certo_1++;
  } else {
    printf("Resposta errada\n");
    printf("Resposta correta: Letra \"C\"\n");
    errado_1++;
  }
  getchar();
  printf("Pressione \"enter\" para continuar...");
  getchar();
  system("clear || cls");
}

void MenuSete() {
  int resErrado1 = errado_1;
  int resAcerto1 = certo_1;
  int ponto = certo_1 * 150;
  system("clear || cls");
  printf("----------------------------------\n");
  printf("              Menu 7              \n");
  printf("----------------------------------\n\n");
  printf("RESULTADOS DO JOGO \n\n");
  printf("PONTUACAO DO NIVEL %s\n", nomeNivel);
  printf("Participante: %s\n\n", nome);
  printf("Total de acertos  : %d\n", resAcerto1);
  printf("Total de erros    : %d\n", resErrado1);
  printf("Pontuacao total   : %d\n\n", ponto);
  getchar();
  printf("PRESSIONE ENTER PARA VOLTAR...");
  getchar();
  system("clear || cls");
}

int main() {
  system("clear || cls");
  int nivel = 1;
  do {
    EscolhaOpcao();
    scanf("%d", &nivel);
    switch (nivel) {
    case 0:
      MenuZero();
      break;
    case 2:
      MenuDois();
      break;
    case 5:
      MenuCinco();
      break;
    case 6:
      MenuSeis();
      break;
    case 7:
      MenuSete();
      break;
    default:
      printf("VOCE DIGITOU ALGO ERRADO!\n");
    }
  } while (nivel);
}