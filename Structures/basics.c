#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;

    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    printf("%c",pikachu.tier);


    return 0;
}