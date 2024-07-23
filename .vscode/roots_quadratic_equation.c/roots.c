#include<stdio.h>
#include<math.h>

int main(){

int a, b, c;

printf("enter the coefficients of the equation \n");

scanf("%d%d%d",&a,&b,&c);

int D = (b*b) - (4*a*c);

if(a==0){
  printf("it is not a quadratic equation");
}
else if(D == 0){
float root = (-b)/(2*a);
printf("the equation has only one root and that is: %f\n", root);

}else if (D > 0){

float r1 = (-b) + (sqrt(D)/(2*a));

float r2 = (-b) - (sqrt(D)/(2*a));
printf("the two roots are %f and %f\n", r1, r2);

}else {
float ra1 = (-b)/(2*a);
float ra2 = sqrt(-D) / (2*a);
printf("the roots are %f + i%f and %f - i%f\n", ra1, ra2, ra1, ra2);
}

return 0;}