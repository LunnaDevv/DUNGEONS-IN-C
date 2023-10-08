#ifndef IMAGES_H
#define IMAGES_H
#include "../includes/config.h"
/*@CORES*/
#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define RESET "\x1B[0m"
/*@HUD*/
void imageButtons();
void imageControls();
void imageButtonsInicial();
void imageTitle();
void imageGameOver();
void ImageCreditos(char *str1, char *str2);
void imageWin();
/*@PLAYER*/
void playerStatus(Player player, int i);
/*@ENEMYS*/
void imageEnemys(Enemy enemy);
void animationsEnemys(int id, Player *player);
void imageEnemysDeath(Enemy enemy);
/*@ITENS*/
void imageItens(Item item, int id);
void imageInventory(Player *player);
/*@MAP*/
void imageMap(Player *player);
void imageAreas(int id);
void carregandoArea(Player player);
/*@LOJA*/
void animationBernardoLoja(char txt[]);
void BernardoLoja(char txt[], Player player);
#endif