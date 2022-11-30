#ifndef GAME_H
#define GAME_H

#include "entity.h"

void start();
int rng();
void loadLevel(int level_enemies[], int level_item_uses[], int array_size);
void fight(Player *player, Enemy *enemy);

#endif