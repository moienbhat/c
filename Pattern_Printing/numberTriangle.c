#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of Rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ // no of lines/rows  =i
        for(int j=1;j<=i;j++){ //no of columns  =j
            printf("%d ",j);
    }
    printf("\n");
    }                                           

    return 0;
}
