#include<stdio.h>
long long stn(long long n){
    if(n<10){
        printf("%lld", n%10);
    }
    else{
        printf("%lld", n%10);
        stn(n/10);
    }
}
int main(){
    long long n;
    scanf("%lld", &n);
    stn(n);
}