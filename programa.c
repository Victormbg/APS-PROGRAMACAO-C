#include <stdio.h>
#include <stdlib.h> // Fazer o system("clear") funciona
#include <unistd.h> // Fazer o sleep(3) funcionar

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
  system ("clear || cls");
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
  getchar();printf("PRESSIONE ENTER PARA VOLTAR...");
  getchar();system ("clear || cls");
}

void MenuSeis() {
  system("clear || cls");
  printf("----------------------------------\n");
  printf("Menu 6 \n");
  printf("----------------------------------\n");
  printf("PROGRAMADORES.\n\n");
  printf("Victor Manuel de Barros Garcia\n");
  printf("Marcos Paulo Carneiro Tavares\n");
  printf("Nome do Aluno 3\n\n");
  getchar();printf("PRESSIONE ENTER PARA VOLTAR...");
  getchar();system ("clear || cls");
}
void MenuSete(){
    system("clear || cls");
    printf("----------------------------------\n");
    printf("Menu 7 \n");
    printf("----------------------------------\n\n");  
    printf("RESULTADOS DO JOGO \n\n");
    printf("PONTUACAO DO NIVEL  XXXX \n");
    printf("Participante:  nome \n\n");
    printf("Total de acertos  : \n");
    printf("Total de erros    : \n");
    printf("Pontuacao total   : \n\n");
    getchar();printf("PRESSIONE ENTER PARA VOLTAR...");
    getchar();system ("clear || cls");
}
 

void MenuDois(){
    system ("clear || cls");
    char nome[100];
    printf("DIGITE O NOME DO PARTICIPANTE: ");
    scanf("%s", nome);
    system ("clear || cls");
    printf("SEJA BEM VINDO %s\n\n",nome);    
    printf("Este e um jogo de perguntas e respostas. O jogador devera escolher,\n");
    printf("dentre as 4 alternativas apenas uma e em seguida pressionar enter\n");
    printf("Para mais informacoes, acesse a opcao intrucoes do menu do jogo.\n\n");
    getchar();printf("PRESSIONE ENTER PARA COMECAR...");
    getchar();system ("clear || cls");
    char resp,inicio;
    char cert='s';
    system("clear || cls");
    //Troca a cor do console // 2 verde 7 branco
    system("color 27");
    printf("*===============================================================================*\n");
    printf("|  ___   ___ ___ ___	___ _________ ___									    |\n");
    printf("|  XXX_  XXX XXX XXX	XXX XXXXXXXXX XXX									    |\n");
    printf("|  XXXX_ XXX XXX XXX	XXX XXXXXXXXX XXX								    	|\n");
    printf("|  XXXXX_XXX XXX XXX_  _XXX XXX____   XXX								     	|\n");
    printf("|  XXXXXXXXX XXX  XXX__XXX  XXXXXXX   XXX									    |\n");
    printf("|  XXX XXXXX XXX   XXXXXX   XXX______ XXX______						     	    |\n");
    printf("|  XXX  XXXX XXX	XXXX	XXXXXXXXX XXXXXXXXX							        |\n");
    printf("|  XXX   XXX XXX	 XX	    XXXXXXXXX XXXXXXXXX							        |\n");
    printf("|								_________ _________ _________ ___ ___	     	|\n");
    printf("|								XXXXXXXXX XXXXXXXXX XXXXXXXXX XXX XXX		    |\n");
    printf("|								XXXXXXXXX XXXXXXXXX XXXXXXXXX XXX XXX		    |\n");
    printf("|								XXX___	  XXX___XXX XXX	      XXX XXX           |\n");
    printf("|								XXXXXX	  XXXXXXXXX XXX	      XXX XXX		    |\n");
    printf("|								XXXXXX	  XXXXXXXXX XXX______ XXX XXX______     |\n");
    printf("|								XXX	      XXX   XXX XXXXXXXXX XXX XXXXXXXXX     |\n");
    printf("|								XXX	      XXX   XXX XXXXXXXXX XXX XXXXXXXXX     |\n");
    printf("|																			    |\n");
    printf("*=============================================================================*\n\n");
    printf("			  AS PERGUNSTAS DE NIVEL \"FACIL\" VALEM 2 PONTOS CADA             \n\n");
    printf ("Pressione \"enter\" para continuar...");
    getchar();system ("clear || cls");
    //Troca a cor do console // 0 preto 7 branco
    system("color 07");
    printf ("*--------------------------------*\n");
    printf ("|  Pergunta 1 - Nivel Facil  |\n");
    printf ("*--------------------------------*\n\n");
    printf ("O que significa CPU?\n");
    printf ("-------------------------------------------------------------------------------\n");
    printf ("A) Control Panel Unit - Unidade de Painel de Controle \n");
    printf ("B) Central Power Unit - Unidade de Força Central\n");
    printf ("C) Control Power Unit - Unidade de Controle de Energia\n");
    printf ("D) Central Processing Unit - Unidade Central de Processamento\n");
    printf ("-------------------------------------------------------------------------------\n");
    printf ("Qual a resposta certa?\n");
    scanf ("%s",&resp);
    if ((resp=='d')||(resp='D'))
    {
    printf ("Resposta correta\n");
    //certo_1++;
    }
    else
    {
    printf ("Resposta errada\n");
    printf ("Resposta correta: Letra \"D\"\n");
    //errado_1++;
    }
    printf ("-------------------------------------------------------------------------------\n");
    getchar();printf ("Pressione \"enter\" para continuar...");
    getchar();system("clear || cls");
    printf ("*--------------------------------*\n");
    printf ("|  Pergunta 2 - Nivel Facil   |\n");
    printf ("*--------------------------------*\n\n");
    printf ("Quais são as principais fabricantes de processadores para Desktops e notebooks ?\n");
    printf ("-------------------------------------------------------------------------------\n");
    printf ("A) Intel e Dell \n");
    printf ("B) Dell e AMD \n");
    printf ("C) Intel e AMD \n");
    printf ("D) AMD e IBM \n");
    printf ("-------------------------------------------------------------------------------\n");
    printf ("Qual a resposta certa?\n");
    scanf ("%s",&resp);
    if ((resp=='c')||(resp=='C'))
    {
    printf ("Resposta correta\n");
    //certo_1++;
    }
    else
    {
    printf ("Resposta errada\n");
    printf ("Resposta correta: Letra \"C\"\n");
    //errado_1++;
}
}

int main() {
  int nivel = 1;
  do{
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
    }while (nivel);  
}