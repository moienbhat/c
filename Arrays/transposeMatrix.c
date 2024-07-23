#include<stdio.h>
int main () {
  int m,i,j,n;
  

printf("Enter number of rows and Columns of matrix ");
scanf("%d %d",&m,&n);


int a [m][n];    

printf("Enter the elements of matrix (row by row)");
for(i=0;i<m;i++) {
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
}
int b[m][n]; 

printf("Elements of Matrix is  ");
for(i=0;i<m;i++) {
  for(j=0;j<n;j++) {
    b[i][j] = a[j][i];
  printf("%d ",b[i][j]);
 
  }
}
  return 0;
}