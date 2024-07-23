#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the cordinates : ");
    scanf("%d %d", &x,&y);
    if(y==0 && x == 0){
        printf("The point is origin");
    }
else if(x==0){
    printf("Lies in y-axis");
}
else if(y==0){
    printf("Lies on x-axis");
}
else{
    printf("The point does not lie on axis");
}
 return 0;
}
