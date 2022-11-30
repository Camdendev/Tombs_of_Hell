#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "entity.h"

void initEntities() {
    //Player
    player.health = 10;
    player.defense = 0;
    player.damage = 1;

    //Easy Enemies
    undead.name = "Undead Soldier";
    undead.health = 3;
    undead.defense = 0;
    undead.damage = 1;

    gargoyle.name = "Gargoyle";
    gargoyle.health = 3;
    gargoyle.defense = 0;
    gargoyle.damage = 1;

    devil.name = "Devil";
    devil.health = 3;
    devil.defense = 0;
    devil.damage = 1;

    //Medium Enemies
    hellhound.name = "Hellhound";
    hellhound.health = 4;
    hellhound.defense = 1;
    hellhound.damage = 1;

    centaur.name = "Centaur";
    centaur.health = 4;
    centaur.defense = 1;
    centaur.damage = 1;

    werewolf.name = "Werewolf";
    werewolf.health = 4;
    werewolf.defense = 1;
    werewolf.damage = 1;

    //Hard Enemies
    revenant.name = "Revenant";
    revenant.health = 5;
    revenant.defense = 2;
    revenant.damage = 1;

    fallenangel.name = "Fallen Angel";
    fallenangel.health = 5;
    fallenangel.defense = 2;
    fallenangel.damage = 1;

    dragon.name = "Dragon";
    dragon.health = 5;
    dragon.defense = 2;
    dragon.damage = 1;

    //Mini-Bosses
    archdemon.name = "Archdemon";
    archdemon.health = 7;
    archdemon.defense = 4;
    archdemon.damage = 1;

    vampire.name = "Vampire";
    vampire.health = 7;
    vampire.defense = 4;
    vampire.damage = 1;

    hydra.name = "Hydra";
    hydra.health = 7;
    hydra.defense = 4;
    hydra.damage = 1;

    //Bosses
    cerberus.name = "Cerberus";
    cerberus.health = 10;
    cerberus.defense = 4;
    cerberus.damage = 2;

    reaper.name = "Reaper";
    reaper.health = 15;
    reaper.defense = 5;
    reaper.damage = 2;

    hades.name = "Hades";
    hades.health = 20;
    hades.defense = 7;
    hades.damage = 2;
}