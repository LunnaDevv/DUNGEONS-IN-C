#ifndef CONFIG_H
#define CONFIG_H
#define true 1
#define false 0
typedef int booll;
/*@STRUCTS*/
typedef struct {
  char name[10], description[100];
  int hp, attack, id, coins;
} Enemy;

typedef struct {
  char name[25];
  int tipo; // 0-consumivel 1-equipamento 2-chave
  int value;
  int coins;
  int id;
} Item;

typedef struct {
  char description[2][500];
  Item item;
  Enemy enemy;
  int id;// id da imagem mostrada na tela
  booll _item, _enemy, lock;
/*_item=se tem item na area;_enemy=se tem inimigo na area;lock=se a area esta trancada*/
} Area;

typedef struct {
  char name[21];
  int hp;
  int coins;

  Item *inventory;  // inventario
  Item equipado;    // item equipado
  int total, limit; // total e limite de itens
  int x, y;         // local atual
  int _x, _y;       // local anterior
} Player;

int selecionado();
/*@SETS*/
void SetMap(Area mapa[3][3], Item itens[3], Enemy enemys[3]);
void SetEnemy(Enemy enemys[3]);
void SetItem(Item itens[]);
void SetLoja(Item itens[], Item loja[3]);
/*@INVENTARIO*/
void AddItem(Item item, Player *player);
void PegarItem(Item item, Player *player);
void UsarItem(Player *player, int s);
void RemoverItem(Player *player, int id);
/*@MAPA*/
void EnterArea(Player *player, Area *area);
/*@LOJA*/
void Loja(Item itens[], Player *player, int total);
#endif