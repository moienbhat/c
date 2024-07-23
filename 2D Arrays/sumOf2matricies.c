#include<stdio.h>
int main () {
  int i,j,m,n;
  printf("Enter number of rows and Columns of matricies to be added ");
scanf("%d %d",&m,&n);


int m1 [m][n];    

printf("Enter the elements of matrix 1 (row by row)");
for(i=0;i<m;i++) {
  for(j=0;j<n;j++){
  scanf("%d",&m1[i][j]);
  }}

int m2 [m][n];

printf("Enter the elements of matrix 2 (row by row)");
for(i=0;i<m;i++) {
  for(j=0;j<n;j++){
  scanf("%d",&m2[i][j]);
  }}

int c[m][n];

printf("sum is  ");
for(i=0;i<m;i++) {
  for(j=0;j<n;j++){
  c[i][j] = m1[i][j]+m2[i][j];
  printf("%d ",c[i][j]);
    }}

return 0;
}