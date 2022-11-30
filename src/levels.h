#ifndef LEVELS_H
#define LEVELS_H

//id 0: undead
//id 1: gargoyle
//id 2: devil
//id 3: hellhound
//id 4: centaur
//id 5: werewolf
//id 6: revenant
//id 7: fallenangel
//id 8: dragon
//id 9: archdemon
//id 10: vampire
//id 11: hydra
//id 12: cerberus
//id 13: reaper
//id 14: hades

int level_1_enemies[] = {0, 1, 4};
int level_1_item_uses[] = {1, 0, 2, 0, 0, 0};

int level_2_enemies[] = {3, 3, 6, 7, 9};
int level_2_item_uses[] = {1, 1, 6, 0, 0, 0};

int level_3_enemies[] = {2, 2, 7, 7, 8, 10, 12};
int level_3_item_uses[] = {1, 1, 10, 0, 0, 0};

int level_4_enemies[] = {1, 1, 2, 6, 7, 8};
int level_4_item_uses[] = {0, 1, 5, 0, 0, 0};

int level_5_enemies[] = {3, 2, 5, 8, 8, 11};
int level_5_item_uses[] = {2, 0, 7, 0, 0, 0};

int level_6_enemies[] = {6, 6, 6, 2, 13};
int level_6_item_uses[] = {2, 0, 10, 0, 0, 0};

int level_7_enemies[] = {4, 2, 0, 6, 9, 10};
int level_7_item_uses[] = {2, 0, 7, 1, 0, 0};

int level_8_enemies[] = {4, 5, 5, 1, 2, 3, 9, 11};
int level_8_item_uses[] = {0, 1, 7, 0, 1, 0};

int level_9_enemies[] = {5, 7, 9, 10, 11, 14};
int level_9_item_uses[] = {1, 1, 15, 0, 0, 1};

#endif