#include<stdio.h>
#include <stdbool.h>
int main(){
    int arr[100];
    int n,i;

    /* printf("Enter size of the integer Array  ");
scanf("%d",&n);*/

printf("Enter Elements of the integer Array  ");
scanf("%d",&arr[i]);



    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
    for(int i=0;i<n-1;i++){
        bool flag = false;
    for (int j=0;j<=n-1-i ;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            flag = false;
            }
    }
    printf("\n");
    } 
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
    return 0;
    }