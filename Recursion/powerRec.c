#include<stdio.h>
int power(int a, int b){
    int x = 1;
    if(b==0)  return 1;
    int recAns = a*power(a,b-1);
    return recAns;
}
int main(){
    int a;
    printf("Enter Base : ");
    scanf("%d",&a);
    int b;
    printf("Enter Power : ");
    scanf("%d",&b);
    int p = power(a,b);
    printf("%d raised to the power %d is %d ",a,b,p);
    return 0;
}