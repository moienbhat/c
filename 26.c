#include<stdio.h>
int main(){
  float n;
  printf("Enter no. of terms of which sum is to be printed ");
  scanf("%f",&n);
  float i,sum=1;
  for(i=2;i<=n;i=i+2)
  {
    sum = sum + (1/i);

  }
  printf("Sum of Series is %f",sum );
  

  return 0;
}