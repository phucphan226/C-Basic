#include<stdio.h>
long long gt(long long n){
    if(n==0){
        return 1;
    }
    else{
        return n*gt(n-1);
    }
}
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%lld", gt(n));
}