#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of Lines : ");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        int a = i-1;
        for(int q=1;q<=nsp;q++){  // spaces k liye loop
            printf(" ");
        }
        nsp--;   // eak se kam hote ja raha hai
    for(int k=1;k<=i;k++){                 // number triamgle k liye
        printf("%d ",k);
    }
    for(int j=1;j<=i-1;j++){
        printf("%d ",a);
        a--;
    }
    printf("\n");
    
    }
    return 0;
}