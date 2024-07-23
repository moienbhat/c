#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of Lines : ");
    scanf("%d",&n);
    int nst=1;
    for(int i=1;i<=n;i++){
    for(int k=1;k<=n-i;k++){
        printf("  ");
    }
    for(int j=1;j<=nst;j++){
        printf("* ");
    }
    nst = nst + 2;                   // nst=number of stars.
    printf("\n");
    }
    return 0;
}