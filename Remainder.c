#include<stdio.h>
int main(){



    int a,b;
    printf("enter dividend : ");
    scanf("%d",&a);
    printf("enter Divisor : ");
    scanf("%d",&b);
    int q = a/b;
    int r = a - b*q;
    printf("The Remainder when %d is divided by %d is : %d",a,b,r);


    
    return 0;
    }