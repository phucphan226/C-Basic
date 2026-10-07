#include<stdio.h>
int main(){
    long long n;
    scanf("%lld", &n);
        for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=i){
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n");
        for(int i=n; i>=1; i--){
        for(int j=1; j<=n; j++){
            if(j<=i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(n-j>=i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n");
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n; j++){
            if(j<=n-i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(j==1||i==j||i==n){
                printf("*");
            }
            else{
                printf(" ");
            }
    }
                printf("\n");
}
}