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
        printf("\n");        
     }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i] [j]);  
        }
    printf("\n");        
     }
     int sum = 0;
     for( int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum += arr[i] [j];
        }
     }
     printf("The sum of the given matrix is %d",sum);
    
    return 0;
}