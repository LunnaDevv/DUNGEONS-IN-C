#include <stdio.h>
#include <stdlib.h>
/*----------------*/
#include "../includes/images.h"
#include "../includes/config.h"
/*@HUD - Menu, Botões, etc*/
void carregandoArea(Player player) {
  system("clear");
  imageMap(&player);
  printf("\nCaminhando até o local.\n");
  system("sleep .4");
  system("clear");
  imageMap(&player);
  printf("\nCaminhando até o local..\n");
  system("sleep .4");
  system("clear");
  imageMap(&player);
  printf("\nCaminhando até o local..\n");
  system("sleep .4");
  system("clear");
}
void imageButtonsInicial() {
  printf("\t\t▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
  printf("\t\t█      ▄▄▄▄▄      █\n");
  printf("\t\t█      █ ▲ █      █\n");
  printf("\t\t█ ▄▄▄▄▄█ 1 █▄▄▄▄▄ █\n");
  printf("\t\t█ █ ◀ 4     2 ▶ █ █\n");
  printf("\t\t█ ▀▀▀▀▀█ 3 █▀▀▀▀▀ █\n");
  printf("\t\t█      █ ▼ █      █\n");
  printf("\t\t█      ▀▀▀▀▀      █\n");
  printf("\t\t█ Digite o número █\n");
  printf("\t\t█   da direção    █\n");
  printf("\t\t▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
}
void imageButtons() {
  printf("\t\t▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄ ╔═════════════════════╗\n");
  printf("\t\t█      ▄▄▄▄▄      █ █  5 | INVENTÁRIO     █\n");
  printf("\t\t█      █ ▲ █      █ █━━━━━━━━━━━━━━━━━━━━━█\n");
  printf("\t\t█ ▄▄▄▄▄█ 1 █▄▄▄▄▄ █ █  6 | LOJA           █\n");
  printf("\t\t█ █ ◀ 4     2 ▶ █ █ █━━━━━━━━━━━━━━━━━━━━━█\n");
  printf("\t\t█ ▀▀▀▀▀█ 3 █▀▀▀▀▀ █ █  7 | SALVAR         █\n");
  printf("\t\t█      █ ▼ █      █ █━━━━━━━━━━━━━━━━━━━━━█\n");
  printf("\t\t█      ▀▀▀▀▀      █ █  8 | MENU PRINCIPAL █\n");
  printf("\t\t█ Digite o número █ █━━━━━━━━━━━━━━━━━━━━━█\n");
  printf("\t\t█   da direção    █ █  9 | ENCERRAR       █\n");
  printf("\t\t▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀ ╚═════════════════════╝\n");
}

void imageControls(){
  printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
      printf("█           ▃▄▅▆▇█▓▒   ");
  printf(MAG "CONTROLES" RESET);
  printf("   ▒▓█▇▆▅▄▃▂           █\n");
  
  printf("█                                                      █\n");
  printf("█   ▄▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▄    Dungeons in C usa um       █\n");
  printf("█  █░░░█░░░░░░░░░░▄▄░██░█ sistema de 'controles' que   █\n");
  printf("█  █░▀▀█▀▀░▄▀░▄▀░░▀▀░▄▄░█ se baseia no jogador enviar  █\n");
  printf("█  █░░░▀░░░▄▄▄▄▄░░██░▀▀░█ respostas, digitando e       █\n");
  printf("█   ▀▄▄▄▄▄▀     ▀▄▄▄▄▄▄▀ enviando com ENTER em seguida █\n");
  printf("█                             ╔══════════════════════╗ █\n");
  printf("█      Sempre que se que      ║ ║║║░░▄██║║║║░░░▄█░╔╗ ║ █\n");
  printf("█ deparar com texto, apenas   ║ ╚╬╝░██▄█╬╬╬╬╬╬███░║║ ║ █\n");
  printf("█ aperte ENTER em seu teclado ║ ░║░░░▀██║║║║░░░▀█░╠╝ ║ █\n");
  printf("█            >>>              ║ ░║░░░░░░░░░░░░░░░░║░ ║ █\n");
  printf("█                             ╚══════════════════════╝ █\n");
  printf("█   ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄                                █\n");
  printf("█   █      ▄▄▄▄▄      █   Quando se deparar com o mapa █\n");
  printf("█   █      █ ▲ █      █ e desejar se locomover de sala █\n");
  printf("█   █ ▄▄▄▄▄█ 1 █▄▄▄▄▄ █ em sala, digite o numero da    █\n");
  printf("█   █ █ ◀ 4     2 ▶ █ █ direção correspondente ao      █\n");
  printf("█   █ ▀▀▀▀▀█ 3 █▀▀▀▀▀ █ analógico ao lado. Ele estará  █\n");
  printf("█   █      █ ▼ █      █ presente na tela do mapa.      █\n");
  printf("█   █      ▀▀▀▀▀      █                                █\n");
  printf("█   ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀                                █\n");

    printf("█                         ");
  printf(BLU "Caso precise usar um item" RESET);
  printf("    █\n");

    printf("█   ╔═════════════════╗ ");
  printf(BLU "seu inventário. Isso só vale" RESET);
  printf("   █\n");
  printf("█   █");
  printf(BLU "  5 | INVENTÁRIO " RESET);
  printf("█ ");
  printf(BLU "na tela do mapa." RESET);
  printf("               █\n");
  
  printf("█   █━━━━━━━━━━━━━━━━━█   ");
  printf(GRN "Caso precise de mais itens" RESET);
  printf("   █\n");
  
  printf("█   █  ");
  printf(GRN "6 | LOJA" RESET);
  printf("       █ ");
  printf(GRN "basta digitar '6' para abrir a" RESET);
  printf(" █\n");

  printf("█   █━━━━━━━━━━━━━━━━━█ ");
  printf(GRN "loja do Bernardo. Isso só vale" RESET);
  printf(" █\n");
  
  printf("█   █  ");
  printf(RED "7 | SALVAR" RESET);
  printf("     █ ");
  printf(GRN "na tela do mapa." RESET);
  printf("               █\n");
  
  printf("█   ╚═════════════════╝   ");
  printf(RED "Para salvar seu progresso no" RESET);
  printf(" █\n");

  printf("█                       ");
  printf(RED "no jogo, basta, na tela do" RESET);
  printf("     █\n");
  
  printf("█                       ");
  printf(RED "mapa, digitar '7'." RESET);
  printf("             █\n");
  printf("█                                                      █\n");
  printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  


  printf("\nENTER>>>");
getchar();
getchar();
}

void imageTitle() {
  printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf("█           ");
  printf(MAG "▃▄▅▆▇█▓▒ DUNGEONS ✟N C ▒▓█▇▆▅▄▃▂" RESET);
  printf("           █\n");
  printf("█                                                      █\n");
  printf("█                                                      █\n");
  printf("█                    █████████  ▄                      █\n");
  printf("█                   ████████████                       █\n");
  printf("█                    ████▒▒▒▒▒██                       █\n");
  printf("█                     ▀█▒▒▀█▀▒███                      █\n");
  printf("█                     ░▒▀▒░░░▒█▒█                      █\n");
  printf("█                     ▒▀▀▀▀▀▒▒█                        █\n");
  printf("█                      ▒▒▒▒▒▒                          █\n");
  printf("█                                                      █\n");
  printf("█               █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█                 █\n");
  printf("█               █  1 | NOVO JOGO     █                 █\n");
  printf("█               █════════════════════█                 █\n");
  printf("█               █  2 | CARREGAR JOGO █                 █\n");
  printf("█               █════════════════════█                 █\n");
  printf("█               █  3 | CRÉDITOS      █                 █\n");
  printf("█               █════════════════════█                 █\n");
  printf("█               █  4 | CONTROLES     █                 █\n");
  printf("█               █════════════════════█                 █\n");
  printf("█               █  5 | ENCERRAR      █                 █\n");
  printf("█               █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█                 █\n");
  printf("█                                          ");
  printf(MAG "Versão 1.2" RESET);
  printf("  █\n");
  printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
}

void imageMap(Player *player) {
  system("clear");
  printf("                                 ▄▓▄ \n");
  printf("                 █              ▄▓▓▓▄ \n");
  printf("           █████████████       ▄▓▓▓▓▓▄\n");
  printf("     █████████████████████████   ▄█▄  \n");
  printf(" ▄▓▄ █▒▒▒▒▒▒▒█▒▒▒▒▒▒▒█▒▒▒▒▒▒▒█        \n");
  if (player->y == 2) {
    if (player->x == 0)
      printf("▄▓▓▓▄█▒▒▒⇪▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    if (player->x == 1)
      printf("▄▓▓▄ █▒▒▒▒▒▒▒▒▒▒▒⇪▒▒▒▒▒▒▒▒▒▒▒█\n");
    if (player->x == 2)
      printf(" ▄█▄ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒⇪▒▒▒█\n");
  } else {
    printf(" ▄█▄ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  }
  printf("     █▒▒▒▒▒▒▒█▒▒▒▒▒▒▒█▒▒▒▒▒▒▒█\n");
  printf("     ████▒███████▒███████▒████\n");
  printf("     █▒▒▒▒▒▒▒█▒▒▒▒▒▒▒█▒▒▒▒▒▒▒█\n");
  if (player->y == 1) {
    if (player->x == 0)
      printf("     █▒▒▒⇪▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    if (player->x == 1)
      printf("     █▒▒▒▒▒▒▒▒▒▒▒⇪▒▒▒▒▒▒▒▒▒▒▒█\n");
    if (player->x == 2)
      printf("     █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒⇪▒▒▒█\n");
  } else {
    printf("     █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  }
  printf("     █▒▒▒▒▒▒▒█▒▒▒▒▒▒▒█▒▒▒▒▒▒▒█   ▄▓▄\n");
  printf("     ████▒███████▒███████▒████  ▄▓▓▓▄\n");
  printf("     █▒▒▒▒▒▒▒█▒▒▒▒▒▒▒█▒▒▒▒▒▒▒█    █\n");
  if (player->y == 0) {
    if (player->x == 0)
      printf("     █▒▒▒⇪▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    if (player->x == 1)
      printf("     █▒▒▒▒▒▒▒▒▒▒▒⇪▒▒▒▒▒▒▒▒▒▒▒█\n");
    if (player->x == 2)
      printf("     █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒⇪▒▒▒█\n");
  } else {
    printf("     █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  }
  printf(" ▄▓▄ █▒▒▒▒▒▒▒█▒▒▒▒▒▒▒█▒▒▒▒▒▒▒█      ▄█▄\n");
  printf("▄▓▓▓▄███████████▒▒▒███████████    ▄█████▄\n");
  if (player->y == -1) {
    printf("  █  ▒▒▒▒▒▒▒▒▒▒▒▒⇪▒▒▒▒▒▒▒▒▒▒▒▒   ▀██┼█┼██▀\n");
    printf("     ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒███████▒▒▒▒▒▒▒\n");
    printf("     ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n");
  } else {
    printf("  █                              ▀██┼█┼██▀\n");
    printf("                                  ███████\n");
  }
}

void imageIconPlayer(int i){
  if(i==0)
  {
    printf("     █████████████████████████\n");
    printf("     █░░░░░▒      ░          █\n");
    printf("     █    ▄█▀ ▄▄▄▄▄▄▄ ▀█▄▒   █\n");
    printf("     █    ▀█████████████▀    █\n");
    printf("     █  ░░░  █▄▄▄ ▄▄▄█     ▒ █\n");
    printf("     █▒      ████ ████ ░░░░  █\n");
    printf("     █  ░░░░░░███ ███ ▒    ░░█\n");
    printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  }else{
    printf("     █████████████████████████         AÇÕES\n");
    printf("     █░░░░░▒      ░          █ █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
    printf("     █    ▄█▀ ▄▄▄▄▄▄▄ ▀█▄▒   █ █     [1]ATACAR      █\n");
    printf("     █    ▀█████████████▀    █ █━━━━━━━━━━━━━━━━━━━━█\n");
    printf("     █  ░░░  █▄▄▄ ▄▄▄█     ▒ █ █     [2]ITENS       █\n");
    printf("     █▒      ████ ████ ░░░░  █ █━━━━━━━━━━━━━━━━━━━━█\n");
    printf("     █  ░░░░░░███ ███ ▒    ░░█ █     [3]FUGIR       █\n");
    printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█ █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  }
}

void caveira() {
  printf("   ▂▃▄▅▆▇█▓▒░ FIM DE JOGO ░▒▓█▇▆▅▄▃▂\n");
  printf("          ▓▒░ VOCÊ MORREU ░▒▓       \n\n");

  printf("     █████████████████████████████\n");
  printf("     █████████▀▀▀░░░░░░░▀▀▀███████\n");
  printf("     ██████▀░░░░░░░░░░░░░░░░░▀████\n");
  printf("     █████│░░░░░░░░░░░░░░░░░░░│███\n");
  printf("     ████▌│░░░░░░░░░░░░░░░░░░░│▐██\n");
  printf("     ████░└┐░░░░░░░░░░░░░░░░░┌┘░██\n");
  printf("     ████░░└┐░░░░░░░░░░░░░░░┌┘░░██\n");
  printf("     ████░└┐░░░░░░░░░░░░░░░░░┌┘░██\n");
  printf("     ████░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██\n");
  printf("     ████▌░│██████▌░░░▐██████│░▐██\n");
  printf("     █████░│▐███▀▀░░▄░░▀▀███▌│░███\n");
  printf("     ████▀─┘░░░░░░░▐█▌░░░░░░░└─▀██\n");
  printf("     ████▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██\n");
  printf("     ██████▄─┘██▌░░░░░░░▐██└─▄████\n");
  printf("     ███████░░▐█─┬┬┬┬┬┬┬─█▌░░█████\n");
}

void imageGameOver() {
  caveira();
  printf("     ███████░░▐▀┬┼┼┼┼┼┼┼┬▀▌░░█████\n");
  printf("     ███████░░▐███████████▌░░█████\n");
  printf("     ██████▌░░░███████████░░░▐████\n");
  printf("     ███████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████\n");
  printf("     █████████▄░░░░░░░░░░░▄███████\n");
  printf("     ████████████▄▄▄▄▄▄▄██████████\n");
  printf("     █████████████████████████████\n");
  system("sleep .3");
  system("clear");
  caveira();
  printf("     ███████░░▐▀┬┼┼┼┼┼┼┼┬▀▌░░█████\n");
  printf("     ██████▌░░░███████████░░░▐████\n");
  printf("     ███████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████\n");
  printf("     █████████▄░░░░░░░░░░░▄███████\n");
  printf("     ████████████▄▄▄▄▄▄▄██████████\n");
  printf("     █████████████████████████████\n");
  system("sleep .3");
  system("clear");
  caveira();
  printf("     ██████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████\n");
  printf("     ███████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████\n");
  printf("     █████████▄░░░░░░░░░░░▄███████\n");
  printf("     ████████████▄▄▄▄▄▄▄██████████\n");
  printf("     █████████████████████████████\n");
  system("sleep .3");
  system("clear");
  caveira();
  printf("     ███████░░▐▀┬┼┼┼┼┼┼┼┬▀▌░░█████\n");
  printf("     ██████▌░░░███████████░░░▐████\n");
  printf("     ███████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████\n");
  printf("     █████████▄░░░░░░░░░░░▄███████\n");
  printf("     ████████████▄▄▄▄▄▄▄██████████\n");
  printf("     █████████████████████████████\n");
  system("sleep .3");
  system("clear");
  caveira();
  printf("     ███████░░▐▀┬┼┼┼┼┼┼┼┬▀▌░░█████\n");
  printf("     ███████░░▐███████████▌░░█████\n");
  printf("     ██████▌░░░███████████░░░▐████\n");
  printf("     ███████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████\n");
  printf("     █████████▄░░░░░░░░░░░▄███████\n");
  printf("     ████████████▄▄▄▄▄▄▄██████████\n");
  printf("     █████████████████████████████\n");
}

void ImageCreditos(char *str1, char *str2) {
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n\n\n\n\n\n\n\n\n");
  printf(RED "\t\t\tDUNGEONS IN C\n\n" RESET);
  printf(BLU "\t\t  DESENVOLVEDORES\n\n" RESET);
  printf("\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  ;
  printf("\n\n\n\n\n\n\n\n\n");
  printf(RED "\t\t\tDUNGEONS IN C\n\n" RESET);
  printf(BLU "\t\t  DESENVOLVEDORES\n\n" RESET);
  printf("\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n\n\n\n\n");
  printf(RED "\t\t\tDUNGEONS IN C\n\n" RESET);
  printf(BLU "\t\t  DESENVOLVEDORES\n\n" RESET);
  printf("\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  printf(BLU "\n\t\t\tILUSTRADORES\n\n" RESET);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n\n\n");
  printf(RED "\t\t\tDUNGEONS IN C\n\n" RESET);
  printf(BLU "\t\t  DESENVOLVEDORES\n\n" RESET);
  printf("\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  printf(BLU "\n\t\t\tILUSTRADORES\n\n" RESET);
  printf("\t\t\t%s\n", str1);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  printf(BLU "\t\t  DESENVOLVEDORES\n\n" RESET);
  printf("\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  printf(BLU "\n\t\t\tILUSTRADORES\n\n" RESET);
  printf("\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  printf("\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  printf(BLU "\n\t\t\tILUSTRADORES\n\n" RESET);
  printf("\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  printf(BLU "\n\t\t\tROTERISTAS\n\n" RESET);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  printf("\t\t\t%s\n", str2);
  printf(BLU "\n\t\t\tILUSTRADORES\n\n" RESET);
  printf("\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  printf(BLU "\n\t\t\tROTERISTAS\n\n" RESET);
  printf("\t\t\t%s\n", str1);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  printf(BLU "\n\t\t\tILUSTRADORES\n\n" RESET);
  printf("\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  printf(BLU "\n\t\t\tROTERISTAS\n\n" RESET);
  printf("\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  printf("\n\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  printf(BLU "\n\t\t\tROTERISTAS\n\n" RESET);
  printf("\n\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  printf(BLU "\n\t\t\tBETA TESTERS\n\n" RESET);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  printf("\t\t\t%s\n", str2);
  printf(BLU "\n\t\t\tROTERISTAS\n\n" RESET);
  printf("\n\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  printf(BLU "\n\t\t\tBETA TESTERS\n\n" RESET);
  printf("\t\t\t%s\n", str1);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  printf(BLU "\n\t\t\tROTERISTAS\n\n" RESET);
  printf("\n\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  printf(BLU "\n\t\t\tBETA TESTERS\n\n" RESET);
  printf("\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  printf("\n\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  printf(BLU "\n\t\t\tBETA TESTERS\n\n" RESET);
  printf("\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  printf("\t\t\tMatheus Martins\n");
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  printf("\t\t\t%s\n", str2);
  printf(BLU "\n\t\t\tBETA TESTERS\n\n" RESET);
  printf("\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  printf("\t\t\tMatheus Martins\n");
  printf("\t\t\tLeticia Cruz\n");
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  printf("\t\t\t%s\n", str1);
  printf("\t\t\t%s\n", str2);
  printf("\t\t\tMatheus Martins\n");
  printf("\t\t\tLeticia Cruz\n");
  printf("\t\t\tLucas Guilherme\n");
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  printf("\t\t\t%s\n", str2);
  printf("\t\t\tMatheus Martins\n");
  printf("\t\t\tLeticia Cruz\n");
  printf("\t\t\tLucas Guilherme\n");
  printf(BLU "\n\t\t\tINSPIRAÇÃO\n\n" RESET);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  printf("\t\t\tMatheus Martins\n");
  printf("\t\t\tLeticia Cruz\n");
  printf("\t\t\tLucas Guilherme\n");
  printf(BLU "\n\t\t\tINSPIRAÇÃO\n\n" RESET);
  printf(RED "\t\t DUNGEONS & DRAGONS\n\n" RESET);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  printf("\t\t\tLeticia Cruz\n");
  printf("\t\t\tLucas Guilherme\n");
  printf(BLU "\n\t\t\tINSPIRAÇÃO\n\n" RESET);
  printf(RED "\t\t DUNGEONS & DRAGONS\n\n" RESET);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  printf("\t\t\tLucas Guilherme\n");
  printf(BLU "\n\t\t\tINSPIRAÇÃO\n\n" RESET);
  printf(RED "\t\t DUNGEONS & DRAGONS\n\n" RESET);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  printf(BLU "\n\t\t\tINSPIRAÇÃO\n\n" RESET);
  printf(RED "\t\t DUNGEONS & DRAGONS\n\n" RESET);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  printf(RED "\t\t DUNGEONS & DRAGONS\n\n" RESET);
  system("sleep 1");
  system("clear");
  printf(RED "▁ ▂ ▃ ▄ ▅ ▆ ▇ CREDITOS ▇ ▆ ▅ ▄ ▃ ▂ ▁" RESET);
  printf("\n\n\n");
  system("sleep 1");
  system("clear");
}

void imagePorJogar() {
  printf("                  ╔══════════════════════╗\n");
  printf("   █████████  ▄   ║ OBRIGADO POR JOGAR!!!║\n");
  printf("  ████████████    ║ /════════════════════╝\n");
  printf("   ████▒▒▒▒▒██    ║/\n");
  printf("    ▀█▒▒▀█▀▒███\n");
  printf("    ░▒▀▒░░░▒█▒█\n");
  printf("    ▒▀▀▀▀▀▒▒█\n");
  printf("     ▒▒▒▒▒▒\n");
  system("sleep .5");
  system("clear");
  printf("                  ╔══════════════════════╗\n");
  printf("   █████████  ▄   ║ OBRIGADO POR JOGAR!!!║\n");
  printf("  ████████████    ║ /════════════════════╝\n");
  printf("   ████▒▒▒▒▒██    ║/\n");
  printf("    ▀█▒▒▀█▀▒███\n");
  printf("    ░▒▀▒░░░▒█▒█\n");
  printf("    ▒▀▀▀▀▀▒▒█\n");
  printf("    ▒▁▁▁▁▁▒▒█\n");
  printf("     ▒▒▒▒▒▒\n");
  system("sleep .5");
  system("clear");
  imagePorJogar();
}

void imageWin() {
  char nome1[20] = "Alef Almeida";
  char nome2[20] = "Luana Morais";

  printf("▁ ▂ ▃ ▄ ▅ ▆ ▇ YOU WIN! ▇ ▆ ▅ ▄ ▃ ▂ ▁\n\n");
  printf("▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
  printf("▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
  printf("▀▀▀▀▀▀▀▀▀▀▀'._==_==_=_.' ▀▀▀▀▀▀▀▀▀▀▀▀\n");
  printf("▀▀▀▀▀▀▀▀▀▀ .-\\:      /-. ▀▀▀▀▀▀▀▀▀▀▀\n");
  printf("▀▀▀▀▀▀▀▀▀ | (|:.     |) | ▀▀▀▀▀▀▀▀▀▀▀\n");
  printf("▀▀▀▀▀▀▀▀▀▀ '-|:.     |-' ▀▀▀▀▀▀▀▀▀▀▀▀\n");
  printf("▀▀▀▀▀▀▀▀▀▀▀▀ \\::.    / ▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
  printf("▀▀▀▀▀▀▀▀▀▀▀▀▀ '::. .' ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
  printf("▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀ ) ( ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
  printf("▀▀▀▀▀▀▀▀▀▀▀▀▀ _.' '._ ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
  printf("▀▀▀▀▀▀▀▀▀▀▀▀▀         ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
  printf("▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n\n");

  printf("Parabéns! sua Jornada finalmente chegou ao fim.\n\n");

  printf("Deseja ir para os creditos?");

  int sel = selecionado();

  switch (sel) {
  case 1:
    ImageCreditos("Luana Morais", "Alef Almeida");
    break;
  case 2:
    imagePorJogar();
    system("sleep 5");
    exit(0);
    break;
  }

  imagePorJogar();
  system("sleep 5");
  exit(0);
}
/*@PLAYER*/
void playerStatus(Player player, int i) {
  imageIconPlayer(i);
  // print name - 23 c
  int nc = 1;
  while (player.name[nc] != '\0') {
    nc++;
  }
  printf("     █");

  for (int i = 0; i < (23 - nc) / 2; i++)
    printf(" ");

  printf("%s", player.name);

  for (int i = 0; i < (23 - nc) / 2; i++)
    printf(" ");
  if (nc % 2 == 0) {
    printf(" █\n");
  } else {
    printf("█\n");
  }
  // HP
  printf("     █ ❤️ HP:");
  if (player.hp >= 13) {
    for (int i = 0; i < player.hp; i++)
      printf(GRN "▓" RESET);
  } else if (player.hp < 13 && player.hp > 8) {
    for (int i = 0; i < player.hp; i++)
      printf(YEL "▓" RESET);
  } else if (player.hp <= 8) {
    for (int i = 0; i < player.hp; i++)
      printf(RED "▓" RESET);
  }

  for (int i = 0; i < 16 - (player.hp); i++)
    printf("▒");
  printf(" █\n");
  //
  // COINS
  printf("     █ 💰COINS: %d", player.coins);
  for (int i = 0; i < (11 - (nc / 10)); i++)
    printf(" ");
  if (player.coins <10) {
    printf(" █\n");
  } else {
    printf("█\n");
  }
  //
  printf("     █ FORÇA: %d              █\n", player.equipado.value);
  // print equipado - 23-8 c
  nc = 1;
  while (player.equipado.name[nc] != '\0') {
    nc++;
  }
  printf("     █ ⚔️ ARMA:");

  for (int i = 0; i < (23 - 9 - nc) / 2; i++)
    printf(" ");

  printf("%s", player.equipado.name);

  for (int i = 0; i < (23 - 7 - nc) / 2; i++)
    printf(" ");

  printf("█\n");
  //
  //
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
}
/*@INVENTARIO*/
void imageInventory(Player *player) {
  printf("▂▃▄▅▆▇█▓▒ INVENTÁRIO ▒▓█▇▆▅▄▃▂\n");
  //
  printf("▓▒ CAPACIDADE MÁXIMA: ");
if (player->total == player->limit) {
  printf(RED " %d/%d" RESET, player->total, player->limit);
  } else {
  printf(GRN " %d/%d" RESET, player->total, player->limit);
  }
  printf(" ▒▓\n");
  
  //
  if (player->total <= 0) {
    printf("Você ainda não possui itens.");
    return;
  }
  for (int i = 0; i < player->total; i++) {
    imageItens(player->inventory[i], i);
  }
}

void imageItens(Item item, int id) {
  if (item.id == 0) {
    printf("\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄╔═════════════════════════════════════════╗\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  %s\n", item.name);
    printf("█▒▒▒▒─▄▀─▄▀▒▒▒▒▒█  Restaura até %d\n", item.value);
    printf("█▒▒▒▒──▀──▀▒▒▒▒▒█  ID: %d\n", id);
    printf("█▒▒▒▒█▀▀▀▀▀█▄▒▒▒█  TIPO: CONSUMÍVEL\n");
    printf("█▒▒▒▒█░░░░░█─█▒▒█  Você desconhece o conceito\n");
    printf("█▒▒▒▒▀▄▄▄▄▄▀▀▒▒▒█  de café, nem ao menos sabe que\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  tipo de recipiente é esse, mas o admira\n");
    printf("▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀╚═════════════════════════════════════════╝\n");
    return;
  }
  if (item.id == 1) {
    printf("\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄╔═════════════════════════════════════════╗\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  %s\n", item.name);
    printf("█▒▒▒█▄▀▄▀▄█▒▒▒▒▒█  Restaura até %d\n", item.value);
    printf("█▒▒▒█░▀░▀░█▄▒▒▒▒█  ID: %d\n", id);
    printf("█▒▒▒█░▀░░░█─█▒▒▒█  TIPO: CONSUMÍVEL\n");
    printf("█▒▒▒█░░░▀░█▄▀▒▒▒█  Independente da hora e local,\n");
    printf("█▒▒▒▀▀▀▀▀▀▀▒▒▒▒▒█  não se deve recusar uma cerveja\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀╚═════════════════════════════════════════╝\n");
    return;
  }
  if (item.id == 2) {
    printf("\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄╔═════════════════════════════════════════╗\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  %s\n", item.name);
    printf("█▒▒▒▒▒▒▒▒▒▄▀▒▒▒▒█  Restaura até %d\n", item.value);
    printf("█▒▒▒▒█▀▀▀█▀█▒▒▒▒█  ID: %d\n", id);
    printf("█▒▒▒▒▒▀▄░▄▀▒▒▒▒▒█  TIPO: CONSUMÍVEL\n");
    printf("█▒▒▒▒▒▒▒█▒▒▒▒▒▒▒█  Quanto mais velho o vinho\n");
    printf("█▒▒▒▒▒▄▄█▄▄▒▒▒▒▒█  melhor, não é? Mesmo que cheio\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  de poeira\n");
    printf("▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀╚═════════════════════════════════════════╝\n");
    return;
  }
  //
  if (item.id == 3) {
    printf("\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄╔═════════════════════════════════════════╗\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  %s\n", item.name);
    printf("█▒▒▒▒▒▒▒▄▒▒▒▒▒▒▒█  DANO: %d\n", item.value);
    printf("█▒▒▒▒▒▒██▒▒▒▒▒▒▒█  ID: %d\n", id);
    printf("█▒▒▒▒▒▒██▒▒▒▒▒▒▒█  TIPO: EQUIPAMENTO\n");
    printf("█▒▒▒▒▒▒██▒▒▒▒▒▒▒█  Sua companheira e velha\n");
    printf("█▒▒▒▒▒▀▀█▀▀▒▒▒▒▒█  adaga, pequena porém mortal\n");
    printf("█▒▒▒▒▒▒▒▀▒▒▒▒▒▒▒█\n");
    printf("▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀╚═════════════════════════════════════════╝\n");
    return;
  }
  if (item.id == 4) {
    printf("\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄╔═════════════════════════════════════════╗\n");
    printf("█▒▒▒▒▒▒▒▄▒▒▒▒▒▒▒█  %s\n", item.name);
    printf("█▒▒▒▒▒▒█░█▒▒▒▒▒▒█  DANO: %d\n", item.value);
    printf("█▒▒▒▒▒▒█░█▒▒▒▒▒▒█  ID: %d\n", id);
    printf("█▒▒▒▒▒▒█░█▒▒▒▒▒▒█  TIPO: EQUIPAMENTO\n");
    printf("█▒▒▒▒▒▒█░█▒▒▒▒▒▒█  É longa e pesada, apesar\n");
    printf("█▒▒▒▒▀▀▀█▀▀▀▒▒▒▒█  de estar velha, você acredita\n");
    printf("█▒▒▒▒▒▒▒▀▒▒▒▒▒▒▒█  que ela seja melhor que sua adaga\n");
    printf("▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀╚═════════════════════════════════════════╝\n");
    return;
  }
  //
  if (item.id == 5) {
    printf("\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄╔═════════════════════════════════════════╗\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  %s\n", item.name);
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ID: %d\n", id);
    printf("█▒▒▒▒▒▒▒▒▒▒▄▀▀▄▒█  Uma chave velha e\n");
    printf("█▒▒▒█▀█▀▀▀▀█░░█▒█  enferrujada.\n");
    printf("█▒▒▒▀░▀▒▒▒▒▒▀▀▒▒█\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀╚═════════════════════════════════════════╝\n");
    return;
  }

  if (item.id == 6) {
  printf("\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄╔═════════════════════════════════════════╗\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  %s\n", item.name);
    printf("█▒▒▒▄▀▀▀▀▀▀▀▄▒▒▒█  ID: %d\n", id);
    printf("█▒▒█ █     █ █▒▒█  Uma mochila velha, está quase\n");
    printf("█▒▒█  ▀▀█▀▀  █▒▒█  rasgando.\n");
    printf("█▒▒█         █▒▒█\n");
    printf("█▒▒▒▀▀▀▀▀▀▀▀▀▒▒▒█\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀╚═════════════════════════════════════════╝\n");
    return;
  }
  if (item.id == 7) {
    printf("\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄╔═════════════════════════════════════════╗\n");
    printf("█▒▒▒▒▒░░░░░▒▒▒▒▒█  %s\n", item.name);
    printf("█▒▒▒▒▒░(◈)░▒▒▒▒▒█  ID: %d\n", id);
    printf("█▒▒▒▒▒░ █ ░▒▒▒▒▒█  Um cajado de madeira.\n");
    printf("█▒▒▒▒▒░ █ ░▒▒▒▒▒█ \n");
    printf("█▒▒▒▒▒░ █ ░▒▒▒▒▒█ \n");
    printf("█▒▒▒▒▒░ █ ░▒▒▒▒▒█ \n");
    printf("█▒▒▒▒▒░░░░░▒▒▒▒▒█ \n");
    printf("▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀╚═════════════════════════════════════════╝\n");
    return;
  }
  if (item.id == 8) {
    printf("\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄╔═════════════════════════════════════════╗\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  %s\n", item.name);
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ID: %d\n", id);
    printf("█▒▀███████████░▒█  ?????????????????????\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▀███░█  Isso não está certo...\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒██░█ \n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ \n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀╚═════════════════════════════════════════╝\n");
  }
}

/*@INIMIGOS*/
void imageEnemys(Enemy enemy) {

  if (enemy.id == 0) {
    printf("     █████████████████████████\n");
    printf("     █                       █\n");
    printf("     █       ▐███████▌       █\n");
    printf("     █       ▐░▀░▀░▀░▌       █\n");
    printf("     █       ▐▄▄▄▄▄▄▄▌       █\n");
    printf("     █ ▄▀▀▀█▒▐░▀▀▄▀▀░▌▒█▀▀▀▄ █\n");
    printf("     █ ▌▌▌▌▐▒▄▌░▄▄▄░▐▄▒▌▐▐▐▐ █\n");
    printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
    printf("     █         ZUMBI         █\n");
    printf("     █ HP:"); // 20
    for (int i = 0; i < enemy.hp; i++)
      printf(RED "▓" RESET);
    for (int i = 0; i < 18 - (enemy.hp); i++)
      printf("▒");
    printf(" █\n");
    printf("     █ FORÇA: %d              █\n", enemy.attack);
    printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");

    return;
  }
  if (enemy.id == 1) {
    printf("     █████████████████████████\n");
    printf("     █                       █\n");
    printf("     █ ▄▄▀█▄   ▄       ▄     █\n");
    printf("     █ ▀▀▀██  ███     ███    █\n");
    printf("     █  ▄██▀ █████   ████    █\n");
    printf("     █ ███▀▄███ ███ ███ ██ ▄ █\n");
    printf("     █ ▀█████▀   ▀███▀   ██  █\n");
    printf("     █                       █\n");
    printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
    printf("     █        SERPENTE       █\n");
    printf("     █ HP:"); // 20
    for (int i = 0; i < enemy.hp; i++)
      printf(RED "▓" RESET);
    for (int i = 0; i < 18 - (enemy.hp); i++)
      printf("▒");
    printf(" █\n");
    printf("     █ FORÇA: %d              █\n", enemy.attack);
    printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
    return;
  }
  if (enemy.id == 2) {
    printf("     █████████████████████████\n");
    printf("     █                       █\n");
    printf("     █       ▄████▀█▄        █\n");
    printf("     █    ▄████████████████▄ █\n");
    printf("     █  ▄████.▼.▼.▼.▼.▼.▼▼▼▼ █\n");
    printf("     █ ▄███████▄.▲.▲▲▲▲▲▲▲▲  █\n");
    printf("     █ ███████████████████▀▀ █\n");
    printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
    printf("     █         JARÉ          █\n");
    printf("     █ HP:"); // 20
    for (int i = 0; i < enemy.hp; i++)
      printf(RED "▓" RESET);
    for (int i = 0; i < 18 - (enemy.hp); i++)
      printf("▒");
    printf(" █\n");
    printf("     █ FORÇA: %d              █\n", enemy.attack);
    printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
    return;
  }
  if (enemy.id == 3) {
    printf("\n    ████████████████████████████████████████████████████████████\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");

    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ");
    printf("\x1b[31m");
    printf("▀");
    printf("\x1b[0m");
    printf("░");
    printf("\x1b[31m");
    printf("▀");
    printf("\x1b[0m");
    printf("░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("    █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
    printf("    █                         ");
    printf("\x1b[31m");
    printf("✟ MORTE✟ ");
    printf("\x1b[0m");
    printf("                        █\n");

    printf("    █HP: "); // 53
    for (int i = 0; i < enemy.hp * 2; i++)
      printf(RED "▓" RESET);
    for (int i = 0; i < 53 - (enemy.hp * 2); i++)
      printf("▒");
    printf(" █\n");
    printf("    █FORÇA: %d                                                  █\n",
           enemy.attack);
    printf("    █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  }
}

void animationZumbi(Player *player) {
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .5");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █       ▐███████▌       █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .5");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █       ▐███████▌       █\n");
  printf("     █       ▐░▀░▀░▀░▌       █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .5");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █       ▐███████▌       █\n");
  printf("     █       ▐░▀░▀░▀░▌       █\n");
  printf("     █       ▐▄▄▄▄▄▄▄▌       █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .5");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █       ▐███████▌       █\n");
  printf("     █       ▐░▀░▀░▀░▌       █\n");
  printf("     █       ▐▄▄▄▄▄▄▄▌       █\n");
  printf("     █ ▄▀▀▀█▒▐░▀▀▄▀▀░▌▒█▀▀▀▄ █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .5");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █                       █\n");
  printf("     █       ▐███████▌       █\n");
  printf("     █       ▐░▀░▀░▀░▌       █\n");
  printf("     █       ▐▄▄▄▄▄▄▄▌       █\n");
  printf("     █ ▄▀▀▀█▒▐░▀▀▄▀▀░▌▒█▀▀▀▄ █\n");
  printf("     █ ▌▌▌▌▐▒▄▌░▄▄▄░▐▄▒▌▐▐▐▐ █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep 1");
  system("clear");
}

void animationSnake(Player *player) {
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░▒▒▒            ░░░    █\n");
  printf("     █          ░▒           █\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █ ░░░░░        ▒▒▒      █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░▒▒▒            ░░░    █\n");
  printf("     █          ░▒         ▄▄█\n");
  printf("     █                     ▀▀█\n");
  printf("     █                      ▄█\n");
  printf("     █                     ███\n");
  printf("     █                     ▀██\n");
  printf("     █ ░░░░░        ▒▒▒      █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░▒▒▒            ░░░    █\n");
  printf("     █          ░▒       ▄▄▀██\n");
  printf("     █                   ▀▀▀██\n");
  printf("     █                    ▄███\n");
  printf("     █                   ███▀█\n");
  printf("     █                   ▀████\n");
  printf("     █ ░░░░░        ▒▒▒      █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░▒▒▒            ░░░    █\n");
  printf("     █          ░▒     ▄▄▀█▄ █\n");
  printf("     █                 ▀▀▀██ █\n");
  printf("     █                  ▄██▀ █\n");
  printf("     █                 ███▀▄██\n");
  printf("     █                 ▀██████\n");
  printf("     █ ░░░░░        ▒▒▒      █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░▒▒▒            ░░░    █\n");
  printf("     █         ░▒    ▄▄▀█▄   █\n");
  printf("     █               ▀▀▀██  ██\n");
  printf("     █                ▄██▀ ███\n");
  printf("     █               ███▀▄████\n");
  printf("     █               ▀█████▀ █\n");
  printf("     █ ░░░░░        ▒▒▒      █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░▒▒▒            ░░░    █\n");
  printf("     █         ░▒  ▄▄▀█▄   ▄ █\n");
  printf("     █             ▀▀▀██  ████\n");
  printf("     █              ▄██▀ █████\n");
  printf("     █             ███▀▄███ ██\n");
  printf("     █             ▀█████▀   █\n");
  printf("     █ ░░░░░        ▒▒▒      █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░▒▒▒            ░░░    █\n");
  printf("     █         ░▒▄▄▀█▄   ▄   █\n");
  printf("     █           ▀▀▀██  ███  █\n");
  printf("     █            ▄██▀ █████ █\n");
  printf("     █           ███▀▄███ ████\n");
  printf("     █           ▀█████▀   ▀██\n");
  printf("     █ ░░░░░        ▒▒▒      █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░▒▒▒            ░░░    █\n");
  printf("     █        ▄▄▀█▄   ▄      █\n");
  printf("     █        ▀▀▀██  ███     █\n");
  printf("     █         ▄██▀ █████   ██\n");
  printf("     █        ███▀▄███ ███ ███\n");
  printf("     █        ▀█████▀   ▀███▀█\n");
  printf("     █ ░░░░░        ▒▒▒      █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░▒▒▒            ░░░    █\n");
  printf("     █     ▄▄▀█▄▒  ▄       ▄ █\n");
  printf("     █     ▀▀▀██  ███     ████\n");
  printf("     █      ▄██▀ █████   █████\n");
  printf("     █     ███▀▄███ ███ ███ ██\n");
  printf("     █     ▀█████▀   ▀███▀   █\n");
  printf("     █ ░░░░░        ▒▒▒      █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░▒▒▒            ░░░    █\n");
  printf("     █   ▄▄▀█▄ ░▒▄       ▄   █\n");
  printf("     █   ▀▀▀██  ███     ███  █\n");
  printf("     █    ▄██▀ █████   ████  █\n");
  printf("     █   ███▀▄███ ███ ███ ██ █\n");
  printf("     █   ▀█████▀   ▀███▀   ███\n");
  printf("     █ ░░░░░        ▒▒▒      █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░▒▒▒            ░░░    █\n");
  printf("     █ ▄▄▀█▄   ▄▒      ▄     █\n");
  printf("     █ ▀▀▀██  ███     ███    █\n");
  printf("     █  ▄██▀ █████   ████    █\n");
  printf("     █ ███▀▄███ ███ ███ ██ ▄ █\n");
  printf("     █ ▀█████▀   ▀███▀   ██  █\n");
  printf("     █ ░░░░░        ▒▒▒      █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
}

void animationJare(Player *player) {
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █                       █\n");
  printf("     █  ▒▒                   █\n");
  printf("     █                       █\n");
  printf("     █         ▒          ▒▒ █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █                       █\n");
  printf("     █  ▒▒                ▄▄▄█\n");
  printf("     █                    ▀▄▀█\n");
  printf("     █                     ▀▀█\n");
  printf("     █         ▒          ▒▒ █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █                      ▄█\n");
  printf("     █  ▒▒             ▄▄▄▄███\n");
  printf("     █                 ▀▄▀▄▀▄█\n");
  printf("     █                  ▀▀▀▀▀█\n");
  printf("     █         ▒          ▒▒ █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █                  ▄▄▄▄▄█\n");
  printf("     █  ▒▒         ▄▄▄▄██▄████\n");
  printf("     █             ▀▄▀▄▀▄█████\n");
  printf("     █              ▀▀▀▀▀▀▀▀██\n");
  printf("     █         ▒           ▀▀█\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █              ▄▄▄▄▄ ▄ ▄█\n");
  printf("     █  ▒▒     ▄▄▄▄██▄████▀█▀█\n");
  printf("     █         ▀▄▀▄▀▄████▄█▄██\n");
  printf("     █          ▀▀▀▀▀▀▀▀██▀▀▀█\n");
  printf("     █         ▒       ▀▀ ▒▒ █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █          ▄▄▄▄▄ ▄ ▄ ▄ ▄█\n");
  printf("     █  ▒▒ ▄▄▄▄██▄████▀█▀█▀█▀█\n");
  printf("     █     ▀▄▀▄▀▄████▄█▄█▄█▄██\n");
  printf("     █      ▀▀▀▀▀▀▀▀██▀▀▀▀██▀█\n");
  printf("     █         ▒     ▀▀  ▀▀▄▄█\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █      ▄▄▄▄▄ ▄ ▄ ▄ ▄    █\n");
  printf("     █ ▄▄▄▄██▄████▀█▀█▀█▀█▄  █\n");
  printf("     █ ▀▄▀▄▀▄████▄█▄█▄█▄████ █\n");
  printf("     █  ▀▀▀▀▀▀▀▀██▀▀▀▀██▀ ▄█ █\n");
  printf("     █         ▀▀      ██▄█▀ █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █  ▄▄▄▄▄ ▄ ▄ ▄ ▄        █\n");
  printf("     █▄██▄████▀█▀█▀█▀█▄      █\n");
  printf("     █▄▀▄████▄█▄█▄█▄████     █\n");
  printf("     █▀▀▀▀▀▀██▀▀▀▀██▀ ▄█     █\n");
  printf("     █       ▀▀▒ ▀▀▄▄█▀   ▒▒ █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █▄▄▄ ▄ ▄ ▄ ▄            █\n");
  printf("     █████▀█▀█▀█▀█▄          █\n");
  printf("     ████▄█▄█▄█▄████         █\n");
  printf("     █▀▀██▀▀▀▀██▀ ▄█         █\n");
  printf("     █ ▀▀     ▀███▀       ▒▒ █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █▄ ▄                    █\n");
  printf("     █▀█▀█▄                  █\n");
  printf("     ██▄████                 █\n");
  printf("     ███▀ ▄█                 █\n");
  printf("     █▀▄▄█▀    ▒          ▒▒ █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █                       █\n");
  printf("     ██▄                     █\n");
  printf("     ████                    █\n");
  printf("     █ ▄█                    █\n");
  printf("     █▀        ▒          ▒▒ █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █                       █\n");
  printf("     █   ▒▒                  █\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █         ▒          ▒▒ █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █                       █\n");
  printf("     █  ▒▒                   █\n");
  printf("     █                       █\n");
  printf("     █                       █\n");
  printf("     █       ▄████▀█▄     ▒▒ █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █                       █\n");
  printf("     █   ▒▒                  █\n");
  printf("     █                       █\n");
  printf("     █       ▄████▀█▄     ▒▒ █\n");
  printf("     █    ▄████████████████▄ █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █                       █\n");
  printf("     █   ▒▒                  █\n");
  printf("     █       ▄████▀█▄        █\n");
  printf("     █    ▄████████████████▄ █\n");
  printf("     █  ▄████.▼.▼.▼.▼.▼.▼▼▼▼ █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █                       █\n");
  printf("     █   ▒▒  ▄████▀█▄        █\n");
  printf("     █    ▄████████████████▄ █\n");
  printf("     █  ▄████.▼.▼.▼.▼.▼.▼▼▼▼ █\n");
  printf("     █ ▄███████▄.▲.▲▲▲▲▲▲▲▲  █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
  printf("     █████████████████████████\n");
  printf("     █░░░░░░             ░░  █\n");
  printf("     █       ▄████▀█▄        █\n");
  printf("     █    ▄████████████████▄ █\n");
  printf("     █  ▄████.▼.▼.▼.▼.▼.▼▼▼▼ █\n");
  printf("     █ ▄███████▄.▲.▲▲▲▲▲▲▲▲  █\n");
  printf("     █ ███████████████████▀▀ █\n");
  printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
  playerStatus(*player,0);
  system("sleep .25");
  system("clear");
}

void animationBoss(Player *player) {
  system("clear");
  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.5");
  system("clear");

  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.5");
  system("clear");

  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.5");
  system("clear");

  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.5");
  system("clear");

  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.5");
  system("clear");

  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒      ▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒      ▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.5");
  system("clear");

  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.5");
  system("clear");

  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.5");
  system("clear");

  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.5");
  system("clear");

  printf("\x1b[31m");
  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.2");
  system("clear");

  printf("\x1b[0m");
  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.2");
  system("clear");

  printf("\x1b[31m");
  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.2");
  system("clear");

  printf("\x1b[0m");
  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.2");
  system("clear");

  printf("\x1b[31m");
  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.2");
  system("clear");

  printf("\x1b[0m");
  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.2");
  system("clear");

  printf("\x1b[31m");
  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.1");
  system("clear");

  printf("\x1b[0m");
  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.1");
  system("clear");

  printf("\x1b[31m");
  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.1");
  system("clear");

  printf("\x1b[0m");
  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 0.1");
  system("clear");

  printf("\x1b[0m");
  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("clear");
  system("sleep 0.1");

  printf("\x1b[31m");
  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
  system("sleep 2");
  system("clear");
  printf("\x1b[0m");

  printf("\n████████████████████████████████████████████████████████████\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ░░░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("████████████████████████████████████████████████████████████\n");
}

void animationsEnemys(int id, Player *player) {
  if (id == 0) {
    animationZumbi(player);
  }
  if (id == 1) {
    animationSnake(player);
  }
  if (id == 2) {
    animationJare(player);
  }
  if (id == 3)
    animationBoss(player);
}

void imageGetCoins(int coins, char txt[]) {
  printf("        ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
  printf("        █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
  printf("        █▒▒▒▒▄▄▄▄▄▄▄▒▒▒▒█\n");
  printf("        █▒▒▒▒▒█░░░█▒▒▒▒▒█\n");
  printf("        █▒▒▄▀▀░░░░░▀▀▄▒▒█\n");
  printf("        █▒█░░░░$$$░░░░█▒█\n");
  printf("        █▒█░░░░░░░░░░░█▒█\n");
  printf("        █▒▒▀▀▀▀▀▀▀▀▀▀▀▒▒█\n");
  printf("        ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
  printf("Você derrotou %s e ganhou %d moedas\n", txt, coins);
}

void imageEnemysDeath(Enemy enemy) {
  system("clear");
  if (enemy.id == 0) {
    printf("     █████████████████████████\n");
    printf("     █                       █\n");
    printf("    █       ▐███████▌       █\n");
    printf("     █       ▐░▀░▀░▀░▌       █\n");
    printf("      █       ▐▄▄▄▄▄▄▄▌       █\n");
    printf("     █ ▄▀▀▀█▒▐░▀▀▄▀▀░▌▒█▀▀▀▄ █\n");
    printf("    █ ▌▌▌▌▐▒▄▌░▄▄▄░▐▄▒▌▐▐▐▐ █\n");
    printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  }
  if (enemy.id == 1) {
    printf("     █████████████████████████\n");
    printf("    █                       █\n");
    printf("   █ ▄▄▀█▄   ▄       ▄     █\n");
    printf("    █ ▀▀▀██  ███     ███    █\n");
    printf("     █  ▄██▀ █████   ████    █\n");
    printf("    █ ███▀▄███ ███ ███ ██ ▄ █\n");
    printf("   █ ▀█████▀   ▀███▀   ██  █\n");
    printf("    █                       █\n");
    printf("     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  }
  if (enemy.id == 2) {
    printf("     █████████████████████████\n");
    printf("    █                       █\n");
    printf("   █       ▄███▀▀█▄        █\n");
    printf("    █    ▄████████████████▄ █\n");
    printf("     █  ▄█████▀.▼.▼.▼.▼.▼▼▼▼ █\n");
    printf("    █ ▄██████  .▲.▲▲▲▲▲▲▲▲  █\n");
    printf("   █ ███████████████████▀▀ █\n");
    printf("    █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  }
  if (enemy.id == 3) {
    printf("\n████████████████████████████████████████████████████████████\n");
    printf(" █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("  █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf(" █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf(" █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
    printf("  █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");

    printf(" █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓ ");
    printf("\x1b[31m");
    printf("▀");
    printf("\x1b[0m");
    printf("░");
    printf("\x1b[31m");
    printf("▀");
    printf("\x1b[0m");
    printf("░░░▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒█\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒███████████▒▒▒▓  ░░░░░░▒  ▓▓▒▒▒▒▒▒▒          ▒▒█\n");
    printf(" █▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▓█▒▒▒▓ ▒▒░░░▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
    printf("  █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▓  ▒▒▒▒▒▒▒▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒█\n");
    printf(" █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █    ▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒█ █▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf(" █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ░▒▒▒▒▒▒▒▄ ▄▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("  █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf(" █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf(" █▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒    ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("  █▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf(" █▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒   ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("█▒▒▒▒          ▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf(" █▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒   ▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("  █▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf(" █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf(" █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
    printf("▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
  }
  imageGetCoins(enemy.coins, enemy.name);
  printf("\nENTER>>>");
  getchar();
  getchar();
}

/*@MAPA*/
void imageAreas(int id) {
  if (id == 00) {
    printf("        ████████████████████████████████████████████\n");
    printf("        █ ▒▓▓████▓▓▒ ░░░░░▒░░░░░░░░░░░░ ▒▓▓████▓▓▒ █\n");
    printf("        █ ▒▓▓████▓▓▒ ░░░░░░░░░░░░░░▒░░░ ▒▓▓████▓▓▒ █\n");
    printf("        █ ▒▓▓████▓▓▒ ░░░░░░░░ ▄ ░░░░░░░ ▒▓▓████▓▓▒ █\n");
    printf("        █ ▒▓▓████▓▓▒ ░░░░░░░ █░█ ░░░░░░ ▒▓▓████▓▓▒ █\n");
    printf("        █ ▒▓▓████▓▓▒ ░░░░░░░ █░█ ░░░░░░ ▒▓▓████▓▓▒ █\n");
    printf("        █ ▒▓▓████▓▓▒ ░░▒░░░░ █░█ ░░░░░░ ▒▓▓████▓▓▒ █\n");
    printf("        █ ▒▓▓████▓▓▒ ░░░░░░░ █░█ ░░░░░░ ▒▓▓████▓▓▒ █\n");
    printf("        █ ▒▓▓████▓▓▒ ░░░░░ ▀▀▀█▀▀▀ ░░░░ ▒▓▓████▓▓▒ █\n");
    printf("        █ ▒▓▓████▓▓▒ ░░░░░░░░ ▀ ░░░░░░░ ▒▓▓████▓▓▒ █\n");
    printf("        █ ▒▓▓████▓▓▒ ░░░░░░░░░░░░░░▒░░░ ▒▓▓████▓▓▒ █\n");
    printf("        █ ▒▓▓████▓▓▒ ░░░░░░░░░░░░░░░░░░ ▒▓▓████▓▓▒ █\n");
    printf("        ████████████████████████████████████████████\n");
  }
  if (id == 01) {
printf("\n    ████████████████▒░SALA DOS PRISIONEIROS░▒█████████████████\n");
printf("    █ ▒░░░░▒▒▒░░░▒▒▒▒░░▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░ █\n");
printf("    █ ▒░░░░▒▒▒░░▒▒▒▒▒▒▒▒▒░░░░░░░▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░ █\n");
printf("    █ ▒▒░░░▒▒▒▒░▒▒▒▒▒▒▒▒▒░░░▒░░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░ █\n");
printf("    █ ▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▓▒░░▓▒▒▒▓░░░░░░░░░░░░░░░░░░░░░░░░░ █\n");
printf("    █ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓░▓▓░▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░░░░▓▒▒▒▒ █\n");
printf("    █ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒░░░░░░░░░░░░░░░░░▓▓▓▒▒ █\n");
printf("    █ ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓░▒░░░░░░░░░░░░░░░█▓▓▓▓ █\n");
printf("    █ ▓▓▒▓▓▓▓▒▒▒▒▒▒▒▒██▓███▓▓▓▓▓▓▓▓▓▓███▒░░░░░░░░░░░░░░▒▓██▓▓▓ █\n");
printf("    █ ▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒██▓███▓▓▓▓▓▓▓▓█▓███▒▒░░░░░░░░░░░░▓████▓▓▓ █\n");
printf("    █ ▓▓▓▓▓▓███▓▓▒▒▒▒██████▓▓▓▓▓▓▓▓▓█████░░░░░░░░░░░░░▓█████▓▓ █\n");
printf("    █ █████████▓▓▒▒▒▒██████▓▓▓▓▓▓▓▓▓██████░░░░░░░░░░░█████████ █\n");
printf("    █ ▓▓█████▓██▓▒▒▒▒█████▓▓▓▓▓▓▓▓▓▓█████▒▒░░░░░░░░▓██████████ █\n");
printf("    █ ▓▓█████▒▓▒▒▒▒▒▒██▒███▓▓▓▓▓▓▓▓▓▓▓███▓▓░░░▒░░░░████▓▓▓████ █\n");
printf("    █ ▓▓▓███▓▒▓▒▒▒▒▒▒██▒███▓▓▓▓▓▓▓█▓▓██████▓▓░░░░░░████▓▓▓▓▓██ █\n");
printf("    █ ▓▓████▓▒▒░▒▒▒▒▒▒▓▒▒███▓▓▓▓▓▓▓▓▓██████▓▓░░░░░░▒█▓▓▓▓▓▓▓▓█ █\n");
printf("    █ ▓▓████▓▒▒░▒▒▒▒▒▒▒▒▒▓██▓▓▓▓▓▓▓██████▓▓▒░░░░░░░░░▓▓▓▓▓▓▓▓█ █\n");
printf("    █ ▓▓██▓▓▓▒▒░▒▒▒▒░▒▒▒▒▓████▓▓▓░▓██████▓░░░░░░░░░░░░░▓▓▓▓▓▓█ █\n");
printf("    █ ▒▓██▓▓▓▒░░░▒▒▒░▒▒▒▒▓▓█▓▓▓▓▓░▓▓██▓▒▓▓░░▒▒▒▒▒▒▒░░░░░░▓▓▒▒▓ █\n");
printf("    █ ▒▓██▓▓▒▒░░░▒▒▒░▒▒▒▒▒▒▓▓▓▒▒▓░▒▓▓█▒▒▓▓░░░░░░░░░▒▒░░▓▓▒▒▓█▒ █\n");
printf("    █ ▒▒▓█▓▓▒░░░░░▒▒░▒▒▒▒▒▒▓▓▓▒▒▓░░▒▓▓▒▒▓▓░▒▒░░░░░░░░░░░░▒▒▒▒▒ █\n");
printf("    █ ▒▒▓▓▓▒▒░░░░░▒▒░░▒▒▒▒▒▒▒▓▒▒▒░░░▓▓▒░░░░░░░░░░░░░░░░░░░▒▒▒▒ █\n");
printf("    █ ▒▒▓▓▓▒░░░░░▒▒▒░░▒▒▒▒▒▒▒▒░░▒░░░▓▒▒░░░░░░░░░░░░░░░░░░░▒▒▒▒ █\n");
printf("    █ ▒▒▓▓▒░░░░░░░▒░░░░░▒░░▒▒░░░░░░░░▒░░░░░░░░░░░░░░░░░░░░▒▒▒▒ █\n");
printf("    █ ░▒▒▒▒░░░░░░░░░░░░░░░░░▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒ █\n");
printf("    ████████████████████████████████████████████████████████████\n");
  }//SALA DO BOSS
  if (id == 02) {
    printf("        ████████████████▒░MELODIA░▒█████████████████\n");
    printf("        █                                ▒▒▒       █\n");
    printf("        █ ░░░                ♫     ♫               █\n");
    printf("        █         ▒▒▒▒▒▒              ▓▓           █\n");
    printf("        █     ♫                                    █\n");
    printf("        █                  ♫      ▄       ░░░      █\n");
    printf("        █                         ███▄             █\n");
    printf("        █     ▓▓    ♫             ████▄▄▄▄         █\n");
    printf("        █                ♫        ██▀▀    █    ░░░ █\n");
    printf("        █                         ▀  ▓▓▓▓▀         █\n");
    printf("        █          ▓▓        ♫     ▄██████▄        █\n");
    printf("        █   ░░░                   ▒▒▒▒▒▒▒▒▒▒▒▒     █\n");
    printf("        ████████████████████████████████████████████\n");
  }
  if (id == 10) {
    printf("        ████████████████▒░MASMORRA░▒████████████████\n");
    printf("        █                                 ▄▓▄      █\n");
    printf("        █                                ▄▓▓▓▄     █\n");
    printf("        █                  █▄█▄█▄█      ▄▓▓▓▓▓▄    █\n");
    printf("        █   ▄▓▄ █▄█▄█▄█▄█▄█▐██┼██▌█▄█▄█▄█▄█▄█      █\n");
    printf("        █  ▄▓▓▓▄██┼██┼██┼██▐█████▌██┼██┼██┼██      █\n");
    printf("        █░▄▓▓▓▓▓▄██████████▐██ ██▌███████████░░░░░░█\n");
    printf("        █▄▓▓▓▓▓▓▓▄         ▒▒▒▒░   ▒▒    ▄█▄       █\n");
    printf("        █    █           ▒▒▒▒░         ▄█████▄     █\n");
    printf("        █         ▒▒▒    ▒▒▒▒░        ▀██┼█┼██▀ ▒▒ █\n");
    printf("        █   ░░             ░░░░        ███████     █\n");
    printf("        █                     ░░░░░      ░░░       █\n");
    printf("        ████████████████████████████████████████████\n");
  }
  if (id == 11) {
    printf("        ████████████████████████████████████████████\n");
    printf("        █                                          █\n");
    printf("        █                 █▄█▄█▄█▄██▄█▄█▄█▄█▄█▄█▄█ █\n");
    printf("        █                  ▒▒▒▒▒▒▒ █▓┼▓▓▓┼▓▓▓┼▓▓┼▓ █\n");
    printf("        █                  ▒▒▒▒▒▒▒ █▓▓▓▓▓▓▓▓▓▓▓▓▓▓ █\n");
    printf("        █   ▄▓▄       ▄█▄  ▒▒▒▒▒▒▒ █▓▓▓▓   ▓▓▓▓▓▓▓ █\n");
    printf("        █  ▄▓▓▓▄    ▄█████▄▒▒▒▒▒▒▒ █▓┼▓     ▄▓▄▓▓▓ █\n");
    printf("        █ ▄▓▓▓▓▓▄  ▀██┼█┼██▀▒▒▒▒▒▒ █▓▓▓    ▄▓▓▓▄▓▓ █\n");
    printf("        █░░░░█░░░░░░███████░░░░░░░░░░░░░░░▄▓▓▓▓▓▄░░█\n");
    printf("        █         ░░░░░░░░░░░░░░         ▄▓▓▓▓▓▓▓▄ █\n");
    printf("        █        ░░░░░░░           ░░        █     █\n");
    printf("        █                    ░░░                   █\n");
    printf("        ████████████████████████████████████████████\n");
  }
  if (id == 12) {
    printf("        █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▒░BIBLIOTECA░▒▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
    printf("        █ ██▒▒▓▒▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▒▓▒▒██ █\n");
    printf("        █ ▓▒░░ ░  ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄  ░ ░░▒▓ █\n");
    printf("        █ ▓▒░ ░▒░ █░▒▓░▒▓░▒▓░▒▓░▓▓░▒▓░▒▓░█ ░▒░ ░▒▓ █\n");
    printf("        █ ▓▒░ ▒▓▒ █░▒▓░▒▓░▒▓░▒▓░▓▓░▒▓░▒▓░█ ▒▓▒ ░▒▓ █\n");
    printf("        █ ▓▒░ ▀█▀ █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█ ▀█▀ ░▒▓ █\n");
    printf("        █ ▓▒░     █░▒▓░▓▓░▒▓░▒░▒▒▓░▒▓░▒▓░█     ░▒▓ █\n");
    printf("        █ ▓▒░     █░▒▓░▓▓░▒▓░▒░▒▒▓░▒▓░▒▓░█     ░▒▓ █\n");
    printf("        █ ▓▒░     █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█     ░▒▓ █\n");
    printf("        █ ▓▒░░    █░▒▓░▒▓░▒▓░▒▓░▒▓░▒▓░▒▓░█    ░░▒▓ █\n");
    printf("        █ ██▒▒▓▒  █░▒▓░▒▓░▒▓░▒▓░▒▓░▒▓░▒▓░█  ▒▓▒▒██ █\n");
    printf("        █ ██▒▒▓▒▒ █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█ ▒▒▓▒▒██ █\n");
    printf("        █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  }
/*
█▓▒░▀▄
▁ ▂ ▃ ▄ ▅ ▆ ▇
*/
  if (id == 20) {
    printf("        ████████████████████████████████████████████\n");
    printf("        █ ▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▓▒░░▓▒▒▒▓░░░░░░░░░░░ █\n");
    printf("        █ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓░▓▓░▓▓▓▓▓▓░░░░░░░▓▒▒▒▒ █\n");
    printf("        █ ▓▓▒▓▓▓▓▒▒▒▒▒██▓███▓▓▓▓▓▓▓▓███▒░░░▒▓██▓▓▓ █\n");
    printf("        █ ███████▓▓▒██████▓▓▓▓▓▓█████░░░░█████████ █\n");
    printf("        █ ▓▓▓█▓▒▓▒▒██▒███▓▓▓▓█▓██████░░████▓▓▓▓▓██ █\n");
    printf("        █ ▓▓███▓▒▒░▒▒▒▓▒▒███▓▓▓▓▓████░░▒█▓▓▓▓▓▓▓▓█ █\n");
    printf("        █ ▓▓█▓▓▓▒▒░▒▒▒░▒▒▓████▓░▓█████░░░░░░▓▓▓▓▓░ █\n");
    printf("        █ ▒▓█▓▓▓▒░▒▒░▒▒▒▓▓█▓▓▓░▓▓██▓▒▓▓░░▒▒▒░▓▓▒▒▓ █\n");
    printf("        █ ▒▓█▓▓▒░░░░░▒░▒▒▓▓▓▒▒▓░░▒▓▓▒▒▓▓░▒▒░░░▒▒▒▒ █\n");
    printf("        █ ▒▓▓▓▒▒░░░▒▒░░▒▒▒▓▒▒▒░░░▓▓▒░░░░░░░░░░░▒▒▒ █\n");
    printf("        █ ▒▓▓▓▒░░░▒▒░░▒▒▒▒▒▒▒░░▒░░░▓▒▒░░░░░░░░░▒▒▒ █\n");
    printf("        ████████████████████████████████████████████\n");
  }
  if (id == 21) {
    printf("        ████████████████████████████████████████████\n");
    printf("        █   ▒▒ ░░ ▒▒      ▒▒░░░░▒▒      ▒▒ ░░ ▒▒   █\n");
    printf("        █   ▒▒ ░░ ▒▒        ▒▒▒▒        ▒▒ ░░ ▒▒   █\n");
    printf("        █   ▒▒░░░░▒▒                    ▒▒░░░░▒▒   █\n");
    printf("        █     ▒▒▒▒         ▂   ▄▀▂   ░    ▒▒▒▒     █\n");
    printf("        █                  ▇░▒▒▒░▇  ░▲░            █\n");
    printf("        █                   ▀▀▇▀▀    ▇             █\n");
    printf("        █            ▅▃▃▃▃▅  ▂▇▂    ▁▇▁            █\n");
    printf("        █ ▓▓▒▒░░░░░░░░░▒▒░░░░░░░░░▒▒░░░░░░░░░░▒▒▓▓ █\n");
    printf("        █ ▓▒▀█▒▒░░░░░░░░░▒▒░░░░░▒▒░░░░░░░░░░▒▒█▀▒▓ █\n");
    printf("        █ ▓▒  ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀  ▒▓ █\n");
    printf("        █ ▓▒                                    ▒▓ █\n");
    printf("        ████████████████████████████████████████████\n");
  }
  if (id == 22) {
    printf("        ████████████████████████████████████████████\n");
    printf("        █░░░                ▒▓▓▒                   █\n");
    printf("        █                   ▒▓▓▒     ░░░░░░░░▒     █\n");
    printf("        █                  ██████          ▒▒      █\n");
    printf("        █       ░░░░░░░░ ██ ▒▓▓▒ ██                █\n");
    printf("        █                ██ ▒▓▓▒ ██                █\n");
    printf("        █ ▒▒▒          ██████████████     ▒▒▒      █\n");
    printf("        █              ██████  ██████              █\n");
    printf("        █     ░░░░░░░░ █████    █████   ░░░░░░░    █\n");
    printf("        █              ██████████████              █\n");
    printf("        █              ██████████████ ░░░░░░░      █\n");
    printf("        █          ░░░      ▒▓▓▒                   █\n");
    printf("        ████████████████████████████████████████████\n");
  }
  if (id == 23) {
    printf("        ████████████████████████████████████████████\n");
    printf("        █░░░                ▒▓▓▒                   █\n");
    printf("        █                   ▒▓▓▒     ░░░░░░░░▒     █\n");
    printf("        █                  ██████          ▒▒      █\n");
    printf("        █       ░░░░░░░░ ██ ▒▓▓▒ ██                █\n");
    printf("        █                ██ ▒▓▓▒ ██                █\n");
    printf("        █ ▒▒▒          ██████████████              █\n");
    printf("        █              ██████  ██████        ▄▀▀▄  █\n");
    printf("        █     ░░░░░░░░ █████    █████ █▀█▀▀▀▀█  █  █\n");
    printf("        █              ██████████████ ▀ ▀     ▀▀   █\n");
    printf("        █              ██████████████ ░░░░░░░      █\n");
    printf("        █          ░░░      ▒▓▓▒                   █\n");
    printf("        ████████████████████████████████████████████\n");
  }
  if (id == 24) {
    printf("        ████████████████████████████████████████████\n");
    printf("        █                                          █\n");
    printf("        █                                          █\n");
    printf("        █                                          █\n");
    printf("        █                                          █\n");
    printf("        █                                          █\n");
    printf("        █                                          █\n");
    printf("        █                                          █\n");
    printf("        █                                          █\n");
    printf("        █                                          █\n");
    printf("        █                                          █\n");
    printf("        █                                          █\n");
    printf("        ████████████████████████████████████████████\n");
  }
}

void animationAmanhecer() {
  system("clear");
  printf("                  ESPERANDO ATÉ O AMANHECER\n");
  printf("        ████████████████████████████████████████████\n");
  printf("        █                                          █\n");
  printf("        █                      "YEL "█" RESET "                   █\n");
  printf("        █                     "YEL "█▓█" RESET "                  █\n");
  printf("        █                   "YEL "██▓▒▓█" RESET "                 █\n");
  printf("        █                  "YEL "█▓▓▒░▒▓█" RESET "                █\n");
  printf("        █                 "YEL "█▓▒▒░░░▒▓█" RESET "               █\n");
  printf("        █                  "YEL "█▓▒░  ░▒▓█" RESET "              █\n");
  printf("        █                 "YEL "█▓▒░    ░▒▓█" RESET "             █\n");
  printf("        █                "YEL "█▓▓▒░░   ░▒▓█" RESET "             █\n");
  printf("        █                  "YEL "██▓▓▒▒░░▒▓" RESET "              █\n");
  printf("        █               ░░░░░░░░░░░░░░░░           █\n");
  printf("        ████████████████████████████████████████████\n");
  system("sleep .5");
  system("clear");
  printf("                  ESPERANDO ATÉ O AMANHECER.\n");
  printf("        ████████████████████████████████████████████\n");
  printf("        █                                          █\n");
  printf("        █                      "YEL "█" RESET "                   █\n");
  printf("        █                    "YEL "█▓█" RESET "                   █\n");
  printf("        █                  "YEL "██▓▒▓█" RESET "                  █\n");
  printf("        █                 "YEL "█▓▓▒░▒▓█" RESET "                 █\n");
  printf("        █                "YEL "█▓▒▒░░░▒▓█" RESET "                █\n");
  printf("        █                 "YEL "█▓▒░  ░▒▓█" RESET "               █\n");
  printf("        █                  "YEL "█▓▒░    ░▒▓█" RESET "            █\n");
  printf("        █                 "YEL "█▓▓▒░░   ░▒▓█" RESET "            █\n");
  printf("        █                 "YEL "██▓▓▒▒░░▒▓" RESET "               █\n");
  printf("        █               ░░░░░░░░░░░░░░░░           █\n");
  printf("        ████████████████████████████████████████████\n");
  system("sleep .5");
  system("clear");
  printf("                  ESPERANDO ATÉ O AMANHECER..\n");
  printf("        ████████████████████████████████████████████\n");
  printf("        █                                          █\n");
  printf("        █                      "YEL "█" RESET "                   █\n");
  printf("        █                     "YEL "█▓█" RESET "                  █\n");
  printf("        █                   "YEL "██▓▒▓█" RESET "                 █\n");
  printf("        █                  "YEL "█▓▓▒░▒▓█" RESET "                █\n");
  printf("        █                 "YEL "█▓▒▒░░░▒▓█" RESET "               █\n");
  printf("        █                  "YEL "█▓▒░  ░▒▓█" RESET "              █\n");
  printf("        █                 "YEL "█▓▒░    ░▒▓█" RESET "             █\n");
  printf("        █                "YEL "█▓▓▒░░   ░▒▓█" RESET "             █\n");
  printf("        █                  "YEL "██▓▓▒▒░░▒▓" RESET "              █\n");
  printf("        █               ░░░░░░░░░░░░░░░░           █\n");
  printf("        ████████████████████████████████████████████\n");
  system("sleep .5");
  system("clear");
  printf("                  ESPERANDO ATÉ O AMANHECER...\n");
  printf("        ████████████████████████████████████████████\n");
  printf("        █                                          █\n");
  printf("        █                      "YEL "█" RESET "                   █\n");
  printf("        █                      "YEL "█▓█" RESET "                 █\n");
  printf("        █                    "YEL "██▓▒▓█" RESET "                █\n");
  printf("        █                   "YEL "█▓▓▒░▒▓█" RESET "               █\n");
  printf("        █                  "YEL "█▓▒▒░░░▒▓█" RESET "              █\n");
  printf("        █                   "YEL "█▓▒░  ░▒▓█" RESET "             █\n");
  printf("        █                  "YEL "█▓▒░    ░▒▓█" RESET "            █\n");
  printf("        █                 "YEL "█▓▓▒░░   ░▒▓█" RESET "            █\n");
  printf("        █                   "YEL "██▓▓▒▒░░▒▓" RESET "             █\n");
  printf("        █               ░░░░░░░░░░░░░░░░           █\n");
  printf("        ████████████████████████████████████████████\n");
  system("sleep .5");
  system("clear");
  printf("\n");
  printf("        ████████████████████████████████████████████\n");
  printf("        █                                          █\n");
  printf("        █                      "YEL "█" RESET "                   █\n");
  printf("        █                     "YEL "█▓█" RESET "                  █\n");
  printf("        █                   "YEL "██▓▒▓█" RESET "                 █\n");
  printf("        █                  "YEL "█▓▓▒░▒▓█" RESET "                █\n");
  printf("        █                 "YEL "█▓▒▒░░░▒▓█" RESET "               █\n");
  printf("        █                  "YEL "█▓▒░  ░▒▓█" RESET "              █\n");
  printf("        █                 "YEL "█▓▒░    ░▒▓█" RESET "             █\n");
  printf("        █                "YEL "█▓▓▒░░   ░▒▓█" RESET "             █\n");
  printf("        █                  "YEL "██▓▓▒▒░░▒▓" RESET "              █\n");
  printf("        █               ░░░░░░░░░░░░░░░░           █\n");
  printf("        ████████████████████████████████████████████\n");
  system("sleep .5");
  system("clear");
}

/*@LOJA*/
void BernardoLoja(char txt[], Player player) {
  printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█ ╔═══════════════════╗\n");
  printf("█                     █████████  ▄ █");
  printf("  💰COINS:  "YEL"%d\n" RESET, player.coins);
  printf("█                    ████████████  █ ╚═══════════════════╝\n");
  printf("█                     ████▒▒▒▒▒██  █ ╔═══════════════════╗\n");
  if (player.total == player.limit) {
    printf("█ ╔══════════════════╗ ▀█▒▒▀█▀▒███ █");
    printf("  🎒INVENTÁRIO  "RED"%d/%d\n"RESET, player.total, player.limit);
  } else {
    printf("█ ╔══════════════════╗ ▀█▒▒▀█▀▒███ █");
    printf("  🎒INVENTÁRIO  "GRN"%d/%d\n"RESET, player.total, player.limit);
  }
  printf("█ ║  DIGITE O ID DO  ║ ░▒▀▒░░░▒█▒█ █ ╚═══════════════════╝\n");
  printf("█ ║      PRODUTO     ║ ▒▀▀▀▀▀▒▒█   █\n");
  printf("█ ╚═════════════════╗║  ▒▒▒▒▒▒░░   █\n");
  printf("█                      ░░░░░░░░░░  █\n");
  printf("█                     ░░░░░░░░░░░░ █\n");
  printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf(BLU "     %s\n" RESET, txt);
  printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
}

void animationBernardoLoja(char txt[]) {
  system("clear");
  printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf("█            █████████  ▄          █\n");
  printf("█           ████████████           █\n");
  printf("█            ████▒▒▒▒▒██           █\n");
  printf("█             ▀█▒▒▀█▀▒███          █\n");
  printf("█             ░▒▀▒░░░▒█▒█          █\n");
  printf("█             ▒▀▀▀▀▀▒▒█            █\n");
  printf("█              ▒▒▒▒▒▒░░            █\n");
  printf("█             ░░░░░░░░░░           █\n");
  printf("█            ░░░░░░░░░░░░          █\n");
  printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf(BLU "     %s\n" RESET, txt);
  printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  system("sleep .5");
  system("clear");
  printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf("█            █████████  ▄          █\n");
  printf("█           ████████████           █\n");
  printf("█            ████▒▒▒▒▒██           █\n");
  printf("█             ▀█▒▒▀█▀▒███          █\n");
  printf("█             ░▒▀▒░░░▒█▒█          █\n");
  printf("█             ▒▀▀▀▀▀▒▒█            █\n");
  printf("█             ▒▁▁▁▁▁▒▒█            █\n");
  printf("█             ░▒▒▒▒▒▒░░            █\n");
  printf("█            ░░░░░░░░░░░░          █\n");
  printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf(BLU "     %s\n" RESET, txt);
  printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  system("sleep .5");
  system("clear");
  printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf("█            █████████  ▄          █\n");
  printf("█           ████████████           █\n");
  printf("█            ████▒▒▒▒▒██           █\n");
  printf("█             ▀█▒▒▀█▀▒███          █\n");
  printf("█             ░▒▀▒░░░▒█▒█          █\n");
  printf("█             ▒▀▀▀▀▀▒▒█            █\n");
  printf("█              ▒▒▒▒▒▒░░            █\n");
  printf("█             ░░░░░░░░░░           █\n");
  printf("█            ░░░░░░░░░░░░          █\n");
  printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf(BLU "     %s\n" RESET, txt);
  printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  system("sleep .5");
  system("clear");
  printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf("█            █████████  ▄          █\n");
  printf("█           ████████████           █\n");
  printf("█            ████▒▒▒▒▒██           █\n");
  printf("█             ▀█▒▒▀█▀▒███          █\n");
  printf("█             ░▒▀▒░░░▒█▒█          █\n");
  printf("█             ▒▀▀▀▀▀▒▒█            █\n");
  printf("█             ▒▁▁▁▁▁▒▒█            █\n");
  printf("█             ░▒▒▒▒▒▒░░            █\n");
  printf("█            ░░░░░░░░░░░░          █\n");
  printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
  printf(BLU "     %s\n" RESET, txt);
  printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
  system("sleep .5");
  system("clear");
}
