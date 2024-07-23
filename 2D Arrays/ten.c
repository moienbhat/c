#include<stdio.h>.h>
int main(){
        int arr[5][5] = {{1,2,9,6},{3,4,5,1},{5,6,3,4}};
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                scanf("%d ",arr[i][j]);
                printf("%d ",arr[i][j]);
            }
              }
              printf("\n");
               for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
               printf("%d ",arr[i][j]);
            }
            printf("\n");
               }
    return 0;
}