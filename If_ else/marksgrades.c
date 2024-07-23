#include <stdio.h>
int main()
{
    int n;
    printf("Enter percentage : ");
    scanf("%d", &n);
    if (n > 90)
    {
        printf("Excellent\n");
    }
    else if (n > 80)
    {
        printf("Very Good \n");
    }
    else if (n > 70)
    {
        printf("Good\n");
    }
    else if (n > 60)
    {
        printf("Can do Better\n");
    }
    else if (n > 50)
    {
        printf("Average\n");
    }
    else if (n > 40)
    {
        printf("Below Average\n");
    }
    else
        (n > 30);
        {
            printf("Fail\n");
        }

    return 0;
}