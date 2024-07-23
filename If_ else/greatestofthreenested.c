#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter ist number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
    if(a>b){
        if(a>c)
        printf("%dis greatest",a);
        else
        printf("%dis greatest",c);
    }
    else{
        if(b>c)
        printf("%dis greatest",b);
        else
        printf("%dis greatest",c);

    }
    return 0;
}