#include<stdio.h>
#include<math.h>
void uocSNT(int n){
    for(int i=2; i<=sqrt(n); i++){
        while(n%i==0){
            printf("%d ", i);
            n=n/i;
        }
    }
    if(n>1){
        printf("%d", n);
    }
}
void main(){
    int n;
    scanf("%d", &n);
    uocSNT(n);
}