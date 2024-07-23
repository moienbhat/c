#include<stdio.h>
int main () {
  int i,j;
  int flag = 1;
  char a[100];
  printf("Enter string ");
  scanf("%s",&a);
  for(i=0;a[i]!='\0';i++) 
  j=0;
  i--;

  while (j<i)
{
  if(a[i]!=a[j]){
    printf("String is not a pallindrome");
      flag = 0;
      break;
    }
    j++;
    i--;
  if(flag == 1)
printf("the string is a pallindrome  ");
  }
  
  

  return 0;
}
