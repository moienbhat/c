#include<stdio.h>.h>
int main(){
        int arr[3][4] = {{1,2,9,6},{3,4,5,1},{5,6,3,4}};
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }

    return 0;
}