#include<stdio.h>
int main () {
  int m,i,j,n;
  int sum = 0;
  

printf("Enter number of rows and Columns of matrix ");
scanf("%d %d",&m,&n);


int a [m][n];    

printf("Enter the elements of matrix (row by row)");
for(i=0;i<m;i++) {
  for(j=0;j<n;j++){
  scanf("%d",&a[i][j]);

if(i==j){
  sum = sum +a[i][j];
  printf("%d",sum);}
}
}
  return 0;
}