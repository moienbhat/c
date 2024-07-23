#include<stdio.h>
int main(){
    char arr[] = {'a','t','l','a','s','!'};
    // char ch = '\0';    // null character 0
    int i = 0;  
    while(arr[i]!='!'){
        printf("%c",arr[i]);
        i++;
    } 
           
    // printf("%d",ch);
    return 0;
}