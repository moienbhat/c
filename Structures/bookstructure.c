#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        int noOfPages;
        float price;
            } a,b,c;
            a.noOfPages = 100;
            a.price = 411.5;
            strcpy(a.name,"Secret Seven");
            printf("%d\n",a.noOfPages);
            printf("%f\n",a.price);
            printf("%s\n",a.name);

return 0;
}