#include<stdio.h>
#include<limits.h> 
int main(){
    int arr[7] = {-1,-4,-2,-8,-19,-5,-12};
    int max = INT_MIN; 
    int smax = INT_MIN;                  // sab se chota number
    for(int i=0;i<=6;i++){
        if (max<arr[i]){
            smax = max;
            smax = arr[i];
        }
       else if(smax<arr[i] && max!=arr[i]){
        smax = arr[i];
       }
    }
     
    printf("%d",smax);
    return 0;
}