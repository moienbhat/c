#include<stdio.h>
int main(){
    int r;
    printf("Enter Number of Rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter Number of Columns : ");
    scanf("%d",&c);
      printf("Enter all the elements\n");
    int arr[r] [c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",arr[i] [j]);
        }
            
     }
     int brr[c][r];
      printf("\n");   
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            brr[i][j] = arr[j][i];      
        }
    printf("\n");        
     }
    
    return 0;
}