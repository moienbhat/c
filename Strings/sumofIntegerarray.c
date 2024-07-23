#include<stdio.h>
int main() {
  int sum = 0;
  int n;
  printf("enter number of elements in integer array  ");
  scanf("%d",&n);
  int arr[n];
  printf("enter elements ");

  for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }

  for(int i=0;i<n;i++)
  sum = sum + arr[i];
  printf(" sum of integer array is  %d",sum);

  return 0;
}