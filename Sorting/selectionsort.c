#include<stdio.h>
#include<limits.h>

int main(){
    int arr[5] = {5,40,300,20,1};
    int n = 5;
    printf("unsorted array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);

    }

     for(int i=0;i<n-1;i++){
        int min =  INT_MAX;
        int minidx = -1;
        for(int j=i;j<=n-1;j++){
        if(min>arr[j]){
             min = arr[j];
             minidx = j;
        }
    }

    int temp = arr [minidx];
    arr [minidx] arr [i];
    arr [i] = temp;
     }


    printf("\n");
    printf("sorted array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
    return 0;
}