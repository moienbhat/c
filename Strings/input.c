#include<stdio.h>
 int main () {
  char arr[100];
  int i;
  printf("Enter string ");
  scanf("%s",&arr);

  for(i=0;arr[i]!='\0';i++)
  i--;
  while(i>=0)
    printf("%c",arr[i]);
    i--;
 
  return 0;
 }