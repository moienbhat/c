#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number of Rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter a Number of Columns : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){

        for(int i=1;i<=m;i++){
            printf("*");
        }
        printf("\n");
    }
   
    return 0;
}