#include<stdio.h>
int main ()  {
  int n,i,x,flag=0;

 
 printf("Enter number of Elements ");
  scanf("%d",&n);
    int arr[n];

  printf("Enter number of Elements ");
  for(i=0;i<n;i++) {
  scanf("%d",&arr[i]);
  }
  printf("Enter element to be searched ");
  scanf("%d",&x);
  for(i=0;i<n;i++){
    if ( x == arr[i]) {
    printf("Element found at position %d",i+1);
    flag = 1;
  } }

  if (flag==0){
    printf("Element not found ");
  }
  return 0;
}