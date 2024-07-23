#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] = {12,45,87,97,64,35,76};
    int x = 5;
    int idx = -1;
    bool flag = false;          // false means not present+
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
           flag = true;
          idx = i;
            break;
        }
    }
    if(flag == false){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is present in the array and its index is %d",x,idx);
    }
    return 0;
}