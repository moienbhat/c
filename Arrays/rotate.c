#include<stdio.h>
void reverse(int arr[]){
    int i = 0;
    int j = 6;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
        return;
    }

int main(){
    int arr[7] = {1,4,2,8,19,5,12};
    int n = 7;
    int k = 3;
    k = k%n;
    reverse(0,n-1)
         reverse (0,4);     
         reverse(k,n-1);     
    for(int i=0;i<=6;i++){
    
      printf("%d ",arr[i]);  
    }
   
    return 0;
}