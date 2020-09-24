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
int main() {
  int opcao = EscolhaOpcao();
  switch (opcao) {
  case 0:
    MenuZero();
    break;

  default:
    printf("VOCE DIGITOU ALGO ERRADO!\n");
  }
}
