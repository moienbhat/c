#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int a =0;
for(int i=2;i<=n-1;i++){
    if(n%i==0){
        a = 1;     //i is factor of n
        
        break;
    }

}
if(a==0) rintf("the number is composite\n");
   
   return 0;
}