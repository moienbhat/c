#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;        // *x = 9 now
    *y = temp;         // *y = 2 --> b = 2
}
int main(){
    int a = 2;
    int b = 9;
    
    swap(&a,&b);
    printf("The value of a is %d\n",a);
     printf("The value of b is %d\n",b);
     return 0;


}