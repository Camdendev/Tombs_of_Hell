#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "items.h"
#include "entity.h"

void initItems() {
    heal_t1.heal_amount = 2;
    heal_t1.uses = 5;
    heal_t2.heal_amount = 4;
    heal_t2.uses = 3;
    heal_t3.heal_amount = 6;
    heal_t3.uses = 1;

    defense_t1.defense_amount = 1;
    defense_t1.uses = 3;
    defense_t2.defense_amount = 2;
    defense_t2.uses = 2;
    defense_t3.defense_amount = 3;
    defense_t3.uses = 1;

    berserk.damage_amount = 1;
    berserk.uses = 1;
}

void useItem() {
    printf(
        "\n(1) Tier 1 Health Potion (%d Remaining)\n"
        "(2) Tier 2 Health Potion (%d Remaining)\n"
        "(3) Tier 3 Health Potion (%d Remaining)\n"
        "(4) Tier 1 Defense Potion (%d Remaining)\n"
        "(5) Tier 2 Defense Potion (%d Remaining)\n"
        "(6) Tier 3 Defense Potion (%d Remaining)\n"
        ">", heal_t1.uses, heal_t2.uses, heal_t3.uses, defense_t1.uses, defense_t2.uses, defense_t3.uses
    );

    char choice = getchar();
    getchar();

    switch(choice) {
        case '1':
            if(heal_t1.uses >= 1) {
                heal_t1.uses -= 1;
                player.health += heal_t1.heal_amount;
                printf("\nHealed %d health\nRemaining uses: %d\n", heal_t1.heal_amount, heal_t1.uses);
            } else {
                printf("\nNo remaining uses\n");
            }
            break;
        case '2':
            if(heal_t2.uses >= 1) {
                heal_t2.uses -= 1;
                player.health += heal_t2.heal_amount;
                printf("\nHealed %d health\nRemaining uses: %d\n", heal_t2.heal_amount, heal_t2.uses);
            } else {
                printf("\nNo remaining uses\n");
            }
            break;
        case '3':
            if(heal_t3.uses >= 1) {
                heal_t3.uses -= 1;
                player.health += heal_t3.heal_amount;
                printf("\nHealed %d health\nRemaining uses: %d\n", heal_t3.heal_amount, heal_t3.uses);
            } else {
                printf("\nNo remaining uses\n");
            }
            break;
        case '4':
            if(defense_t1.uses >= 1) {
                defense_t1.uses -= 1;
                player.defense += defense_t1.defense_amount;
                printf("\nAdded %d defense\nRemaining uses: %d\n", defense_t1.defense_amount, defense_t1.uses);
            } else {
                printf("\nNo remaining uses\n");
            }
            break;
        case '5':
            if(defense_t2.uses >= 1) {
                defense_t2.uses -= 1;
                player.defense += defense_t2.defense_amount;
                printf("\nAdded %d defense\nRemaining uses: %d\n", defense_t2.defense_amount, defense_t2.uses);
            } else {
                printf("\nNo remaining uses\n");
            }
            break;
        case '6':
            if(defense_t3.uses >= 1) {
                defense_t3.uses -= 1;
                player.defense += defense_t3.defense_amount;
                printf("\nAdded %d defense\nRemaining uses: %d\n", defense_t3.defense_amount, defense_t3.uses);
            } else {
                printf("\nNo remaining uses\n");
            }
            break;
        // case '7':
        //     if(berserk.uses >= 1) {
        //         berserk.uses -= 1;
        //         player.damage += 1;
        //         printf("\nAdded %d damage to player\nRemaining uses: %d\n", berserk.damage_amount, berserk.uses);
        //     } else {
        //         printf("\nNo remaining uses\n");
        //     }
        case 'q':
            exit(EXIT_SUCCESS);
            break;
        default:
            printf("Nah, that ain't right.\n");
            break;
    }
}