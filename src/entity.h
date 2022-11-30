#ifndef ENTITY_H
#define ENTITY_H

typedef struct {
    int health;
    int defense;
    int damage;
} Player;

typedef struct {
    char * name;
    int health;
    int defense;
    int damage;
} Enemy;

//Player
Player player;

//Easy Enemies
Enemy undead; //id 0
Enemy gargoyle; //id 1
Enemy devil; //id 2

//Medium Enemies
Enemy hellhound; //id 3
Enemy centaur; //id 4
Enemy werewolf; //id 5

//Hard Enemies
Enemy revenant; //id 6
Enemy fallenangel; //id 7
Enemy dragon; //id 8

//Mini-Bosses
Enemy archdemon; //id 9
Enemy vampire; //id 10
Enemy hydra; //id 11

//Bosses
Enemy cerberus; //id 12
Enemy reaper; //id 13
Enemy hades; //id 14

void initEntities();

#endif