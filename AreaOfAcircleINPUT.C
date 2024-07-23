#include<stdio.h>
int main(){
    float radius;
    printf("Enter Radius : ");
    scanf("%f",&radius);
    float pi = 3.1415;
    float area = pi * radius * radius;
    printf("%fthe area of circle is : ",area);
    return 0;
}   