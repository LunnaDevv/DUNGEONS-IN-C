#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*----------------*/
#include "../includes/config.h"
#include "../includes/images.h"

int selecionado() {
  /*@Sistema de dupla escolha, facilita e
  o resto do sistema de interação com o usuário*/
  int sel = 1;
  printf("\n\t\t╔═════════════════╗\n");
  printf("\t\t█    1 | SIM      █\n");
  printf("\t\t█━━━━━━━━━━━━━━━━━█\n");
  printf("\t\t█    2 | NÃO      █\n");
  printf("\t\t╚═════════════════╝\n");
  scanf("%d", &sel);
  return sel;
}

/*@FUNÇÕES DE SET - cria os inimigos, itens, e salas*/
void SetEnemy(Enemy enemys[]) {
  strcpy(enemys[0].name, "o Zumbi");
  strcpy(enemys[0].description, "Você nota uma presença misteriosa, "
                                "você se aproxima e então percebe...");
  enemys[0].hp = 10;
  enemys[0].attack = 3;
  enemys[0].id = 0;
  enemys[0].coins = 10;
  //***************************
  strcpy(enemys[1].name, "a Serpente");
  strcpy(enemys[1].description, "Você escuta um som estranho porém familiar, "
                                "você se aproxima e então percebe...");
  enemys[1].hp = 3;
  enemys[1].attack = 1;
  enemys[1].id = 1;
  enemys[1].coins = 5;
  //***************************

  strcpy(enemys[2].name, "o Jaré");
  strcpy(enemys[2].description,
         "Seus olhos imediatamente focam em uma silhueta gigando e no forte "
         "odor que ela emite, você se aproxima e então percebe...");
  enemys[2].hp = 15;
  enemys[2].attack = 3;
  enemys[2].id = 2;
  enemys[2].coins = 30;
  //***************************

  strcpy(enemys[3].name, "a MORTE");
  strcpy(enemys[3].description,
         "Seu corpo paraliza...A verdadeira batalha irá começar");
  enemys[3].hp = 20;
  enemys[3].attack = 5;
  enemys[3].id = 3;
  enemys[3].coins = 50;
}

void SetItem(Item itens[]) {
  strcpy(itens[0].name, "Café quente");
  itens[0].value = 3;
  itens[0].id = 0;
  itens[0].tipo = 0;
  itens[0].coins = 10;
  strcpy(itens[1].name, "Cerveja velha");
  itens[1].id = 1;
  itens[1].tipo = 0;
  itens[1].coins = 15;
  itens[1].value = 5;
  strcpy(itens[2].name, "Taça de vinho");
  itens[2].id = 2;
  itens[2].tipo = 0;
  itens[2].coins = 20;
  itens[2].value = 10;
  strcpy(itens[3].name, "Adaga quebrada");
  itens[3].id = 3;
  itens[3].tipo = 1;
  itens[3].value = 4;
  strcpy(itens[4].name, "Espada velha");
  itens[4].id = 4;
  itens[4].tipo = 1;
  itens[4].value = 6;
  strcpy(itens[5].name, "Chave");
  itens[5].id = 5;
  itens[5].tipo = 2;
  itens[5].value = 0;
  strcpy(itens[6].name, "Mochila");
  itens[6].id = 6;
  itens[6].tipo = 3;
  itens[6].value = 6;
  strcpy(itens[7].name, "Pistola");
  itens[7].id = 8;
  itens[7].tipo = 1;
  itens[7].value = 100;
  strcpy(itens[8].name, "Cajado");
  itens[8].id = 7;
  itens[8].tipo = 1;
  itens[8].value = 8;
}

void SetMap(Area mapa[3][3], Item itens[], Enemy enemys[]) {
  strcpy(mapa[0][0].description[0],
         "Você se encontra na sala de \narmas da masmorra. ");
  strcpy(
      mapa[0][0].description[1],
      "Não encontra grandes coisas, \nmas apesar disso decide vasculhar mais.");
  mapa[0][0].lock = 0;        // se esta trancada
  mapa[0][0].id = 00;         // image id
  mapa[0][0]._item = true;    // tem item
  mapa[0][0].item = itens[4]; // tem item
  mapa[0][0]._enemy = true;   // nao tem inimigo
  mapa[0][0].enemy = enemys[0];
  //
  strcpy(
      mapa[0][1].description[0],
      "Você encontra as celas da masmorra. \nBasta pouco olhar para notar que "
      "dentro delas existe um número \nincontavel de cadavers e esqueletos "
      "perdidos nos tempo. \nVocê deseja não imaginar como foi estar na pele "
      "de algum deles.");
  strcpy(mapa[0][1].description[1],
         "O lugar está tão destrido que se assemelha\n a uma caverna..."
         "Apesar disso você vasculha o lugar \ncom o instuito de concluir seu "
         "grande objetivo final.");
  mapa[0][1].lock = 0;     // se esta trancada
  mapa[0][1].id = 01;      // image id
  mapa[0][1]._item = true; // tem item
  mapa[0][1].item = itens[5];
  mapa[0][1]._enemy = true; // nao tem inimigo
  mapa[0][1].enemy = enemys[3];
  //
  strcpy(mapa[0][2].description[0], "Um som...");
  strcpy(mapa[0][2].description[1],
         "Foi isso que lhe atraiu até esta sala. \nUm som que ecoava entre as "
         "salas da masmorra. Um som melancólico, \ne se aproximando dele você "
         "nota que se trata de um aparelho estranho\n e bizarro de música, "
         "empoeirado e enferrujado.");
  mapa[0][2].lock = 0;     // se esta trancada
  mapa[0][2].id = 02;      // image id
  mapa[0][2]._item = true; // tem item
  mapa[0][2].item = itens[6];
  mapa[0][2]._enemy = true; // nao tem inimigo
  mapa[0][2].enemy = enemys[1];
  //
  strcpy(mapa[1][0].description[0],
         "Você se depara com uma masmorra de pedra velha\n em ruínas e decide "
         "entrar pelo portão principal.");
  strcpy(mapa[1][0].description[1],
         "Assim que você entra se depara com o salão principal,\n úmido e "
         "escuro, iluminado apenas por tochas presas na parede.");
  mapa[1][0].lock = 0;     // se esta trancada
  mapa[1][0].id = 10;      // image id
  mapa[1][0]._item = true; // tem item
  mapa[1][0].item = itens[rand() % 2];
  mapa[1][0]._enemy = true; // nao tem inimigo
  mapa[1][0].enemy = enemys[2];
  //
  strcpy(
      mapa[1][1].description[0],
      "Você se encontra no centro da masmorra, \ncomo se sente? Será que está "
      "próximo de encontrar o tesouro?\nO centro da masmorra não possui "
      "teto, é um local aberto, \ncom arvores e uma cabana pequena em um "
      "campo iluminado pela lua.");
  strcpy(mapa[1][1].description[1],
         "Você decide explorar a cabana e continuar sua jornada.");
  mapa[1][1].lock = 0;     // se esta trancada
  mapa[1][1].id = 11;      // image id
  mapa[1][1]._item = true; // tem item
  mapa[1][1].item = itens[rand() % 2];
  mapa[1][1]._enemy = true; // nao tem inimigo
  mapa[1][1].enemy = enemys[rand() % 3];
  //
  strcpy(
      mapa[1][2].description[0],
      "Você se encontra no fim do grandioso corredor da masmorra.\n Ao "
      "espremer "
      "seus olhos para focar no ponto de luz vindo do portão principal,\n você "
      "nota o seu progresso de exploração dentro da masmorra.");
  strcpy(
      mapa[1][2].description[1],
      "Ao olhar ao redor você nota que enconrou a biblioteca da masmorra e "
      "fica \nadmirado com o quanto estão bem conservados os livros do local.");
  mapa[1][2].lock = 0;     // se esta trancada
  mapa[1][2].id = 12;      // image id
  mapa[1][2]._item = true; // tem item
  mapa[1][2].item = itens[rand() % 3];
  mapa[1][2]._enemy = false;
  //
  strcpy(mapa[2][0].description[0],
         "Você se encontra na ala direita do salão principal.\n Assim como o "
         "local anterior, a sala é \nextremamente umida e as paredes estão "
         "cobertas com lodo escorregadio.");
  strcpy(mapa[2][0].description[1], "E após escorregar você nota que o lodo da "
                                    "sala também está espalhado pelo chão.");
  mapa[2][0].lock = 0; // se esta trancada
  mapa[2][0].id = 20;  // image id
  mapa[2][0]._item = false;
  mapa[2][0]._enemy = true;
  mapa[2][0].enemy = enemys[rand() % 3];
  //
  strcpy(
      mapa[2][1].description[0],
      "Você encontra o salão de festas, \nou pelo menos o que restou dele. "
      "Uma gigante mesa de banquete o aguarda, \ncom restos podres de comida. "
      "O local esta infestado de \nratos e outras criaturas estranhas.");
  strcpy(
      mapa[2][1].description[1],
      "Apesar disso você não deixa de explorar\n o local e checar cada canto "
      "em busca de \nitens que possam auxilia-lo.");
  mapa[2][1].lock = 0;     // se esta trancada
  mapa[2][1].id = 21;      // image id
  mapa[2][1]._item = true; // tem item
  mapa[2][1].item = itens[2];
  mapa[2][1]._enemy = true;
  mapa[2][1].enemy = enemys[0];
  //[ ][ ][ ]
  //[ ][ ][ ]
  //[ ][ ][X]
  mapa[2][2].lock = true; // se esta trancada
  mapa[2][2].id = 22;     // image id
}

void SetLoja(Item itens[], Item loja[3]) {
  loja[0] = itens[0];
  loja[1] = itens[1];
  loja[2] = itens[2];
}

/*@FUNÇÕES DO INVENTÁRIO*/
void AddItem(Item item, Player *player) {
  player->inventory[player->total] = item;
  player->total++;
}

void PegarItem(Item item, Player *player) {
  system("clear");
  printf("\nVocê encontra uma %s!\nDeseja pegar?\n", item.name);
  imageItens(item, item.id);
  int sel = selecionado();
  if (sel == 1) {
    system("clear");
    imageItens(item, item.id);
    if (item.tipo != 3) {
      AddItem(item, player);
      printf("\nVocê pega a %s.\n", player->inventory[player->total - 1].name);
    } else {
      printf("\nVocê pega a %s.\nSeu inventário foi aumentado!!!\n\n",
             item.name);

      player->limit = item.value;
      Item itensP[player->total];
      for (int i = 0; i < player->total; i++) {
        itensP[i] = player->inventory[i];
      }
      player->inventory = (Item *)malloc(player->limit * sizeof(Item));
      for (int i = 0; i < player->total; i++) {
        player->inventory[i] = itensP[i];
      }
    }
  } else {
    system("clear");
    imageItens(item, item.id);
    printf("\nVocê decide não pegar o objeto.\n");
    return;
  }
}

void UsarItem(Player *player, int s) {
  Item item = player->inventory[s];
  printf("\nTem certeza de que quer usar %s?", item.name);
  int sel = selecionado();
  if (sel != 1)
    return;

  system("clear");
  if (item.tipo == 0) // consumivel
  {
    if ((16 - player->hp) >= item.value) {
      player->hp += item.value;
    } else {
      player->hp += 16 - player->hp;
    }
    imageItens(player->inventory[s], s);
    printf("\nVocê usou %s!!! Recuperou %d de vida, seu hp atual é de %d.\n\n",
           item.name, item.value, player->hp);
    RemoverItem(player, s);

    return;
  }
  if (item.tipo == 1) // equipamento
  {
    Item save = player->equipado;
    player->equipado = item;
    printf("\nVocê equipou %s!!! Seu ataque atal é %d.\n\n", item.name,
           item.value);
    imageItens(player->inventory[s], s);

    RemoverItem(player, s);
    AddItem(save, player);
  }
}

void RemoverItem(Player *player, int id) {
  for (int x = 0; x < player->total; x++) {
    if (x >= id) {
      player->inventory[x] = player->inventory[x + 1];
    }
  }
  player->total--;
}

/*@FUNÇÕES DA AREA*/
int Batalha(Player *player, Enemy enemy) {
  animationsEnemys(enemy.id, player);
  system("clear");
  imageEnemys(enemy);
  printf("\tVocê se depara com %s\n\n", enemy.name);
  playerStatus(*player, 0);
  printf("\nENTER>>>");
  getchar();

  int turno = 0;

  while (player->hp > 0 && enemy.hp > 0) {
    if (turno == 1) {
      system("clear");
      imageEnemys(enemy);
      printf("\t\t%s te ataca!\n\n", enemy.name);
      playerStatus(*player, 1);
      system("sleep 1");
      system("clear");

      imageEnemys(enemy);
      player->hp -= enemy.attack;
      if (player->hp <= 0) {
        system("clear");
        imageGameOver();
        system("clear");
        imageGameOver();
        system("clear");
        imageGameOver();
        exit(0);
      }
      printf("\t\t%s te acerta e retira %d de vida!\n\n", enemy.name,
             enemy.attack);
      playerStatus(*player, 1);
      turno = 0;
      system("sleep .5");
    }
    system("clear");
    imageEnemys(enemy);
    printf("\t\tEscolha uma ação!\n\n");
    playerStatus(*player, 1);
    int sel;
    scanf("%d", &sel);
    turno = 1;
    switch (sel) {
    case 1:
      enemy.hp -= player->equipado.value;
      system("clear");
      imageEnemys(enemy);
      printf("Você causou %d de dano ao %s!\n", player->equipado.value,
             enemy.name);
      break;
    case 2:
      if (player->total < 0) {
        system("clear");
        imageEnemys(enemy);
        printf("\t\tVOCÊ AINDA NÃO POSSUI ITENS!\n\n");
        playerStatus(*player, 1);
        system("sleep 1");
        break;
      }
      system("clear");
      imageInventory(player);
      printf("\nDigite o id do item desejado ou digito '-1' para voltar:");
      int s;
      scanf("%d", &s);
      if (sel != -1) {
        system("clear");
        printf("\nVocê selecionou %s!\n", player->inventory[s].name);
        imageItens(player->inventory[s], s);
        UsarItem(player, s);
        system("sleep 1.3");
      }
      break;
    case 3:
      if (player->_y != -1) {
        return 2;
      } else {
        system("clear");
        printf("\nVOCÊ NÃO PODE FUGIR DESSA BATALHA!!!\n");
        system("sleep 1.3");
        system("clear");
      }
      break;
    }
  }
  if (enemy.hp <= 0) {
    system("clear");
    imageEnemysDeath(enemy);
    player->coins += enemy.coins;
    return 1; // vitoria
  }
  if (player->hp <= 0) {
    return 0; // derrota
  }
}

void EnterArea(Player *player, Area *area) {
  carregandoArea(*player);

  if (area->lock == false) { // SE A AREA NAO ESTIVER TRANCADA
    for (int i = 0; i < 2; i++) {
      system("clear");
      imageAreas(area->id);
      printf("\n%s", area->description[i]);
      if (i == 0) {
        printf("\nENTER>>>\n");
        getchar();
        getchar();
      } else {
        printf("\nENTER>>>\n");
        getchar();
      }
    }

    if (area->_enemy == true) { // SE TEM UM INIMIGO
      system("clear");
      imageAreas(area->id);
      printf("\n%s", area->enemy.description);
      printf("\nENTER>>>");
      getchar();
      int win = Batalha(player, area->enemy);
      system("clear");

      if (win == 0) {
        system("clear");
        imageGameOver();
        system("clear");
        imageGameOver();
        system("clear");
        imageGameOver();
        exit(0);
      } // GAME OVER

      if (win == 1) {
        if (area->_item == true) {
          if (area->item.tipo != 3) {
            if (player->limit > player->total) {
              PegarItem(area->item, player);
              area->_item = 0;
            } else {
              system("clear");
              imageItens(area->item, area->item.id);
              printf("\nVocê não tem espaço no seu inventario.\n");
              system("sleep 2");
              return;
            }
          } else {
            PegarItem(area->item, player);
            area->_item = 0;
          }
        }
        area->_enemy = 0;
      } // GAME WIN

      if (win == 2) {
        system("clear");
        imageAreas(area->id);
        printf("\nVOCÊ FUGIU DA BATALHA\n");
        system("sleep 1.3");
        printf("COVARDE\n");
        player->x = player->_x;
        player->y = player->_y;
      } // FUGIU DA BATALHA
    } else {
      if (area->_item == 1) {
        if (area->item.tipo != 3) {
          if (player->limit > player->total) {
            PegarItem(area->item, player);
            area->_item = 0;
          } else {
            system("clear");
            imageItens(area->item, area->item.id);
            printf("\nVocê não tem espaço no seu inventario.\n");
            system("sleep 2");
            return;
          }
        } else {
          PegarItem(area->item, player);
          area->_item = 0;
        }
      }
    }

  } else { // SE ESTIVER TRANCADA
    for (int i = 0; i < player->total; i++) {
      if (player->inventory[i].tipo == 2) { // CASO TENHA A CHAVE
        area->lock = 0;                     // DESTRANCAR
        system("clear");
        imageAreas(area->id);
        printf(
            "\nVocê se depara com uma grande porta, tenta empurra-la, mas ela "
            "não abre. Você precisa de uma chave.");
        printf("\nENTER>>>\n");
        getchar();
        system("clear");
        area->id = 23;

        imageAreas(area->id);
        printf("\nEntretanto você possui uma chave");
        printf("\nENTER>>>\n");
        getchar();
        system("clear");
        area->id = 24;
        imageAreas(area->id);
        printf("\nParabéns, você concluiu seu objetivo e encontrou o tesouro.");
        printf("\nENTER>>>\n");
        getchar();
        system("clear");
        imageWin();
        return;
      }
    }
    system("clear");
    imageAreas(area->id);
    printf("\nVocê se depara com uma grande porta, tenta empurra-la, mas ela "
           "não abre. Você precisa de uma chave");
    player->x = player->_x;
    player->y = player->_y;

    printf("\nENTER>>>");
    getchar();
    getchar();
    system("clear");
  }
}

/*@FUNÇÕES DA LOJA*/
void Loja(Item itens[], Player *player, int total) {
  char textos[3][20] = {"Sinta-se em casa", "Compre mais!", "Gaste tudo!!!"};
  int sel = 0;
  animationBernardoLoja("Seja bem-vindo a minha loja.");
  while (sel != -1) {
    system("clear");
    BernardoLoja(textos[rand() % 2 + 0], *player);

    for (int i = 0; i < total; i++) {
      printf("▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
      printf("█ PREÇO: %d     █", itens[i].coins);
      imageItens(itens[i], i);
    }
    printf("DIGITE -1 PARA SAIR\n\n");
    scanf("%d", &sel);
    system("clear");

    if (sel < total && sel != -1) {
      imageItens(itens[sel], 0);
      printf("Você selecionou %s, deseja comprar?\n", itens[sel].name);
      printf("[PREÇO %d] [SUAS MOEDAS %d]", itens[sel].coins, player->coins);
      int s = selecionado();
      if (s == 1) {
        if (player->coins >= itens[sel].coins) {
          if (player->total < player->limit) {
            if (itens[sel].tipo != 3) {
              AddItem(itens[sel], player);
              player->coins -= itens[sel].coins;
              animationBernardoLoja("Obrigado pela compra!!!");
            }
          } else {
            animationBernardoLoja("Sem espaço nos seus bolsos?");
          }
        } else {
          // nao tem moedas
          animationBernardoLoja("O QUE??? Você não tem moedas?");
        }
      }
    }
  }
  system("clear");
}