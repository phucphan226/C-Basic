#include<stdio.h>
#include<math.h>
int dk1(long long n){
    if(n<10){
        return n;
    }
    else{
        return fmax(n%10, dk1(n/10));
    }
}
int dk2(long long n){
    if(n<10){
        return n;
    }
    else{
        return fmin(n%10, dk2(n/10));
    }
}
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%d %d", dk1(n), dk2(n));
    return 0;
}