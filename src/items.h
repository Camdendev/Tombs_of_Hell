#ifndef ITEMS_H
#define ITEMS_H

typedef struct {
    int heal_amount;
    int defense_amount;
    int damage_amount;
    int uses;
} Item;

Item heal_t1;
Item heal_t2;
Item heal_t3;

Item defense_t1;
Item defense_t2;
Item defense_t3;

Item berserk;

void initItems();
void useItem();

#endif