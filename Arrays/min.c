#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {1,4,2,8,19,5,12};
    int min = INT_MAX;                    // sab se chota number
    for(int i=0;i<=6;i++){
        if (min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;
}