#include<stdio.h>
void england(){
   printf("you are in England\n");
   return; 
}
void australia(){
   printf("you are in Auatralia\n");
   england();
   return; 
}
void india(){
   printf("you are in India\n");
   australia();
   return; 
}
int main(){
    india();
    return 0;
}