#include<stdio.h>
int main() {

  int i,n;
  printf("Enter number of elements ");
  scanf("%d",&n);
  int arr[n];
  printf("enter the elements ");
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);

  printf("the elements of integer array are ");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
  return 0;

}