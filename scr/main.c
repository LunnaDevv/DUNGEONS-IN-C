#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*----------------*/
#include "../includes/config.h"
#include "../includes/images.h"
#include "../includes/savesystem.h"
/*
printf("                  ╔═══════════════════════╗\n
printf("   █████████      ║ BEM VINDO AO CÓDIGO!!!║\n
printf("  ████████████    ║ /═════════════════════╝\n
printf("   ████▒▒▒▒▒██    ║/\n
printf("    ▀█▒▒▀█▀▒███\n
printf("    ░▒▀▒░░░▒█▒█\n
printf("    ▒▀▀▀▀▀▒▒█\n
printf("     ▒▒▒▒▒▒\n

printf(" BERNARDINHO ELVIS DA SILVA
*/

void Menu(Player *player, Item itens[]) {
  system("clear");
  int sel = 0;
  imageTitle();
  scanf("%d", &sel);
  int open;
  system("clear");
  switch (sel) {
  case 1:
    SalvarPlayer(player, 0, itens);
    break;
  case 2:
    AbrirSave(player);
    break;
  case 3:
    ImageCreditos("Luanna Morais", "Alef Almeida");
    Menu(player, itens);
    break;
  case 4:
    imageControls();
    Menu(player, itens);
    break;
  case 5:
    system("clear");
    printf(MAG "\t\t!!!JOGO ENCERRADO!!!\n" RESET);
    exit(0);
    break;
  default:
    Menu(player, itens);
    break;
  }
}

int main(void) {
  Player player;   // jogador
  Area map[3][3];  // mapa
  Enemy enemys[4]; // inimigos padrões
  Item itens[8];   // itens padrões
  Item loja[3];    // itens da loja

  SetItem(itens);             // criando itens
  SetEnemy(enemys);           // criando inimigos
  SetMap(map, itens, enemys); // criando mapa
  SetLoja(itens, loja);       // criando loja

  Menu(&player, itens);

  int sel = 0;
  if (player.y == -1) {
    while (sel != 1) {
      imageMap(&player);
      printf("\nVOCÊ SE ENCONTRA NA FRENTE DA MASMORRA, ENTRE NELA\n\n");
      imageButtonsInicial();
      scanf("%d", &sel);
    }
    player.x = 1;
    player.y = 0;
    EnterArea(&player, &map[player.x][player.y]);
  } // ENTRANDO NA MASMORRA

  while (player.hp > 0) {
    player._x = player.x;
    player._y = player.y;
    imageMap(&player);
    printf("\n\tSUA LOCALIZAÇÃO ATUAL:%d, %d\n", player.x, player.y);
    imageButtons();

    playerStatus(player, 0);

    int i;
    printf("\t\t\nDIGITE O NÚMERO DA OPÇÃO>>> ");
    scanf("%d", &i);
    switch (i) {
    case 2: // Direita
      if (player.x < 2) {
        player.x++;
        EnterArea(&player, &map[player.x][player.y]);
      }
      break;
    case 1: // Frente
      if (player.y < 2) {
        player.y++;
        EnterArea(&player, &map[player.x][player.y]);
      }
      break;
    case 4: // Esquerda
      if (player.x > 0) {
        player.x--;
        EnterArea(&player, &map[player.x][player.y]);
      }
      break;
    case 3: // Trás
      if (player.y > 0) {
        player.y--;
        EnterArea(&player, &map[player.x][player.y]);
      }
      break;
    case 5:
      system("clear");
      imageInventory(&player);
      printf("\nDigite o id do item desejado ou digito '-1' para voltar:");
      int s;
      scanf("%d", &s);
      if (s != -1) {
        system("clear");
        printf("\nVocê selecionou %s!\n", player.inventory[s].name);
        imageItens(player.inventory[s], s);
        UsarItem(&player, s);
        system("sleep 1.3");
        system("clear");
      }
      break;
    case 6:
      Loja(loja, &player, 3);
      break;
    case 7:
      SalvarPlayer(&player, 1, itens);
      system("clear");
      printf("OBRIGADO POR JOGAR, VOLTE MAIS TARDE!!!\n");
      break;
    case 8:
      system("clear");
      Menu(&player, itens);
      break;
    case 9:
      system("clear");
      printf(MAG "\t\t!!!JOGO ENCERRADO!!!\n" RESET);
      exit(0);
      break;
    default:
      printf("Opção inválida.\n");
      break;
    }
  } // DENTRO DA MASMORRA

  // FIM DE JOGO
  system("clear");
  imageGameOver();
  system("clear");
  imageGameOver();
  system("clear");
  imageGameOver();
  return 0;
}