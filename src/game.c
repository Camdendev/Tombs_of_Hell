#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "game.h"
#include "items.h"
#include "levels.h"

#define ARRAY_SIZE(x) (sizeof(x) / sizeof(x[0])) //return size of an array
#define SLEEP_TIME(x) x * 1000000 //Converts from seconds to milliseconds
#define clear() printf("\033[%dm\033[2J\033[1;1f",40);

void start() {
    clear();

    initItems();
    initEntities();

    printf(
        "Welcome to the Tombs of Hell\n\n"
        "Choose a level\n"
        "(1) Level 1\n"
        "(2) Level 2\n"
        "(3) Level 3\n"
        "(4) Level 4\n"
        "(5) Level 5\n"
        "(6) Level 6\n"
        "(7) Level 7\n"
        "(8) Level 8\n"
        "(9) Level 9\n"
        "(q) Quit\n"
        ">"
    );

    char choice = getchar();getchar();

    switch(choice) {
        case '1':
            loadLevel(level_1_enemies, level_1_item_uses, ARRAY_SIZE(level_1_enemies));
            break;
        case '2':
            loadLevel(level_2_enemies, level_2_item_uses, ARRAY_SIZE(level_2_enemies));
            break;
        case '3':
            loadLevel(level_3_enemies, level_3_item_uses, ARRAY_SIZE(level_3_enemies));
            break;
        case '4':
            loadLevel(level_4_enemies, level_4_item_uses, ARRAY_SIZE(level_4_enemies));
            break;
        case '5':
            loadLevel(level_5_enemies, level_5_item_uses, ARRAY_SIZE(level_5_enemies));
            break;
        case '6':
            loadLevel(level_6_enemies, level_6_item_uses, ARRAY_SIZE(level_6_enemies));
            break;
        case '7':
            loadLevel(level_7_enemies, level_7_item_uses, ARRAY_SIZE(level_7_enemies));
            break;
        case '8':
            loadLevel(level_8_enemies, level_8_item_uses, ARRAY_SIZE(level_8_enemies));
            break;
        case '9':
            loadLevel(level_9_enemies, level_9_item_uses, ARRAY_SIZE(level_9_enemies));
            break;
        case 'q':
            exit(EXIT_SUCCESS);
        default:
            printf("Invalid Level Selection\n");
            break;
    }   
}

int rng(int a) {
    int seed = a * time(NULL) * 11242022;
    srand(seed);
    return (rand() % 10)+1;
}

void loadLevel(int level_enemies[], int level_item_uses[], int array_size) {
    heal_t1.uses = level_item_uses[0];
    heal_t2.uses = level_item_uses[1];
    heal_t3.uses = level_item_uses[2];
    defense_t1.uses = level_item_uses[3];
    defense_t2.uses = level_item_uses[4];
    defense_t3.uses = level_item_uses[5];

    for(int i=0;i<array_size;i++) {
        switch(level_enemies[i]) {
            case 0:
                fight(&player, &undead);
                break;
            case 1:
                fight(&player, &gargoyle);
                break;
            case 2:
                fight(&player, &devil);
                break;
            case 3:
                fight(&player, &hellhound);
                break;
            case 4:
                fight(&player, &centaur);
                break;
            case 5:
                fight(&player, &werewolf);
                break;
            case 6:
                fight(&player, &revenant);
                break;
            case 7:
                fight(&player, &fallenangel);
                break;
            case 8:
                fight(&player, &dragon);
                break;
            case 9:
                fight(&player, &archdemon);
                break;
            case 10:
                fight(&player, &vampire);
                break;
            case 11:
                fight(&player, &hydra);
                break;
            case 12:
                fight(&player, &cerberus);
                break;
            case 13:
                fight(&player, &reaper);
                break;
            case 14:
                fight(&player, &hades);
                break;
            default:
                printf("Hold on, wait a minute...somethin ain't right here.");
                break;
        }
    }

    if(player.health >= 1) {
        printf("You Win\n");
    }
    
    usleep(SLEEP_TIME(2));
    start();
}

void fight(Player *plr, Enemy *enemy) {
    while(enemy->health >= 1 && plr->health >= 1) {
        clear();
        
        printf("Player Health: %d\n", plr->health);
        printf("Player Defense: %d\n\n", plr->defense);
        printf("%s Health: %d\n", enemy->name, enemy->health);
        printf("%s Defense: %d\n\n", enemy->name, enemy->defense);

        printf(
            "(1) Attack\n"
            "(2) Use Item\n"
            "(r) Run\n"
            ">"
        );

        char choice = getchar();getchar();

        switch(choice) {
            case '1':
                if(rng(enemy->health) < enemy->defense) {
                    printf("\nUnsuccessful Hit\n");
                    if(rng(plr->health) < plr->defense) {
                        //plr->health -= enemy->damage;
                    } else {
                        plr->health -= enemy->damage;
                    }
                } else {
                    printf("\nSuccessfully dealt %d damage\n", plr->damage);
                    enemy->health -= plr->damage;
                    if(rng(plr->health) < plr->defense) {
                        //plr->health -= enemy->damage;
                    } else {
                        plr->health -= enemy->damage;
                    }
                }

                usleep(SLEEP_TIME(1.5));
                break;
            case '2':
                useItem();
                if(rng(plr->health) < plr->defense) {
                    plr->health -= enemy->damage;
                }

                usleep(SLEEP_TIME(2));
                break;
            case 'r':
                start();
                break;
            default:
                printf("Invalid Operation\n");
                break;
        }
    }

    if(plr->health <= 0) {
        printf("\nYou Lose\n");
    }
}