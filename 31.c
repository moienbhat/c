#include<stdio.h>
#include<math.h>
int main(){
  int n,i;
  int x=2;
  printf("enter number of terms ");
  scanf("%d",&n);
   printf("2  ");
  for (i=1;i<n;i++){
  x = pow(x,2);
  printf("%d  ",x);
  }
    return 0;
}