#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*----------------*/
#include "../includes/config.h"
#include "../includes/images.h"
void checkInventory(Player *player) {
  printf("\n ▂▃▄▅▆▇█▓▒ ITENS SALVOS ▒▓█▇▆▅▄▃▂\n");
  if (player->total != 0) {
    for (int i = 0; i < player->total; i++) {
      imageItens(player->inventory[i], i);
    }
  } else {
    printf("        SEM ITENS SALVOS\n");
  }
} //@Checar itens do inventário

void LoadingSave(Player *player, char txt[20]) {
  system("clear");
  printf(GRN "\n\t\t  %s\n\n" RESET, txt);
  playerStatus(*player, 0);
  checkInventory(player);
  system("sleep .3");
  system("clear");

  printf(GRN "\n\t\t  %s.\n\n" RESET, txt);
  playerStatus(*player, 0);
  checkInventory(player);
  system("sleep 1");
  system("clear");

  printf(GRN "\n\t\t  %s..\n\n" RESET, txt);
  playerStatus(*player, 0);
  checkInventory(player);
  system("sleep 1");
  system("clear");

  printf(GRN "\n\t\t  %s...\n\n" RESET, txt);
  playerStatus(*player, 0);
  checkInventory(player);
  system("sleep 1");
  system("clear");
} //@Indicação visual de salvamento

Player newPlayer(Item item) {
  Player player;
  // DEFAULT
  strcpy(player.name, " ");
  player.limit = 3;
  player.total = 0;
  player.inventory = (Item *)malloc(player.limit * sizeof(Item));
  player.equipado = item;
  player.hp = 16;
  player.coins =0;
  player.x = 1;
  player.y = -1;
  player._x = 1;
  player._y = -1;
  //
  int sel = 0;
  while (sel != 1) {
    system("clear");
    printf("  ");
    printf(MAG "\t\n    ═════CRIANDO UM NOVO JOGO═════\n\n" RESET);
    playerStatus(player, 0);
    printf("\tDigite o nome do seu herói");
        printf(RED "[Limite de 20 caracteres]\n" RESET);
        printf(GRN ">>>" RESET);
    scanf(" %20s", player.name);
    system("clear");
    printf("  ");
    printf(MAG "\t\n    ═════CRIANDO UM NOVO JOGO═════\n\n" RESET);
    playerStatus(player, 0);
    printf("\tO nome do seu herói é %s, deseja continuar?", player.name);
    sel = selecionado();
  }
  return player;
} //@Criar novo player padrão

void SalvarPlayer(Player *player, int i,
                  Item itens[]) { // i=[0:NEW PLAYER][1:SAVE PLAYER]
  FILE *arquivo;
  arquivo = fopen("saveplayer.txt", "w");
  if (arquivo == NULL)
    printf("\nERRO NA ABERTURA DE ARQUIVO PARA SALVAR\n");
  if (i == 0) {
    *player = newPlayer(itens[3]);
  } else {
    LoadingSave(player, "SALVANDO");
  }

  fwrite(player, sizeof(Player), 1, arquivo);
  fclose(arquivo);
  if (ferror(arquivo))
    printf("\nERRO NA GRAVAÇÃO\n");

  arquivo = fopen("saveinventory.txt", "w");
  fwrite(player->inventory, sizeof(Item), player->total, arquivo);
  fclose(arquivo);

  if (ferror(arquivo))
    printf("\nERRO NA GRAVAÇÃO\n");
} //@Salvando progresso

void AbrirSave(Player *player) {
  FILE *arquivo;
  arquivo = fopen("saveplayer.txt", "r");
  fread(player, sizeof(Player), 1, arquivo);
  fclose(arquivo);

  player->inventory = (Item *)malloc(player->limit * sizeof(Item));

  arquivo = fopen("saveinventory.txt", "r");
  fread(player->inventory, sizeof(Item), player->total, arquivo);
  fclose(arquivo);

  LoadingSave(player, "CARREGANDO SAVE");
} //@Carregando progresso
