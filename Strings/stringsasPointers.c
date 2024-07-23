#include<stdio.h>
#include<string.h>
int main (){
    char str[] = "College Students";
    // printf("%p\n",&str[0]);
    // printf("%p",&str);
    char* ptr = str;
    int i = 0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    return 0;
}
