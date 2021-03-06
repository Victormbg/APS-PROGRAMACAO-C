#include <stdio.h>
#include <stdlib.h> // Fazer o system("clear || cls") funciona
#include <string.h>
#include <unistd.h> // Fazer o sleep(3) funcionar

int certo_1 = 0, errado_1 = 0;
int certo_2 = 0, errado_2 = 0;
int certo_3 = 0, errado_3 = 0;
char nome[100];
char nomeNivel[100];

void EscolhaOpcao()
{
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

void MenuZero()
{
       system("clear || cls");
       printf("--------------------------------------------------------\n");
       printf("Menu 0\n");
       printf("--------------------------------------------------------\n");
       printf("Deseja sair do jogo S Sim / N Nao?\n");
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

void MenuCinco()
{
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

void MenuSeis()
{
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

void MenuDois()
{
       certo_1 = 0, errado_1 = 0;
       certo_2 = 0, errado_2 = 0;
       certo_3 = 0, errado_3 = 0;
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
       printf("==================================================\n");
       printf("|| XXX    XX  XX  XX     XX  XXXXXXX  XX        ||\n");
       printf("|| XX X   XX  XX  XX     XX  XX       XX        ||\n");
       printf("|| XX  X  XX  XX   XX   XX   XXXXX    XX        ||\n");
       printf("|| XX   X XX  XX    XX XX    XX       XX        ||\n");
       printf("|| XX    XXX  XX     XXX     XXXXXXX  XXXXXX    ||\n");
       printf("--------------------------------------------------\n");
       printf("|| XXXXX   XXX   XXXXXX  XX  XX       ||          \n");
       printf("|| XX     XX XX  XX      XX  XX       ||          \n");
       printf("|| XXXXX  XXXXX  XX      XX  XX       ||          \n");
       printf("|| XX     XX XX  XX      XX  XX       ||          \n");
       printf("|| XX     XX XX  XXXXXX  XX  XXXXXX   ||          \n");
       printf("==================================================\n\n");
       printf("  AS PERGUNSTAS DE NIVEL \"FACIL\" VALEM 150 PONTOS CADA\n\n");
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
       if ((resp == 'd') || (resp = 'D'))
       {
              printf("\nResposta correta\n");
              certo_1++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"D\"\n");
              errado_1++;
       }
       printf("\n---------------------------------------------------------------\n");
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
       if ((resp == 'c') || (resp == 'C'))
       {
              printf("\nResposta correta\n");
              certo_1++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_1++;
       }
       printf("\n---------------------------------------------------------------\n");
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
       if ((resp == 'b') || (resp == 'B'))
       {
              printf("\nResposta correta\n");
              certo_1++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_1++;
       }
       printf("\n---------------------------------------------------------------\n");
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
       if ((resp == 'c') || (resp == 'C'))
       {
              printf("\nResposta correta\n");
              certo_1++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_1++;
       }
       printf("\n---------------------------------------------------------------\n");
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
       if ((resp == 'a') || (resp == 'A'))
       {
              printf("\nResposta correta\n");
              certo_1++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_1++;
       }
       printf("\n---------------------------------------------------------------\n");
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
       if ((resp == 'b') || (resp == 'B'))
       {
              printf("\nResposta correta\n");
              certo_1++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_1++;
       }
       printf("\n---------------------------------------------------------------\n");
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
       if ((resp == 'b') || (resp == 'B'))
       {
              printf("\nResposta correta\n");
              certo_1++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_1++;
       }
       printf("\n---------------------------------------------------------------\n");
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
       if ((resp == 'a') || (resp == 'A'))
       {
              printf("\nResposta correta\n");
              certo_1++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_1++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 9 - Nivel Facil   |\n");
       printf("--------------------------------\n\n");
       printf("O numero binario 10101010 equivale a qual numero decimal apresentado"
              " ?\n");
       printf("\n---------------------------------------------------------------\n");
       printf("A) 140\n");
       printf("B) 150 \n");
       printf("C) 160\n");
       printf("D) 170 \n");
       printf("\n---------------------------------------------------------------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'd') || (resp == 'D'))
       {
              printf("\nResposta correta\n");
              certo_1++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_1++;
       }
       printf("\n---------------------------------------------------------------\n");
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
       printf("\n---------------------------------------------------------------\n");
       printf("A) Estacao de trabalho\n");
       printf("B) UMPC \n");
       printf("C) Servidor \n");
       printf("D) Desktop \n");
       printf("\n---------------------------------------------------------------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'c') || (resp == 'C'))
       {
              printf("\nResposta correta\n");
              certo_1++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_1++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       system("clear || cls");
       printf("O usuario %s obteve o resultado : Nivel : %s\n", nome, nomeNivel);
       printf("Pontos : %d\n", certo_1);
       printf("Percentual de acerto : %d\n", certo_1 * 150);
       printf("\n---------------------------------------------------------------\n");
       printf("Pressione ENTER para retornar ao menu");
       getchar();
       system("clear || cls");
}

void MenuTres()
{
       certo_1 = 0, errado_1 = 0;
       certo_2 = 0, errado_2 = 0;
       certo_3 = 0, errado_3 = 0;
       char resp;
       strcpy(nomeNivel, "");
       strcpy(nomeNivel, "Medio");
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
       // Troca a cor do console "7 branco c vermelho"
       system("color 7c");
       printf("*===============================================================*\n");
       printf("|| XXX    XX  XX  XX     XX  XXXXXXX  XX        ||               \n");
       printf("|| XX X   XX  XX  XX     XX  XX       XX        ||               \n");
       printf("|| XX  X  XX  XX   XX   XX   XXXXX    XX        ||               \n");
       printf("|| XX   X XX  XX    XX XX    XX       XX        ||               \n");
       printf("|| XX    XXX  XX     XXX     XXXXXXX  XXXXXX    ||               \n");
       printf("*------------------------------------------------*               \n");
       printf("|| XXXX   XXXX  XXXXXX  XXXXXXX    XX   XXXXX   ||               \n");
       printf("|| XX XX XX XX  XX      XX    XX   XX  XX   XX  ||               \n");
       printf("|| XX  XXX  XX  XXXXX   XX     XX  XX  XX   XX  ||               \n");
       printf("|| XX   X   XX  XX      XX    XX   XX  XX   XX  ||               \n");
       printf("|| XX       XX  XXXXXX  XXXXXXX    XX   XXXXX   ||               \n");
       printf("*=============================================================*\n\n");
       printf("  AS PERGUNSTAS DE NIVEL \"MEDIO\" VALEM 200 PONTOS CADA       \n\n");
       printf("Pressione \"enter\" para continuar...");
       // Limpar tela no terminal
       getchar();
       system("clear || cls");
       // Troca a cor do console "0 preto 7 branco"
       system("color 07");
       printf("--------------------------------\n");
       printf("|  Pergunta 1 - Nivel Medio  |\n");
       printf("--------------------------------\n\n");
       printf("O primeiro dominio registrado na internet foi:\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) www.datacenter.com\n");
       printf("B) www.symbolics.com\n");
       printf("C) www.social.com\n");
       printf("D) www.us.gov\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'b') || (resp = 'B'))
       {
              printf("\nResposta correta\n");
              certo_2++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"D\"\n");
              errado_2++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 2 - Nivel Medio   |\n");
       printf("--------------------------------\n\n");
       printf("A maior parte das imagens da internet e composta por:\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) Papeis de parede\n");
       printf("B) Papeis de parede\n");
       printf("C) Mulheres nuas\n");
       printf("D) Fotografia de Eletronicos\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'a') || (resp == 'A'))
       {
              printf("\nResposta correta\n");
              certo_2++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_2++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 3 - Nivel Médio   |\n");
       printf("--------------------------------\n\n");
       printf("Quais destas nao e uma linguagem de programacao ? \n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) Cobol\n");
       printf("B) Basic\n");
       printf("C) Smalltalk\n");
       printf("D) Preview\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'd') || (resp == 'D'))
       {
              printf("\nResposta correta\n");
              certo_2++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_2++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 4 - Nivel Medio   |\n");
       printf("--------------------------------\n\n");
       printf("Qual a forma de memoria mais rapida, presente nos nossos "
              "computadores ?\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) A memoria Flash\n");
       printf("B) A GDDR5\n");
       printf("C) A memoria RAM DDR3\n");
       printf("D) A memoria Cache\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'c') || (resp == 'C'))
       {
              printf("\nResposta correta\n");
              certo_2++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_2++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 5 - Nivel Medio   |\n");
       printf("--------------------------------\n\n");
       printf("Qual a vida util estimada para um DVD de boa qualidade ?\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) Aproximadamente 100 anos\n");
       printf("B) É impossivel medir a durabilidade\n");
       printf("C) 9 mil horas de leitura\n");
       printf("D) 350 mil dias \n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'a') || (resp == 'A'))
       {
              printf("\nResposta correta\n");
              certo_2++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_2++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 6 - Nivel Medio   |\n");
       printf("--------------------------------\n\n");
       printf("A unidade central de processamento (UCP) e composta de:\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) Unidade Central de Processamento e Memória de Massa.\n");
       printf("B) Dispositivos ou Unidades de Entrada\n");
       printf("C) Unidade Central de Processamento e Memoria Principal\n");
       printf("D) Unidade de Controle e Unidade de Lógica e Aritmetica\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'd') || (resp == 'D'))
       {
              printf("\nResposta correta\n");
              certo_2++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_2++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 7 - Nivel Medio   |\n");
       printf("--------------------------------\n\n");
       printf("A unidade de medida da resolucao de uma impressora e dada em:\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) CPS\n");
       printf("B) BPM\n");
       printf("C) PPM\n");
       printf("D) DPI\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'd') || (resp == 'D'))
       {
              printf("\nResposta correta\n");
              certo_2++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_2++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 8 - Nivel Medio   |\n");
       printf("--------------------------------\n\n");
       printf("Entre os meios de transmissao abaixo,  assinale aquele que nao eh "
              "guiado:\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) par trançado\n");
       printf("B) cabo coaxial\n");
       printf("C) microondas\n");
       printf("D) fibra ótica\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'c') || (resp == 'C'))
       {
              printf("\nResposta correta\n");
              certo_2++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_2++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 9 - Nivel Medio   |\n");
       printf("--------------------------------\n\n");
       printf("Em modo de espera, quais componentes ficam ligadas ?\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) Placa mae, processador, monitor\n");
       printf("B) Placa mae, hd, monitor\n");
       printf("C) Placa mae,memoria ram\n");
       printf("D) Placa mae, Placa de rede, modem, memoria ram\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'a') || (resp == 'A'))
       {
              printf("\nResposta correta\n");
              certo_2++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_2++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 10 - Nivel Medio   |\n");
       printf("--------------------------------\n\n");
       printf("Qual destes sistemas operacionais e usado em trens ?\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) Windows\n");
       printf("B) Linux\n");
       printf("C) Unix \n");
       printf("D) Android \n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'b') || (resp == 'B'))
       {
              printf("\nResposta correta\n");
              certo_2++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_2++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       system("clear || cls");
       printf("O usuario %s obteve o resultado : Nivel : %s\n", nome, nomeNivel);
       printf("Pontos : %d\n", certo_2);
       printf("Percentual de acerto : %d\n", certo_2 * 200);
       printf("\n---------------------------------------------------------------\n");
       printf("Pressione ENTER para retornar ao menu");
       getchar();
       system("clear || cls");
}

void MenuQuatro()
{
       certo_1 = 0, errado_1 = 0;
       certo_2 = 0, errado_2 = 0;
       certo_3 = 0, errado_3 = 0;
       char resp;
       strcpy(nomeNivel, "");
       strcpy(nomeNivel, "Dificil");
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
       // Troca a cor do console "7 branco c vermelho"
       system("color c7");
       printf("*================================================*\n");
       printf("|| XXX    XX  XX  XX     XX  XXXXXXX  XX        ||\n");
       printf("|| XX X   XX  XX  XX     XX  XX       XX        ||\n");
       printf("|| XX  X  XX  XX   XX   XX   XXXXX    XX        ||\n");
       printf("|| XX   X XX  XX    XX XX    XX       XX        ||\n");
       printf("|| XX    XXX  XX     XXX     XXXXXXX  XXXXXX    ||\n");
       printf("*------------------------------------------------*\n");
       printf("|| XXXXXX    XX  XXXXX  XX   XXXXX  XX  XX     || \n");
       printf("|| XX    XX  XX  XX     XX  XX      XX  XX     || \n");
       printf("|| xX    XX  XX  XXXX   XX  XX      XX  XX     || \n");
       printf("|| xX    XX  XX  XX     XX  XX      XX  XX     || \n");
       printf("|| XXXXXX    XX  XX     XX   XXXXX  XX  XXXXXX || \n");
       printf("*================================================*\n\n");
       printf(
           "  AS PERGUNSTAS DE NIVEL \"DIFICIL\" VALEM 250 PONTOS CADA       \n\n");
       printf("Pressione \"enter\" para continuar...");
       // Limpar tela no terminal
       getchar();
       system("clear || cls");
       // Troca a cor do console "c vermelho 7 branco"
       system("color 07");
       printf("--------------------------------\n");
       printf("|  Pergunta 1 - NivelDificil  |\n");
       printf("--------------------------------\n\n");
       printf("Quando foi lançado o primeiro microprocessador ? \n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) Em 1971, havendo 3 concorrentes \n");
       printf("B) Em 1985, pela ARM Foundation\n");
       printf("C) Em 1979, pela Motorola \n");
       printf("D) Em 1944, durante a Segunda Guerra Mundial\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'a') || (resp = 'A'))
       {
              printf("\nResposta correta\n");
              certo_3++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"D\"\n");
              errado_3++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 2 - Nivel Dificil   |\n");
       printf("--------------------------------\n\n");
       printf("Quem foi o pai da computacao ?\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) Allan Moore\n");
       printf("B) Albert Einstein\n");
       printf("C) Thomas Ericsson\n");
       printf("D) Alan Turing\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'd') || (resp == 'D'))
       {
              printf("\nResposta correta\n");
              certo_3++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_3++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 3 - Nivel Dificil   |\n");
       printf("--------------------------------\n\n");
       printf("O nome original do primeiro Xbox era:\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) Directx Box\n");
       printf("B) BillBox\n");
       printf("C) ZBox\n");
       printf("D) MicrosoftBox\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'a') || (resp == 'A'))
       {
              printf("\nResposta correta\n");
              certo_3++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_3++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 4 - Nivel Dificil   |\n");
       printf("--------------------------------\n\n");
       printf("Quais são as principais fabricantes de processadores ARM ?\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) Samsung, PowerVR, AMD Tech e Intel\n");
       printf("B) Infineon Imaging, Texas Qualcomm e NVIDIA\n");
       printf("C) PowerVR, SGX, NVIDIA e Qualcomm Instruments\n");
       printf("D) Samsung, Texas Instruments, Qualcomm e NVIDIA\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'd') || (resp == 'D'))
       {
              printf("\nResposta correta\n");
              certo_3++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_3++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 5 - Nivel Dificil   |\n");
       printf("--------------------------------\n\n");
       printf("Qual das pastas abaixo nao pode ser criada no Windows ?\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) Trojan\n");
       printf("B) Sys32\n");
       printf("C) Con\n");
       printf("D) Sys\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'c') || (resp == 'C'))
       {
              printf("Resposta correta\n");
              certo_3++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_3++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 6 - Nivel Dificil   |\n");
       printf("--------------------------------\n\n");
       printf("O que eh firmware ?\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) Interface basica do sistema operacional do Macintosh.\n");
       printf("B) Conjunto de instrucoes para o funcionamento de um dispositivo.\n");
       printf("C) Byte existente no inicio de uma trilha de disco\n");
       printf("D) Eh um tipo de memoria nao volatil\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'd') || (resp == 'D'))
       {
              printf("\nResposta correta\n");
              certo_3++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_3++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 7 - Nivel Dificil   |\n");
       printf("--------------------------------\n\n");
       printf("A tecnica em que parte do programa eh armazenada em disco e levada "
              "para a memoria para serexecutada quando necessario eh chamada de:\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) armazenamento virtual\n");
       printf("B) alocação de memoria\n");
       printf("C) priorizacao de memoria\n");
       printf("D) alocação de recursos\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'b') || (resp == 'B'))
       {
              printf("\nResposta correta\n");
              certo_3++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_3++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 8 - Nivel Dificil   |\n");
       printf("--------------------------------\n\n");
       printf(" FSB (Front Size Bus), tambem conhecido como barramento frontal, "
              "realiza a ligacao entre\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) o processador (CPU) e o chipset\n");
       printf("B) o chipset e a memoria RAM\n");
       printf("C) o BIOS e a memória RAM\n");
       printf("D) o chipset e a placa-mãe\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'd') || (resp == 'D'))
       {
              printf("\nResposta correta\n");
              certo_3++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_3++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 9 - Nivel Dificil   |\n");
       printf("--------------------------------\n\n");
       printf("Em relacao as topologias de redes, eh correto afirmar que:\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) topologia em estrela todas as estacoes sao interligadas duas a "
              "duas entre si\n");
       printf("B) rede em anel consiste em estacoes conectadas atraves de um "
              "caminho fechado\n");
       printf("C) redes por chaveamento de pacotes cada estacao so pode realizar "
              "uma unica tarefa\n");
       printf("D) topologia em estrela a falha de qualquer das estacoes causa a "
              "parada total do sistema\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'd') || (resp == 'D'))
       {
              printf("\nResposta correta\n");
              certo_3++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_3++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       printf("--------------------------------\n");
       printf("|  Pergunta 10 - Nivel Dificil   |\n");
       printf("--------------------------------\n\n");
       printf("CGA, EGA, VGA e SVGA sao siglas que identificamadaptadores graficos "
              "para:\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("A) Videos\n");
       printf("B) Impressoras\n");
       printf("C) Drivers\n");
       printf("D) Teclados\n");
       printf("---------------------------------------------------------------------"
              "----------\n");
       printf("Qual a resposta certa?\n");
       scanf("%s", &resp);
       if ((resp == 'a') || (resp == 'A'))
       {
              printf("\nResposta correta\n");
              certo_3++;
       }
       else
       {
              printf("\nResposta errada\n");
              printf("Resposta correta: Letra \"C\"\n");
              errado_3++;
       }
       printf("\n---------------------------------------------------------------\n");
       getchar();
       printf("Pressione \"enter\" para continuar...");
       getchar();
       system("clear || cls");
       system("clear || cls");
       printf("O usuario %s obteve o resultado : Nivel : %s\n", nome, nomeNivel);
       printf("Pontos : %d\n", certo_3);
       printf("Percentual de acerto : %d\n", certo_3 * 250);
       printf("\n---------------------------------------------------------------\n");
       printf("Pressione ENTER para retornar ao menu");
       getchar();
       system("clear || cls");
}

void MenuSete()
{
       int resErrado, resAcerto, ponto;
       if (errado_1 == 0 && certo_1 == 0 && errado_3 == 0 && certo_3 == 0)
       {
              resErrado = errado_2;
              resAcerto = certo_2;
              ponto = certo_2 * 200;
       }
       else if (errado_2 == 0 && certo_2 == 0 && errado_3 == 0 && certo_3 == 0)
       {
              resErrado = errado_1;
              resAcerto = certo_1;
              ponto = certo_1 * 150;
       }
       else if (errado_1 == 0 && certo_1 == 0 && errado_2 == 0 && certo_2 == 0)
       {
              resErrado = errado_3;
              resAcerto = certo_3;
              ponto = certo_3 * 250;
       }
       else
       {
              resErrado = 0;
              resAcerto = 0;
              ponto = 0;
       }
       system("clear || cls");
       printf("----------------------------------\n");
       printf("              Menu 7              \n");
       printf("----------------------------------\n\n");
       printf("RESULTADOS DO JOGO \n\n");
       printf("PONTUACAO DO NIVEL %s\n", nomeNivel);
       printf("Participante: %s\n\n", nome);
       printf("Total de acertos  : %d\n", resAcerto);
       printf("Total de erros    : %d\n", resErrado);
       printf("Pontuacao total   : %d\n\n", ponto);
       getchar();
       printf("PRESSIONE ENTER PARA VOLTAR...");
       getchar();
       system("clear || cls");
}

int main()
{
       system("clear || cls");
       int nivel = 1;
       do
       {
              EscolhaOpcao();
              scanf("%d", &nivel);
              switch (nivel)
              {
              case 0:
                     MenuZero();
                     break;
              case 2:
                     MenuDois();
                     break;
              case 3:
                     MenuTres();
                     break;
              case 4:
                     MenuQuatro();
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
                     system("clear || cls");
              }
       } while (nivel);
}