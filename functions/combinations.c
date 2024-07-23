#include<stdio.h>
int factorial(int x){                   //use of function to avoid repitition
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int r;
    printf("Enter r : ");
    scanf("%d",&r);
    
    // int nfact = factorial(n);
    // int rfact = factorial(r);
    // int nrfact = factorial(n-r);
//    for(int i=2;i<=n;i++){
//         nfact = nfact*i;
//     }
//     for(int i=2;i<=r;i++){
//         rfact = rfact*i;
//     }
//     for(int i=2;i<=n-r;i++){
//         nrfact = nrfact*i;
//     }   
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",ncr);

    return 0;
}