#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(int i=4;i<=23*n+1;i=i+3){
        printf("%d ",i);
    }
    return 0;
}
