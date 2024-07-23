#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon ;
    typedef struct legendarypokemon{
        pokemon 
        char ability[10];

    } legendarypokemon ;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"presssure");
    mewtwo.hp = 150;


    return 0;
}