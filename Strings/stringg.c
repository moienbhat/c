#include<stdio.h>
#include<string.h>
int main(){
   // char str[] = "College Students";
    // int i = 0;
    // while(str[i] != '\0'){
    //     printf("%c",str[i]);
    //     i++;
    // }

//   printf("%s",str);                // second method to print string


//  puts("str");                    // third method


char str[40];
gets("str");
printf("your input was ;  %s",str);
    return 0;
}