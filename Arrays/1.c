#include<stdio.h>
int main() {
  int n,x,i;
  int flag = 0;
    printf("Enter size of the integer Array  ");
scanf("%d",&n);
int arr[n];

printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

printf("Enter integer to be searched  ");
scanf("%d",&x);

for(i=0;i<n;i++){
  if(x==arr[i]) {
    printf("integer found at position %d",i+1);
    flag = 1;
      }
}
if(flag==0){
  printf("not found");
}


  return 0;
}