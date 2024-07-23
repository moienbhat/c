#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("Enter Ist number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("Enter 3rd number : ");
    scanf("%d", &c);          
    if (a > b && b > c)
    {
        printf("%d is greatest", a);
    }
    if (b > a && b > c)
    {
        printf("%d is greatest", b);
    }
    if (c > a && c > b)
    {
        printf("%d is greatest", c);
    }
    return 0;
}