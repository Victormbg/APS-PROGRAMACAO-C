#include <stdio.h>
#include <stdlib.h> // Fazer o system("clear") funciona
#include <unistd.h> // Fazer o sleep(3) funcionar

int EscolhaOpcao() {
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
  printf("O QUE DESEJA FAZER ?                                    \n");
  int nivel;
  scanf("%d", &nivel);
  system("clear");
  return nivel;
}
void MenuZero() {
  printf("--------------------------------------------------------\n");
  printf("Menu 0\n");
  printf("--------------------------------------------------------\n");
  printf("Deseja sair do jogo S Sim / N Nao?\n");
  char opcao;
  scanf("%s", &opcao);
  fflush(stdin);
  if (opcao == 'S') {
    system("clear");
    printf("Fechando programa...\n");
    sleep(3);
    exit(0);
  } else {
    printf("Volta ao menu");
  }
}

void MenuCinco() {
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
}

void MenuSeis() {
  printf("----------------------------------\n");
  printf("Menu 6 \n");
  printf("----------------------------------\n");
  printf("PROGRAMADORES.\n\n");
  printf("Victor Manuel de Barros Garcia\n");
  printf("Nome do Aluno 2\n");
  printf("Nome do Aluno 3\n");
}

int main() {
  int opcao = EscolhaOpcao();
    switch (opcao) {
    case 0:
      MenuZero();
      break;
    case 5:
      MenuCinco();
      break;
    case 6:
      MenuSeis();
      break;
    default:
      printf("VOCE DIGITOU ALGO ERRADO!\n");
    }
  
}